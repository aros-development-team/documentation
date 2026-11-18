#ifndef PROTO_X11GFX_H
#define PROTO_X11GFX_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/arch/all-hosted/hidd/x11/x11gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/x11gfx_protos.h>

#ifndef __X11GFX_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__X11GFX_NOLIBBASE__)
  #if !defined(X11ClBase)
   extern struct Library *X11ClBase;
  #endif
  #ifndef __aros_getbase_X11ClBase
   #define __aros_getbase_X11ClBase() (X11ClBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __X11GFX_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_X11ClBase;
 #define AROS_RELLIB_OFFSET_X11GFX __aros_rellib_offset_X11ClBase
 #define AROS_RELLIB_BASE_X11GFX __aros_rellib_base_X11ClBase
 #ifndef __aros_getbase_X11ClBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_X11ClBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_X11ClBase))
 #endif
#endif

#ifndef __aros_getbase_X11ClBase
extern struct Library *__aros_getbase_X11ClBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(X11GFX_NOLIBINLINE) && !defined(__X11GFX_RELLIBBASE__)
# include <inline/x11gfx.h>
#elif !defined(NOLIBDEFINES) && !defined(X11GFX_NOLIBDEFINES)
# include <defines/x11gfx.h>
#endif

#endif /* PROTO_X11GFX_H */
