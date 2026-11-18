#ifndef PROTO_INTEGER_H
#define PROTO_INTEGER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/integer/integer.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/integer_protos.h>

#ifndef __INTEGER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__INTEGER_NOLIBBASE__)
  #if !defined(IntegerBase)
   extern struct Library *IntegerBase;
  #endif
  #ifndef __aros_getbase_IntegerBase
   #define __aros_getbase_IntegerBase() (IntegerBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __INTEGER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_IntegerBase;
 #define AROS_RELLIB_OFFSET_INTEGER __aros_rellib_offset_IntegerBase
 #define AROS_RELLIB_BASE_INTEGER __aros_rellib_base_IntegerBase
 #ifndef __aros_getbase_IntegerBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_IntegerBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_IntegerBase))
 #endif
#endif

#ifndef __aros_getbase_IntegerBase
extern struct Library *__aros_getbase_IntegerBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(INTEGER_NOLIBINLINE) && !defined(__INTEGER_RELLIBBASE__)
# include <inline/integer.h>
#elif !defined(NOLIBDEFINES) && !defined(INTEGER_NOLIBDEFINES)
# include <defines/integer.h>
#endif

#endif /* PROTO_INTEGER_H */
