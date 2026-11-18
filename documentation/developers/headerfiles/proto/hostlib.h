#ifndef PROTO_HOSTLIB_H
#define PROTO_HOSTLIB_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/arch/all-hosted/hostlib/hostlib.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/hostlib_protos.h>

#ifndef __HOSTLIB_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__HOSTLIB_NOLIBBASE__)
  #if !defined(HostLibBase)
   #ifdef __HOSTLIB_STDLIBBASE__
    extern struct Library *HostLibBase;
   #else
    extern APTR HostLibBase;
   #endif
  #endif
  #ifndef __aros_getbase_HostLibBase
   #define __aros_getbase_HostLibBase() (HostLibBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __HOSTLIB_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_HostLibBase;
 #define AROS_RELLIB_OFFSET_HOSTLIB __aros_rellib_offset_HostLibBase
 #define AROS_RELLIB_BASE_HOSTLIB __aros_rellib_base_HostLibBase
 #ifndef __aros_getbase_HostLibBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_HostLibBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_HostLibBase))
 #endif
#endif

#ifndef __aros_getbase_HostLibBase
extern APTR __aros_getbase_HostLibBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(HOSTLIB_NOLIBINLINE) && !defined(__HOSTLIB_RELLIBBASE__)
# include <inline/hostlib.h>
#elif !defined(NOLIBDEFINES) && !defined(HOSTLIB_NOLIBDEFINES)
# include <defines/hostlib.h>
#endif

#endif /* PROTO_HOSTLIB_H */
