#ifndef PROTO_CLOCKSOURCE_H
#define PROTO_CLOCKSOURCE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/kernel/clocksource.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/clocksource_protos.h>

#ifndef __CLOCKSOURCE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CLOCKSOURCE_NOLIBBASE__)
  #if !defined(CSBase)
   #ifdef __CLOCKSOURCE_STDLIBBASE__
    extern struct Library *CSBase;
   #else
    extern APTR CSBase;
   #endif
  #endif
  #ifndef __aros_getbase_CSBase
   #define __aros_getbase_CSBase() (CSBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CLOCKSOURCE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_CSBase;
 #define AROS_RELLIB_OFFSET_CLOCKSOURCE __aros_rellib_offset_CSBase
 #define AROS_RELLIB_BASE_CLOCKSOURCE __aros_rellib_base_CSBase
 #ifndef __aros_getbase_CSBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_CSBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_CSBase))
 #endif
#endif

#ifndef __aros_getbase_CSBase
extern APTR __aros_getbase_CSBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CLOCKSOURCE_NOLIBINLINE) && !defined(__CLOCKSOURCE_RELLIBBASE__)
# include <inline/clocksource.h>
#elif !defined(NOLIBDEFINES) && !defined(CLOCKSOURCE_NOLIBDEFINES)
# include <defines/clocksource.h>
#endif

#endif /* PROTO_CLOCKSOURCE_H */
