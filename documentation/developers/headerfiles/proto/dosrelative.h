#ifndef PROTO_DOSRELATIVE_H
#define PROTO_DOSRELATIVE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/dosrelative/dosrelative.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/dosrelative_protos.h>

#ifndef __DOSRELATIVE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DOSRELATIVE_NOLIBBASE__)
  #if !defined(DOSRelativeBase)
   extern struct Library *DOSRelativeBase;
  #endif
  #ifndef __aros_getbase_DOSRelativeBase
   #define __aros_getbase_DOSRelativeBase() (DOSRelativeBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DOSRELATIVE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DOSRelativeBase;
 #define AROS_RELLIB_OFFSET_DOSRELATIVE __aros_rellib_offset_DOSRelativeBase
 #define AROS_RELLIB_BASE_DOSRELATIVE __aros_rellib_base_DOSRelativeBase
 #ifndef __aros_getbase_DOSRelativeBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DOSRelativeBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_DOSRelativeBase))
 #endif
#endif

#ifndef __aros_getbase_DOSRelativeBase
extern struct Library *__aros_getbase_DOSRelativeBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DOSRELATIVE_NOLIBINLINE) && !defined(__DOSRELATIVE_RELLIBBASE__)
# include <inline/dosrelative.h>
#elif !defined(NOLIBDEFINES) && !defined(DOSRELATIVE_NOLIBDEFINES)
# include <defines/dosrelative.h>
#endif

#endif /* PROTO_DOSRELATIVE_H */
