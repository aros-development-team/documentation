#ifndef PROTO_TIMER_H
#define PROTO_TIMER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/timer/timer.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <exec/devices.h>
#include <aros/system.h>

#include <clib/timer_protos.h>

#ifndef __TIMER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__TIMER_NOLIBBASE__)
  #if !defined(TimerBase)
   #ifdef __TIMER_STDLIBBASE__
    extern struct Library *TimerBase;
   #else
    extern struct Device *TimerBase;
   #endif
  #endif
  #ifndef __aros_getbase_TimerBase
   #define __aros_getbase_TimerBase() (TimerBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __TIMER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_TimerBase;
 #define AROS_RELLIB_OFFSET_TIMER __aros_rellib_offset_TimerBase
 #define AROS_RELLIB_BASE_TIMER __aros_rellib_base_TimerBase
 #ifndef __aros_getbase_TimerBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_TimerBase() (*(struct Device **)(__aros_getoffsettable()+__aros_rellib_offset_TimerBase))
 #endif
#endif

#ifndef __aros_getbase_TimerBase
extern struct Device *__aros_getbase_TimerBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(TIMER_NOLIBINLINE) && !defined(__TIMER_RELLIBBASE__)
# include <inline/timer.h>
#elif !defined(NOLIBDEFINES) && !defined(TIMER_NOLIBDEFINES)
# include <defines/timer.h>
#endif

#endif /* PROTO_TIMER_H */
