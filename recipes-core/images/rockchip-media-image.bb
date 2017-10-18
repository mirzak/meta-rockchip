# Copyright (C) 2017 Randy Li <ayaka@soulik.info>
# Released under the MIT license (see COPYING.MIT for the terms)

include recipes-core/images/rockchip-basic-image.bb

LICENSE = "MIT"
DESCRIPTION = "Multimedia image used for development of gstreamer plugins \
for Rockchip devices."

IMAGE_INSTALL_append = " \
	gdbserver \
	gstreamer1.0-meta-audio \
	gstreamer1.0-meta-base \
	gstreamer1.0-meta-debug \
	gstreamer1.0-meta-video \
	gstreamer1.0-plugins-bad-autoconvert \
	gstreamer1.0-plugins-bad-camerabin2 \
	gstreamer1.0-plugins-bad-kmssink \
	gstreamer1.0-plugins-bad-mpegtsdemux \
	gstreamer1.0-plugins-bad-rawparse \
	gstreamer1.0-plugins-bad-videoparsersbad \
	gstreamer1.0-plugins-good-imagefreeze \
	gstreamer1.0-plugins-good-isomp4 \
	gstreamer1.0-plugins-good-multifile \
	gstreamer1.0-rockchip \
"

TOOLCHAIN_HOST_TASK += "nativesdk-cmake"
