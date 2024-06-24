FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://fragment-03.cfg"
SRC_URI += "file://my-key.pem"

do_compile:prepend() {
	mv "${WORKDIR}/my-key.pem"  "${S}/certs/"
}
