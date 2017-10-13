DESCRIPTION = "Rockchip U-Boot next"
SECTION = "bootloaders"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=a2c678cfd4a4d97135585cad908541c6"
PE = "1"

# We use the revision in order to avoid having to fetch it from the
# repo during parse
SRCREV = "001228919855cdc72372ea509fd92ed2c4e95e27"

SRC_URI = "git://github.com/rockchip-linux/u-boot.git;branch=release"

S = "${WORKDIR}/git"

PACKAGE_ARCH = "${MACHINE_ARCH}"
COMPATIBLE_MACHINE = "(rk3036|rk3188|rk3288|rk3328|rk3399)"
