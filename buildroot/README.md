# WBOS rsyslog — Buildroot package

A single, self-contained `package/rsyslog/` for the WBOS / mycelium switch
image. Drop it into your Buildroot tree's `package/` directory (it replaces the
stock rsyslog package) and enable `BR2_PACKAGE_RSYSLOG`.

```
buildroot/package/rsyslog/
├── Config.in                    # BR2_PACKAGE_RSYSLOG (+ EXTRA_PLUGINS)
├── rsyslog.mk                   # mainline-style build + WBOS bits
├── rsyslog.service              # systemd unit
├── S01rsyslogd                  # sysv init
├── rsyslog.conf                 # → /etc/rsyslog.conf   (WBOS receiver)
├── rsyslog.d/
│   └── 10-wbos-structured.conf  # → /etc/rsyslog.d/...  (per-service routing)
└── wbos.logrotate               # → /etc/logrotate.d/wbos
```

## Install (what you asked for)

```sh
cp -r buildroot/package/rsyslog  <your-buildroot>/package/
# then in menuconfig:
#   BR2_PACKAGE_RSYSLOG=y
#   (optional) BR2_PACKAGE_RSYSLOG_EXTRA_PLUGINS=y
```

That is all. The package builds rsyslogd from the fork and installs the WBOS
RFC 5424 receiver config + logrotate; no separate config package is needed.

## What differs from the stock Buildroot rsyslog package

Two WBOS changes on top of the standard `rsyslog.mk`:

1. **`--enable-mmpstrucdata` in the base `RSYSLOG_CONF_OPTS`** — upstream-default
   OFF; the WBOS drop-in uses it to explode `[wbos@<PEN> ...]` into properties.
   It is on regardless of `BR2_PACKAGE_RSYSLOG_EXTRA_PLUGINS`.
2. **`RSYSLOG_INSTALL_CONF` installs the WBOS config** (this directory's
   `rsyslog.conf` + `rsyslog.d/10-wbos-structured.conf` + `wbos.logrotate`)
   instead of the stock `platform/redhat/rsyslog.conf`.

The config files ship **in the package directory**, not pulled from `$(@D)`, so
config delivery does not depend on which rsyslog git ref is fetched. The config
uses only stock modules — `imuxsock`, `imklog` and the built-in `rfc5424`
parser — so no extra `--enable-*` is required (the rfc5424 parser preserves the
`[wbos@<PEN> ...]` element in `%structured-data%` on its own). `mmpstrucdata`
is optional and only needed to filter on individual SD fields.

`RSYSLOG_SITE` points at the GitHub fork (`git@github.com:SkullofGods/rsyslog.git`)
and `RSYSLOG_VERSION = myc_custom`. The WBOS config ships from `package/rsyslog/`
(not the fetched source), so the exact rsyslog ref does not matter for behaviour —
pin `RSYSLOG_VERSION` to a tag/sha on myc_custom for reproducible release builds.

## The WBOS log pipeline

```
 asic_manager  ─┐
 config_manager ─┤  RFC 5424 frames        ┌─ /var/log/wbos/asic_manager.log
 route_manager  ─┼──►  /dev/log  ──► rsyslog ┼─ /var/log/wbos/config_manager.log
 route_server   ─┤   (imuxsock)            ├─ ... (one file per service)
 flow_manager   ─┘                          ├─ /var/log/wbos/wbos.log (combined)
                                            └─ (optional) omfwd → collector
```

Each daemon writes a fully-formed RFC 5424 frame
(`<PRI>1 TIMESTAMP HOST APP-NAME PROCID MSGID [wbos@<PEN> ...] MSG`) to `/dev/log`
with `APP-NAME` == its service name (facility `daemon`):

- **C++**: `async_log.hpp` (asic-manager), `wbos_clog.hpp` std::cerr redirect
  (flow-manager), libroute `logger` /dev/log sink (route-manager/route-server),
  libc `syslog()` (config-manager).
- **Python**: shared `Rfc5424Formatter` + a `/dev/log` datagram handler
  (route-server, route-manager, flow-manager).

The key detail that makes RFC 5424 survive ingestion: imuxsock is loaded with
`SysSock.UseSpecialParser="off"` so the raw datagram reaches the parser chain,
and the chain tries `rsyslog.rfc5424` before `rsyslog.rfc3164`.

## systemd: rsyslog owns /dev/log

On a systemd image `/dev/log` is normally owned by **journald**, which only
forwards a *re-framed* copy to rsyslog (`syslog.socket`) — that drops the RFC
5424 framing and makes the app-name unreliable (e.g. Python services show up as
`python3`). So the daemons' frames would never reach rsyslog intact.

To fix this the package makes **rsyslog own `/dev/log` directly**:

- `RSYSLOG_INSTALL_INIT_SYSTEMD` masks `systemd-journald-dev-log.socket`
  (symlink to `/dev/null` in `/etc/systemd/system/`), freeing `/dev/log`.
- `rsyslog.service` drops `Requires=syslog.socket`, so imuxsock binds `/dev/log`
  itself (the same setup the config was validated under).

journald still works for everything else (unit stdout/stderr, `sd_journal`) via
its native socket; it just no longer intercepts `/dev/log`. To revert to
journald-owned `/dev/log`, remove the mask symlink and restore
`Requires=syslog.socket`.

This applies to systemd init only. With BusyBox/sysv init, `S01rsyslogd` starts
rsyslogd which owns `/dev/log` outright — nothing extra needed.

The PEN is currently the documentation placeholder `32473` (RFC 5612); replace
it with the project's registered IANA PEN before release (in the daemons; the
routing here keys on APP-NAME, not the PEN, so it is unaffected).

## Validate on the target

```sh
rsyslogd -N1 -f /etc/rsyslog.conf      # config syntax check (exit 0 = OK)

# On systemd: confirm rsyslog (not journald) owns /dev/log.
systemctl is-enabled systemd-journald-dev-log.socket   # -> masked
ss -lx | grep /dev/log                                 # held by rsyslogd
journalctl -u rsyslog | grep -i "Acquired UNIX socket" # should NOT mention
                                                       # /run/systemd/journal/syslog

logger --rfc5424 --tag asic_manager -- '[wbos@32473 op="ping"] hi'
cat /var/log/wbos/asic_manager.log
```
