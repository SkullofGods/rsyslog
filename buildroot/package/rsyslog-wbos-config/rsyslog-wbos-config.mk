################################################################################
#
# rsyslog-wbos-config
#
# Config-only overlay: ships the WBOS rsyslog main config and the structured
# routing drop-in into the target rootfs. Source lives in this repo under
# platform/wbos/ so it is versioned together with the rsyslog build it targets.
#
################################################################################

RSYSLOG_WBOS_CONFIG_VERSION         ?= $(call qstrip,$(BR2_PACKAGE_RSYSLOG_WBOS_CONFIG_VERSION))
RSYSLOG_WBOS_CONFIG_SITE             = $(call github,SkullofGods,rsyslog,$(RSYSLOG_WBOS_CONFIG_VERSION))
RSYSLOG_WBOS_CONFIG_SITE_METHOD      = git
RSYSLOG_WBOS_CONFIG_GIT_SUBMODULES   = NO

RSYSLOG_WBOS_CONFIG_DEPENDENCIES     = rsyslog

# Pull only the config subtree; nothing to compile.
define RSYSLOG_WBOS_CONFIG_INSTALL_TARGET_CMDS
	$(INSTALL) -D -m 0644 $(@D)/platform/wbos/rsyslog.conf \
		$(TARGET_DIR)/etc/rsyslog.conf
	$(INSTALL) -D -m 0644 $(@D)/platform/wbos/rsyslog.d/10-wbos-structured.conf \
		$(TARGET_DIR)/etc/rsyslog.d/10-wbos-structured.conf
	$(INSTALL) -D -m 0644 $(@D)/platform/wbos/logrotate.d/wbos \
		$(TARGET_DIR)/etc/logrotate.d/wbos
	mkdir -p $(TARGET_DIR)/var/log/wbos
endef

$(eval $(generic-package))
