################################################################################
#
# rsyslog (WBOS fork)
#
# Builds rsyslog from SkullofGods/rsyslog with the modules the WBOS RFC 5424
# log pipeline relies on. The routing/config overlay is a separate package
# (rsyslog-wbos-config) so this package installs only the daemon + init.
#
################################################################################

RSYSLOG_VERSION       ?= $(call qstrip,$(BR2_PACKAGE_RSYSLOG_VERSION))
RSYSLOG_SITE           = $(call github,SkullofGods,rsyslog,$(RSYSLOG_VERSION))
RSYSLOG_SITE_METHOD    = git
RSYSLOG_GIT_SUBMODULES = NO

RSYSLOG_LICENSE       = GPL-3.0+ (daemon), LGPL-3.0+ (runtime), Apache-2.0
RSYSLOG_LICENSE_FILES = COPYING COPYING.LESSER COPYING.ASL20

# libestr + libfastjson are mandatory (PKG_CHECK_MODULES); zlib enables gzip
# output (omfile). host-pkgconf for the PKG_CHECK_MODULES probes.
RSYSLOG_DEPENDENCIES = host-pkgconf libestr libfastjson zlib

# The committed tree carries a generated ./configure and there is no
# AM_MAINTAINER_MODE, so no autoreconf is needed (and none is wanted — it would
# pull host-autoconf/automake/libtool).
RSYSLOG_AUTORECONF = NO

# imuxsock, imklog and the rfc5424 parser are on by default / built into the
# core; mmpstrucdata is upstream-default OFF and must be requested explicitly.
RSYSLOG_CONF_OPTS = \
	--enable-mmpstrucdata \
	--enable-klog \
	--disable-testbench \
	--disable-generate-man-pages

define RSYSLOG_INSTALL_INIT_SYSV
	$(INSTALL) -D -m 0755 $(RSYSLOG_PKGDIR)/S01rsyslog \
		$(TARGET_DIR)/etc/init.d/S01rsyslog
endef

define RSYSLOG_INSTALL_INIT_SYSTEMD
	$(INSTALL) -D -m 0644 $(RSYSLOG_PKGDIR)/rsyslog.service \
		$(TARGET_DIR)/usr/lib/systemd/system/rsyslog.service
endef

$(eval $(autotools-package))
