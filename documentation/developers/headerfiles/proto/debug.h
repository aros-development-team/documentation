#ifndef PROTO_DEBUG_H
#define PROTO_DEBUG_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/debug/debug.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/debug_protos.h>

#ifndef __DEBUG_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DEBUG_NOLIBBASE__)
  #if !defined(DebugBase)
   extern struct Library *DebugBase;
  #endif
  #ifndef __aros_getbase_DebugBase
   #define __aros_getbase_DebugBase() (DebugBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DEBUG_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DebugBase;
 #define AROS_RELLIB_OFFSET_DEBUG __aros_rellib_offset_DebugBase
 #define AROS_RELLIB_BASE_DEBUG __aros_rellib_base_DebugBase
 #ifndef __aros_getbase_DebugBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DebugBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_DebugBase))
 #endif
#endif

#ifndef __aros_getbase_DebugBase
extern struct Library *__aros_getbase_DebugBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DEBUG_NOLIBINLINE) && !defined(__DEBUG_RELLIBBASE__)
# include <inline/debug.h>
#elif !defined(NOLIBDEFINES) && !defined(DEBUG_NOLIBDEFINES)
# include <defines/debug.h>
#endif

#endif /* PROTO_DEBUG_H */
