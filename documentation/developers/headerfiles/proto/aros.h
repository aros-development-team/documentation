#ifndef PROTO_AROS_H
#define PROTO_AROS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/aros/aros.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/aros_protos.h>

#ifndef __AROS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__AROS_NOLIBBASE__)
  #if !defined(ArosBase)
   extern struct Library *ArosBase;
  #endif
  #ifndef __aros_getbase_ArosBase
   #define __aros_getbase_ArosBase() (ArosBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __AROS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ArosBase;
 #define AROS_RELLIB_OFFSET_AROS __aros_rellib_offset_ArosBase
 #define AROS_RELLIB_BASE_AROS __aros_rellib_base_ArosBase
 #ifndef __aros_getbase_ArosBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ArosBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ArosBase))
 #endif
#endif

#ifndef __aros_getbase_ArosBase
extern struct Library *__aros_getbase_ArosBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(AROS_NOLIBINLINE) && !defined(__AROS_RELLIBBASE__)
# include <inline/aros.h>
#elif !defined(NOLIBDEFINES) && !defined(AROS_NOLIBDEFINES)
# include <defines/aros.h>
#endif

#endif /* PROTO_AROS_H */
