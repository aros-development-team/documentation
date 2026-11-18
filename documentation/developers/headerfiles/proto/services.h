#ifndef PROTO_SERVICES_H
#define PROTO_SERVICES_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/services/services.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/services_protos.h>

#ifndef __SERVICES_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__SERVICES_NOLIBBASE__)
  #if !defined(ServicesBase)
   extern struct Library *ServicesBase;
  #endif
  #ifndef __aros_getbase_ServicesBase
   #define __aros_getbase_ServicesBase() (ServicesBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __SERVICES_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ServicesBase;
 #define AROS_RELLIB_OFFSET_SERVICES __aros_rellib_offset_ServicesBase
 #define AROS_RELLIB_BASE_SERVICES __aros_rellib_base_ServicesBase
 #ifndef __aros_getbase_ServicesBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ServicesBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ServicesBase))
 #endif
#endif

#ifndef __aros_getbase_ServicesBase
extern struct Library *__aros_getbase_ServicesBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(SERVICES_NOLIBINLINE) && !defined(__SERVICES_RELLIBBASE__)
# include <inline/services.h>
#elif !defined(NOLIBDEFINES) && !defined(SERVICES_NOLIBDEFINES)
# include <defines/services.h>
#endif

#endif /* PROTO_SERVICES_H */
