require ${PN}.inc

S = "${WORKDIR}/git"
SRCREV = "${AUTOREV}"
SRC_URI = "git://git.osmocom.org/libosmo-netif.git;protocol=git"
PV = "0.2.0+gitr${SRCPV}"
PR = "${INC_PR}.0"
