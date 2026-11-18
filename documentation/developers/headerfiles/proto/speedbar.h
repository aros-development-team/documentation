#ifndef PROTO_SPEEDBAR_H
#define PROTO_SPEEDBAR_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/speedbar/speedbar.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/speedbar_protos.h>

#ifndef __SPEEDBAR_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__SPEEDBAR_NOLIBBASE__)
  #if !defined(SpeedBarBase)
   extern struct Library *SpeedBarBase;
  #endif
  #ifndef __aros_getbase_SpeedBarBase
   #define __aros_getbase_SpeedBarBase() (SpeedBarBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __SPEEDBAR_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_SpeedBarBase;
 #define AROS_RELLIB_OFFSET_SPEEDBAR __aros_rellib_offset_SpeedBarBase
 #define AROS_RELLIB_BASE_SPEEDBAR __aros_rellib_base_SpeedBarBase
 #ifndef __aros_getbase_SpeedBarBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_SpeedBarBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_SpeedBarBase))
 #endif
#endif

#ifndef __aros_getbase_SpeedBarBase
extern struct Library *__aros_getbase_SpeedBarBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(SPEEDBAR_NOLIBINLINE) && !defined(__SPEEDBAR_RELLIBBASE__)
# include <inline/speedbar.h>
#elif !defined(NOLIBDEFINES) && !defined(SPEEDBAR_NOLIBDEFINES)
# include <defines/speedbar.h>
#endif

#endif /* PROTO_SPEEDBAR_H */
