# Copyright (C) 2017 Fuzhou Rockchip Electronics Co., Ltd
# Released under the MIT license (see COPYING.MIT for the terms)

require recipes-kernel/linux/linux-yocto.inc

SRC_URI = " \
	git://github.com/TinkerBoard/debian_kernel.git;branch=release; \
"

# This is the equivalent of TinkerOS_Debian v2.0.7 tag
SRCREV = "4227fc0ee40dc7ebf66c1cfcb1cbdabecb39f31a"
LINUX_VERSION = "4.4.103"

# Override local version in order to use the one generated by linux build system
# And not "yocto-standard"
LINUX_VERSION_EXTENSION = ""
PR = "r1"
PV = "${LINUX_VERSION}"

# Include only supported boards for now
COMPATIBLE_MACHINE = "(tinker-rk3288)"
deltask kernel_configme
