#ifndef PROTO_WINDOW_H
#define PROTO_WINDOW_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/window/window.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/window_protos.h>

#ifndef __WINDOW_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__WINDOW_NOLIBBASE__)
  #if !defined(WindowBase)
   extern struct Library *WindowBase;
  #endif
  #ifndef __aros_getbase_WindowBase
   #define __aros_getbase_WindowBase() (WindowBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __WINDOW_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_WindowBase;
 #define AROS_RELLIB_OFFSET_WINDOW __aros_rellib_offset_WindowBase
 #define AROS_RELLIB_BASE_WINDOW __aros_rellib_base_WindowBase
 #ifndef __aros_getbase_WindowBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_WindowBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_WindowBase))
 #endif
#endif

#ifndef __aros_getbase_WindowBase
extern struct Library *__aros_getbase_WindowBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(WINDOW_NOLIBINLINE) && !defined(__WINDOW_RELLIBBASE__)
# include <inline/window.h>
#elif !defined(NOLIBDEFINES) && !defined(WINDOW_NOLIBDEFINES)
# include <defines/window.h>
#endif

#endif /* PROTO_WINDOW_H */
