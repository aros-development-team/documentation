#ifndef PROTO_UTILITY_H
#define PROTO_UTILITY_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/utility/utility.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/utility_protos.h>

#ifndef __UTILITY_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__UTILITY_NOLIBBASE__)
  #if !defined(UtilityBase)
   #ifdef __UTILITY_STDLIBBASE__
    extern struct Library *UtilityBase;
   #else
    extern struct UtilityBase *UtilityBase;
   #endif
  #endif
  #ifndef __aros_getbase_UtilityBase
   #define __aros_getbase_UtilityBase() (UtilityBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __UTILITY_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_UtilityBase;
 #define AROS_RELLIB_OFFSET_UTILITY __aros_rellib_offset_UtilityBase
 #define AROS_RELLIB_BASE_UTILITY __aros_rellib_base_UtilityBase
 #ifndef __aros_getbase_UtilityBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_UtilityBase() (*(struct UtilityBase **)(__aros_getoffsettable()+__aros_rellib_offset_UtilityBase))
 #endif
#endif

#ifndef __aros_getbase_UtilityBase
extern struct UtilityBase *__aros_getbase_UtilityBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(UTILITY_NOLIBINLINE) && !defined(__UTILITY_RELLIBBASE__)
# include <inline/utility.h>
#elif !defined(NOLIBDEFINES) && !defined(UTILITY_NOLIBDEFINES)
# include <defines/utility.h>
#endif

#endif /* PROTO_UTILITY_H */
