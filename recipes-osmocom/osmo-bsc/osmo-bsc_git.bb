require ${PN}.inc

S = "${WORKDIR}/git"
SRCREV = "${AUTOREV}"
SRC_URI = "git://git.osmocom.org/osmo-bsc.git;protocol=git"
PV = "1.6.0+gitr${SRCPV}"
PR = "${INC_PR}.0"
