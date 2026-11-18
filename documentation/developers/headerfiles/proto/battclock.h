#ifndef PROTO_BATTCLOCK_H
#define PROTO_BATTCLOCK_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/battclock/battclock.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/battclock_protos.h>

#ifndef __BATTCLOCK_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BATTCLOCK_NOLIBBASE__)
  #if !defined(BattClockBase)
   extern struct Library *BattClockBase;
  #endif
  #ifndef __aros_getbase_BattClockBase
   #define __aros_getbase_BattClockBase() (BattClockBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BATTCLOCK_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BattClockBase;
 #define AROS_RELLIB_OFFSET_BATTCLOCK __aros_rellib_offset_BattClockBase
 #define AROS_RELLIB_BASE_BATTCLOCK __aros_rellib_base_BattClockBase
 #ifndef __aros_getbase_BattClockBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BattClockBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_BattClockBase))
 #endif
#endif

#ifndef __aros_getbase_BattClockBase
extern struct Library *__aros_getbase_BattClockBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BATTCLOCK_NOLIBINLINE) && !defined(__BATTCLOCK_RELLIBBASE__)
# include <inline/battclock.h>
#elif !defined(NOLIBDEFINES) && !defined(BATTCLOCK_NOLIBDEFINES)
# include <defines/battclock.h>
#endif

#endif /* PROTO_BATTCLOCK_H */
