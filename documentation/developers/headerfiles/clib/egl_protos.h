#ifndef CLIB_EGL_PROTOS_H
#define CLIB_EGL_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/egl/egl.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <EGL/egl.h>

__BEGIN_DECLS


#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglGetError
EGLint eglGetError();
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglGetDisplay
EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglInitialize
EGLBoolean eglInitialize(EGLDisplay dpy, EGLint * major, EGLint * minor);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglTerminate
EGLBoolean eglTerminate(EGLDisplay dpy);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglQueryString
const char * eglQueryString(EGLDisplay dpy, EGLint name);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglGetConfigs
EGLBoolean eglGetConfigs(EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglChooseConfig
EGLBoolean eglChooseConfig(EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglGetConfigAttrib
EGLBoolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglCreateWindowSurface
EGLSurface eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglCreatePbufferSurface
EGLSurface eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglCreatePixmapSurface
EGLSurface eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglDestroySurface
EGLBoolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglQuerySurface
EGLBoolean eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglBindAPI
EGLBoolean eglBindAPI(EGLenum api);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglQueryAPI
EGLenum eglQueryAPI();
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglWaitClient
EGLBoolean eglWaitClient();
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglReleaseThread
EGLBoolean eglReleaseThread();
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglCreatePbufferFromClientBuffer
EGLSurface eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglSurfaceAttrib
EGLBoolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglBindTexImage
EGLBoolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglReleaseTexImage
EGLBoolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglSwapInterval
EGLBoolean eglSwapInterval(EGLDisplay dpy, EGLint interval);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglCreateContext
EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglDestroyContext
EGLBoolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglMakeCurrent
EGLBoolean eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglGetCurrentContext
EGLContext eglGetCurrentContext();
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglGetCurrentSurface
EGLSurface eglGetCurrentSurface(EGLint readdraw);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglGetCurrentDisplay
EGLDisplay eglGetCurrentDisplay();
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglQueryContext
EGLBoolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglWaitGL
EGLBoolean eglWaitGL();
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglWaitNative
EGLBoolean eglWaitNative(EGLint engine);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglSwapBuffers
EGLBoolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

#if !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__)
#ifndef eglCopyBuffers
EGLBoolean eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
#endif

#endif /* !defined(__EGL_LIBAPI__) || (2 <= __EGL_LIBAPI__) */

__END_DECLS

#endif /* CLIB_EGL_PROTOS_H */
