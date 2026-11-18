#ifndef PROTO_HPET_H
#define PROTO_HPET_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/kernel/clocksource.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/hpet_protos.h>

#ifndef __HPET_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__HPET_NOLIBBASE__)
  #if !defined(HPETBase)
   #ifdef __HPET_STDLIBBASE__
    extern struct Library *HPETBase;
   #else
    extern APTR HPETBase;
   #endif
  #endif
  #ifndef __aros_getbase_HPETBase
   #define __aros_getbase_HPETBase() (HPETBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __HPET_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_HPETBase;
 #define AROS_RELLIB_OFFSET_HPET __aros_rellib_offset_HPETBase
 #define AROS_RELLIB_BASE_HPET __aros_rellib_base_HPETBase
 #ifndef __aros_getbase_HPETBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_HPETBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_HPETBase))
 #endif
#endif

#ifndef __aros_getbase_HPETBase
extern APTR __aros_getbase_HPETBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(HPET_NOLIBINLINE) && !defined(__HPET_RELLIBBASE__)
# include <inline/hpet.h>
#elif !defined(NOLIBDEFINES) && !defined(HPET_NOLIBDEFINES)
# include <defines/hpet.h>
#endif

#endif /* PROTO_HPET_H */
