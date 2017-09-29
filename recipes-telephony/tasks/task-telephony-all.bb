DESCRIPTION = "Task for the meta-telephony layer. This is to build everything"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420 \
                    file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"
ALLOW_EMPTY_${PN} = "1"
PR = "r5"

DEPENDS = "\
        libosmo-abis \
        libosmo-sccp \
        libosmocore \
        openbsc \
        packagegroup-osmocom \
        osmo-ggsn \
        misdn-utils \
        dahdi-linux \
        dahdi-tools \
        lcr \
        libgsm \
        ortp \
        libdbi \
        libdbi-drivers \
    "
