#ifndef PROTO_ENTROPY_H
#define PROTO_ENTROPY_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/entropy/entropy.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/entropy_protos.h>

#ifndef __ENTROPY_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__ENTROPY_NOLIBBASE__)
  #if !defined(EntropyBase)
   extern struct Library *EntropyBase;
  #endif
  #ifndef __aros_getbase_EntropyBase
   #define __aros_getbase_EntropyBase() (EntropyBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __ENTROPY_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_EntropyBase;
 #define AROS_RELLIB_OFFSET_ENTROPY __aros_rellib_offset_EntropyBase
 #define AROS_RELLIB_BASE_ENTROPY __aros_rellib_base_EntropyBase
 #ifndef __aros_getbase_EntropyBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_EntropyBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_EntropyBase))
 #endif
#endif

#ifndef __aros_getbase_EntropyBase
extern struct Library *__aros_getbase_EntropyBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(ENTROPY_NOLIBINLINE) && !defined(__ENTROPY_RELLIBBASE__)
# include <inline/entropy.h>
#elif !defined(NOLIBDEFINES) && !defined(ENTROPY_NOLIBDEFINES)
# include <defines/entropy.h>
#endif

#endif /* PROTO_ENTROPY_H */
