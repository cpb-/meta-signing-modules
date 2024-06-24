
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-2.0-only;md5=801f80980d171dd6425610833a22dbe6"

SRC_URI += "file://my-module.c"
SRC_URI += "file://Makefile"

inherit module

S = "${WORKDIR}"

EXTRA_OEMAKE:append:task-install = " -C ${STAGING_KERNEL_DIR} M=${S}"
EXTRA_OEMAKE += "KERNEL_DIR=${STAGING_KERNEL_DIR}"
