require ${PN}.inc

S = "${WORKDIR}/git"
SRCREV = "${AUTOREV}"
SRC_URI = "git://git.osmocom.org/osmo-sysmon.git;protocol=git"
PV = "0.2.0+gitr${SRCPV}"
PR = "${INC_PR}.0"
