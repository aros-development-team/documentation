#ifndef PROTO_GRAPHICS_H
#define PROTO_GRAPHICS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/graphics/graphics.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/graphics_protos.h>

#ifndef __GRAPHICS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__GRAPHICS_NOLIBBASE__)
  #if !defined(GfxBase)
   #ifdef __GRAPHICS_STDLIBBASE__
    extern struct Library *GfxBase;
   #else
    extern struct GfxBase *GfxBase;
   #endif
  #endif
  #ifndef __aros_getbase_GfxBase
   #define __aros_getbase_GfxBase() (GfxBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __GRAPHICS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_GfxBase;
 #define AROS_RELLIB_OFFSET_GRAPHICS __aros_rellib_offset_GfxBase
 #define AROS_RELLIB_BASE_GRAPHICS __aros_rellib_base_GfxBase
 #ifndef __aros_getbase_GfxBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_GfxBase() (*(struct GfxBase **)(__aros_getoffsettable()+__aros_rellib_offset_GfxBase))
 #endif
#endif

#ifndef __aros_getbase_GfxBase
extern struct GfxBase *__aros_getbase_GfxBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(GRAPHICS_NOLIBINLINE) && !defined(__GRAPHICS_RELLIBBASE__)
# include <inline/graphics.h>
#elif !defined(NOLIBDEFINES) && !defined(GRAPHICS_NOLIBDEFINES)
# include <defines/graphics.h>
#endif

#endif /* PROTO_GRAPHICS_H */
