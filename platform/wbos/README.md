# WBOS rsyslog configuration

rsyslog configuration for the WBOS / mycelium switch image. It receives the
RFC 5424 structured log stream emitted by the WBOS daemons and routes it,
RFC 5424 preserved, into per-service files.

## The WBOS log pipeline

```
 asic_manager  ─┐
 config_manager ─┤  RFC 5424 frames        ┌─ /var/log/wbos/asic_manager.log
 route_manager  ─┼──►  /dev/log  ──► rsyslog ┼─ /var/log/wbos/config_manager.log
 route_server   ─┤   (imuxsock)            ├─ ... (one file per service)
 flow_manager   ─┘                          ├─ /var/log/wbos/wbos.log (combined)
                                            └─ (optional) omfwd → collector
```

Every daemon writes a fully-formed RFC 5424 frame
(`<PRI>1 TIMESTAMP HOST APP-NAME PROCID MSGID [wbos@<PEN> ...] MSG`) to the
local `/dev/log` socket:

- **C++** services use `async_log.hpp` (asic-manager) — an async, fork-safe,
  lock-free RFC 5424 sink to `/dev/log`.
- **Python** services use the shared `Rfc5424Formatter` (route-server) attached
  to a `SysLogHandler("/dev/log")`.

`APP-NAME` is the service name (`asic_manager`, `config_manager`,
`route_manager`, `route_server`, `flow_manager`) and the SD-ID is
`wbos@<PEN>`. The PEN is currently the documentation placeholder `32473`
(RFC 5612) and must be replaced with the project's registered IANA PEN before
release — consistently in both the daemons and any SD-based filters here.

## Files

| File | Installed as | Role |
|---|---|---|
| `rsyslog.conf` | `/etc/rsyslog.conf` | base: imuxsock + RFC 5424 parser chain, RFC 5424 default on-disk format |
| `rsyslog.d/10-wbos-structured.conf` | `/etc/rsyslog.d/10-wbos-structured.conf` | per-service split, combined stream, optional forward |

The key detail that makes RFC 5424 survive ingestion: imuxsock is loaded with
`SysSock.UseSpecialParser="off"` so the raw datagram reaches the parser chain,
and the chain tries `rsyslog.rfc5424` before `rsyslog.rfc3164`. Without this,
imuxsock's legacy parsing would mangle the `<PRI>1 ...` frame and drop the SD.

## Buildroot

Shipped by the config-only package `buildroot/package/rsyslog-wbos-config`,
which installs both files into the target rootfs and depends on `rsyslog`.
Select `BR2_PACKAGE_RSYSLOG_WBOS_CONFIG=y` (it `select`s `BR2_PACKAGE_RSYSLOG`).

Requires these rsyslog modules in the image: `imuxsock`, `pmrfc5424`,
`mmpstrucdata` (the last only for SD field explosion; drop the
`action(type="mmpstrucdata")` line if it is not built in).

## Quick local test

```sh
# point a test rsyslog at this config and emit a frame the way the daemons do
logger --rfc5424 --tag asic_manager -- \
  '[wbos@32473 commit="abc123" op="program" seq="7" result="ok"] hello'
tail -f /var/log/wbos/asic_manager.log /var/log/wbos/wbos.log
```
