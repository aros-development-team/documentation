#ifndef PROTO_REQUESTER_H
#define PROTO_REQUESTER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/requester/requester.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/requester_protos.h>

#ifndef __REQUESTER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__REQUESTER_NOLIBBASE__)
  #if !defined(RequesterBase)
   extern struct Library *RequesterBase;
  #endif
  #ifndef __aros_getbase_RequesterBase
   #define __aros_getbase_RequesterBase() (RequesterBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __REQUESTER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_RequesterBase;
 #define AROS_RELLIB_OFFSET_REQUESTER __aros_rellib_offset_RequesterBase
 #define AROS_RELLIB_BASE_REQUESTER __aros_rellib_base_RequesterBase
 #ifndef __aros_getbase_RequesterBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_RequesterBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_RequesterBase))
 #endif
#endif

#ifndef __aros_getbase_RequesterBase
extern struct Library *__aros_getbase_RequesterBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(REQUESTER_NOLIBINLINE) && !defined(__REQUESTER_RELLIBBASE__)
# include <inline/requester.h>
#elif !defined(NOLIBDEFINES) && !defined(REQUESTER_NOLIBDEFINES)
# include <defines/requester.h>
#endif

#endif /* PROTO_REQUESTER_H */
