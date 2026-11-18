#ifndef PROTO_NIPC_H
#define PROTO_NIPC_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/nipc/nipc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/nipc_protos.h>

#ifndef __NIPC_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__NIPC_NOLIBBASE__)
  #if !defined(NIPCBase)
   extern struct Library *NIPCBase;
  #endif
  #ifndef __aros_getbase_NIPCBase
   #define __aros_getbase_NIPCBase() (NIPCBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __NIPC_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_NIPCBase;
 #define AROS_RELLIB_OFFSET_NIPC __aros_rellib_offset_NIPCBase
 #define AROS_RELLIB_BASE_NIPC __aros_rellib_base_NIPCBase
 #ifndef __aros_getbase_NIPCBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_NIPCBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_NIPCBase))
 #endif
#endif

#ifndef __aros_getbase_NIPCBase
extern struct Library *__aros_getbase_NIPCBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(NIPC_NOLIBINLINE) && !defined(__NIPC_RELLIBBASE__)
# include <inline/nipc.h>
#elif !defined(NOLIBDEFINES) && !defined(NIPC_NOLIBDEFINES)
# include <defines/nipc.h>
#endif

#endif /* PROTO_NIPC_H */
