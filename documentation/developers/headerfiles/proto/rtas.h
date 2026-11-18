#ifndef PROTO_RTAS_H
#define PROTO_RTAS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/arch/ppc-chrp/rtas/rtas.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/rtas_protos.h>

#ifndef __RTAS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__RTAS_NOLIBBASE__)
  #if !defined(RTASBase)
   #ifdef __RTAS_STDLIBBASE__
    extern struct Library *RTASBase;
   #else
    extern APTR RTASBase;
   #endif
  #endif
  #ifndef __aros_getbase_RTASBase
   #define __aros_getbase_RTASBase() (RTASBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __RTAS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_RTASBase;
 #define AROS_RELLIB_OFFSET_RTAS __aros_rellib_offset_RTASBase
 #define AROS_RELLIB_BASE_RTAS __aros_rellib_base_RTASBase
 #ifndef __aros_getbase_RTASBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_RTASBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_RTASBase))
 #endif
#endif

#ifndef __aros_getbase_RTASBase
extern APTR __aros_getbase_RTASBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(RTAS_NOLIBINLINE) && !defined(__RTAS_RELLIBBASE__)
# include <inline/rtas.h>
#elif !defined(NOLIBDEFINES) && !defined(RTAS_NOLIBDEFINES)
# include <defines/rtas.h>
#endif

#endif /* PROTO_RTAS_H */
