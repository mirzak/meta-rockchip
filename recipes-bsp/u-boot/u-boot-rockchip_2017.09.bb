require recipes-bsp/u-boot/u-boot.inc
require u-boot-rockchip-common_${PV}.inc

DESCRIPTION = "Rockchip U-Boot providing early support for Rockchip eval boards"

DEPENDS += "bc-native dtc-native"

PROVIDES += "u-boot"

do_compile_append () {
	# copy to default search path
	if [ ${SPL_BINARY} ]; then
		cp ${B}/spl/${SPL_BINARY} ${B}/
	fi
}
