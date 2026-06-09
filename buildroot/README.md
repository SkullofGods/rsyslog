# WBOS Buildroot packages (rsyslog)

Two packages live here. They are meant to be dropped into a `BR2_EXTERNAL`
tree (same convention as the asic-manager / config-manager repos).

```
buildroot/package/
├── rsyslog/                 ← the daemon, built from this fork
└── rsyslog-wbos-config/     ← the RFC 5424 receiver config overlay
```

## What is "special" about this rsyslog

The WBOS log pipeline (5 daemons → /dev/log → rsyslog → /var/log/wbos/) needs
rsyslog built with:

| module | upstream default | needed for |
|---|---|---|
| `imuxsock` | on | reading /dev/log |
| `imklog` | on | kernel log |
| rfc5424 parser | built into core | parsing the daemons' `<PRI>1 ...` frames |
| **`mmpstrucdata`** | **OFF** | exploding `[wbos@<PEN> ...]` SD into properties |

So the one non-default flag is **`--enable-mmpstrucdata`**. Everything else the
config relies on is on by default. (If you drop the `action(type="mmpstrucdata")`
line from the drop-in, mmpstrucdata is not required at all.)

## Wiring it into BR2_EXTERNAL

Add the packages to your external's `Config.in` and `external.mk` (or use
`BR2_EXTERNAL`'s auto-discovery), then in menuconfig:

```
BR2_PACKAGE_RSYSLOG=y               # the daemon (this fork, --enable-mmpstrucdata)
BR2_PACKAGE_RSYSLOG_WBOS_CONFIG=y   # the /etc/rsyslog.* overlay (selects rsyslog)
```

`rsyslog-wbos-config` owns `/etc/rsyslog.conf`, `/etc/rsyslog.d/10-wbos-structured.conf`
and `/etc/logrotate.d/wbos`; the `rsyslog` package installs only the daemon and an
init script (sysv `S01rsyslog` or the systemd unit), so there is no file conflict.

### If your tree already uses mainline Buildroot's rsyslog

Mainline Buildroot also defines `BR2_PACKAGE_RSYSLOG`. Do **not** enable both.
Either disable mainline rsyslog and use this package, **or** keep mainline and
point it at the fork via `local.mk` — see
[`package/rsyslog/local.mk.example`](package/rsyslog/local.mk.example).

## Validate the config on the target

```sh
rsyslogd -N1 -f /etc/rsyslog.conf      # config syntax check (exit 0 = OK)
logger --rfc5424 --tag asic_manager -- '[wbos@32473 op="ping"] hi'
cat /var/log/wbos/asic_manager.log
```
