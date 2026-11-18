#ifndef PROTO_EGL_H
#define PROTO_EGL_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/egl/egl.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/egl_protos.h>

#ifndef __EGL_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__EGL_NOLIBBASE__)
  #if !defined(EGLBase)
   extern struct Library *EGLBase;
  #endif
  #ifndef __aros_getbase_EGLBase
   #define __aros_getbase_EGLBase() (EGLBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __EGL_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_EGLBase;
 #define AROS_RELLIB_OFFSET_EGL __aros_rellib_offset_EGLBase
 #define AROS_RELLIB_BASE_EGL __aros_rellib_base_EGLBase
 #ifndef __aros_getbase_EGLBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_EGLBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_EGLBase))
 #endif
#endif

#ifndef __aros_getbase_EGLBase
extern struct Library *__aros_getbase_EGLBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(EGL_NOLIBINLINE) && !defined(__EGL_RELLIBBASE__)
# include <inline/egl.h>
#elif !defined(NOLIBDEFINES) && !defined(EGL_NOLIBDEFINES)
# include <defines/egl.h>
#endif

#endif /* PROTO_EGL_H */
