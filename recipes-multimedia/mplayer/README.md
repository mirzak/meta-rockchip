# MPV Rockchip Help Documents

To enable mpv, add belows to rk-base.conf:

    PREFERRED_VERSION_ffmpeg = "git"
    PREFERRED_VERSION_mpv = "git"
    

## DRM ATOMIC

This VO use two video planes:  
Primary layer for OSD, overlay layer for Video. 

Please note that unlike gstreamer kmssink which can be embedded to (x11, wayland, qt eglfs)app on rockchip platform(becuase we have adopt some hacks in DRM legacy API),
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
XDG_RUNTIME_DIR=/run/user/0  WAYLAND_DISPLAY=wayland-0 mpv --hwdec=rkmpp --vo=gpu --gpu-api=opengl --no-audio --gpu-context=wayland <file>
```