# MPV Rockchip Help Documents

To enable mpv, add belows to rk-base.conf:

    PREFERRED_VERSION_ffmpeg = "git"
    PREFERRED_VERSION_mpv = "git"
    

## DRM ATOMIC

This VO use two video planes:  
Primary layer for OSD, overlay layer for Video.  
By default, OSD is in back of overlay layer so it's hidden.  
To swap them, See:  
https://github.com/rockchip-linux/meta-rockchip-extra/tree/master/demo/meta-player-qt

### Rockchip spefic
Please note that unlike gstreamer kmssink which can be embedded to app(x11, wayland, qt eglfs),
```
========================  
=   ===========     qt =  
=   = kmssink =        =  
=   ===========        =  
=   seekbar, button    =  
========================  
```
MPV is not suitable to run with another UI, it will take up screen resources.
```
========================  
= mpv                  =  
=                      =  
=   video              =  
=   seekbar, button    =  
========================  
```

depend:  
rk-none distro

option:  
--drm-connector=[<gpu_number>.]<name>
--drm-mode=<number>
--drm-overlay=<number>

debug:  
-v

develop library:  
libmpv

test command
```
mpv --hwdec=rkmpp --vo=gpu --gpu-api=opengl --no-audio --gpu-context=drm <file>
```

## Wayland
```
mpv --vo=gpu --gpu-api=opengl --no-audio --gpu-context=wayland <file>
```