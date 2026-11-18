#ifndef PROTO_LOWLEVEL_H
#define PROTO_LOWLEVEL_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/lowlevel/lowlevel.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/lowlevel_protos.h>

#ifndef __LOWLEVEL_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LOWLEVEL_NOLIBBASE__)
  #if !defined(LowLevelBase)
   extern struct Library *LowLevelBase;
  #endif
  #ifndef __aros_getbase_LowLevelBase
   #define __aros_getbase_LowLevelBase() (LowLevelBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LOWLEVEL_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_LowLevelBase;
 #define AROS_RELLIB_OFFSET_LOWLEVEL __aros_rellib_offset_LowLevelBase
 #define AROS_RELLIB_BASE_LOWLEVEL __aros_rellib_base_LowLevelBase
 #ifndef __aros_getbase_LowLevelBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_LowLevelBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_LowLevelBase))
 #endif
#endif

#ifndef __aros_getbase_LowLevelBase
extern struct Library *__aros_getbase_LowLevelBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LOWLEVEL_NOLIBINLINE) && !defined(__LOWLEVEL_RELLIBBASE__)
# include <inline/lowlevel.h>
#elif !defined(NOLIBDEFINES) && !defined(LOWLEVEL_NOLIBDEFINES)
# include <defines/lowlevel.h>
#endif

#endif /* PROTO_LOWLEVEL_H */
