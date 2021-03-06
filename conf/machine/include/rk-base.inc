# Copyright (C) 2017 Mirza Krak

# Rockchip BSP default settings


# Default kernel and versions
PREFERRED_PROVIDER_virtual/kernel ??= "linux-rockchip"
PREFERRED_VERSION_linux-rockchip ??= "4.4.%"
PREFERRED_VERSION_linux-rockchip_rv1109 ??= "3.10.%"

# Default U-boot and U-boot tools
PREFERRED_PROVIDER_virtual/bootloader ?= "u-boot-rockchip"
PREFERRED_PROVIDER_u-boot-fw-utils ?= "u-boot-rockchip-fw-utils"
PREFERRED_RPROVIDER_u-boot-fw-utils ?= "u-boot-rockchip-fw-utils"

# Serial console setup
SERIAL_CONSOLES = "115200;ttyS2"
SERIAL_CONSOLES_rv1108 = "1500000;ttyS2"
SERIAL_CONSOLES_rk3188 = "115200;ttyFIQ0"
SERIAL_CONSOLES_rk3328 = "1500000;ttyFIQ0"
SERIAL_CONSOLES_rk3399 = "1500000;ttyFIQ0"

# Kernel image type
RK_KERNEL_IMAGETYPE = "zImage"
RK_KERNEL_IMAGETYPE_rk3328 = "Image"
RK_KERNEL_IMAGETYPE_rk3399 = "Image"

KERNEL_IMAGETYPE ??= "${RK_KERNEL_IMAGETYPE}"

RK_KBUILD_DEFCONFIG = "rockchip_linux_defconfig"
RK_KBUILD_DEFCONFIG_rk3188 = "multi_v7_defconfig"

KBUILD_DEFCONFIG ??= "${RK_KBUILD_DEFCONFIG}"

RK_SPL_BINARY = "u-boot-spl-dtb.bin"
RK_SPL_BINARY_rk3036 = "u-boot-spl-nodtb.bin"

SPL_BINARY ?= "${RK_SPL_BINARY}"

# Add the ability to specify _rk machines
MACHINEOVERRIDES =. "rk:"

# Ship kernel modules
MACHINE_EXTRA_RRECOMMENDS = "kernel-modules"

IMAGE_FSTYPES ?= "ext4 rockchip-gpt-img"
IMAGE_CLASSES += "rockchip-gpt-img rockchip-update-img"
