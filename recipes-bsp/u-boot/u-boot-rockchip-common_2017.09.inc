DESCRIPTION = "Rockchip U-Boot next"
SECTION = "bootloaders"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=a2c678cfd4a4d97135585cad908541c6"
PE = "1"

# We use the revision in order to avoid having to fetch it from the
# repo during parse
# 
# This matches the release-20171218 tag
SRCREV = "515bbbdeca48fe1f2796853fa6a6895dac86b6fd"

SRC_URI = "git://github.com/rockchip-linux/u-boot.git;branch=release"

S = "${WORKDIR}/git"

PACKAGE_ARCH = "${MACHINE_ARCH}"
COMPATIBLE_MACHINE = "(rk3036|rk3066|rk3188|rk3288|rk3328|rk3399)"
