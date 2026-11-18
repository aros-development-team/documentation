#ifndef PROTO_LDDEMON_H
#define PROTO_LDDEMON_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/lddemon/lddemon.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/lddemon_protos.h>

#ifndef __LDDEMON_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LDDEMON_NOLIBBASE__)
  #if !defined(ldBase)
   #ifdef __LDDEMON_STDLIBBASE__
    extern struct Library *ldBase;
   #else
    extern struct LDDemonBase *ldBase;
   #endif
  #endif
  #ifndef __aros_getbase_ldBase
   #define __aros_getbase_ldBase() (ldBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LDDEMON_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ldBase;
 #define AROS_RELLIB_OFFSET_LDDEMON __aros_rellib_offset_ldBase
 #define AROS_RELLIB_BASE_LDDEMON __aros_rellib_base_ldBase
 #ifndef __aros_getbase_ldBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ldBase() (*(struct LDDemonBase **)(__aros_getoffsettable()+__aros_rellib_offset_ldBase))
 #endif
#endif

#ifndef __aros_getbase_ldBase
extern struct LDDemonBase *__aros_getbase_ldBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LDDEMON_NOLIBINLINE) && !defined(__LDDEMON_RELLIBBASE__)
# include <inline/lddemon.h>
#elif !defined(NOLIBDEFINES) && !defined(LDDEMON_NOLIBDEFINES)
# include <defines/lddemon.h>
#endif

#endif /* PROTO_LDDEMON_H */
