DESCRIPTION = "Osmocom BSC implementation"
HOMEPAGE = "https://osmocom.org/projects/osmobsc"
LICENSE = "AGPLv3"
LIC_FILES_CHKSUM = "file://COPYING;md5=73f1eb20517c55bf9493b7dd6e480788"

DEPENDS = "sqlite3 libosmocore libosmo-abis libosmo-sccp libosmo-netif osmo-mgw"

INC_PR="r1.${META_TELEPHONY_OSMO_INC}"

inherit autotools pkgconfig systemd

do_install_append() {
	install -d ${D}${systemd_system_unitdir}/
	install -d ${D}${sysconfdir}/osmocom/

	install -m 0644 ${S}/doc/examples/osmo-bsc/osmo-bsc.cfg ${D}${sysconfdir}/osmocom/
	install -m 0644 ${S}/doc/examples/osmo-bsc_nat/osmo-bsc_nat.cfg ${D}${sysconfdir}/osmocom/

	install -m 0644 ${S}/contrib/systemd/osmo-bsc.service ${D}${systemd_system_unitdir}/
}

PACKAGES =+ "osmo-bsc-nat-doc osmo-bsc-nat ipaccess-utils"
SYSTEMD_PACKAGES = "osmo-bsc"
SYSTEMD_SERVICE_osmo-bsc = "osmo-bsc.service"

CONFFILES_osmo-bsc = "${sysconfdir}/osmocom/osmo-bsc.cfg"

FILES_ipaccess-utils = " \
		${bindir}/ipaccess-find \
		${bindir}/ipaccess-config \
		${bindir}/ipaccess-proxy \
		"

FILES_osmo-bsc-nat = " \
		${bindir}/osmo-bsc_nat \
		${sysconfdir}/osmocom/osmo-bsc_nat.cfg \
		"
CONFFILES_osmo-bsc-nat = "${sysconfdir}/osmocom/osmo-bsc_nat.cfg"

FILES_osmo-bsc-nat-doc = " ${docdir}/osmo-bsc/examples/osmo-bsc_nat "