#ifndef PROTO_ECHO_H
#define PROTO_ECHO_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/services/echo/echo.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/echo_protos.h>

#ifndef __ECHO_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__ECHO_NOLIBBASE__)
  #if !defined(EchoBase)
   extern struct Library *EchoBase;
  #endif
  #ifndef __aros_getbase_EchoBase
   #define __aros_getbase_EchoBase() (EchoBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __ECHO_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_EchoBase;
 #define AROS_RELLIB_OFFSET_ECHO __aros_rellib_offset_EchoBase
 #define AROS_RELLIB_BASE_ECHO __aros_rellib_base_EchoBase
 #ifndef __aros_getbase_EchoBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_EchoBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_EchoBase))
 #endif
#endif

#ifndef __aros_getbase_EchoBase
extern struct Library *__aros_getbase_EchoBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(ECHO_NOLIBINLINE) && !defined(__ECHO_RELLIBBASE__)
# include <inline/echo.h>
#elif !defined(NOLIBDEFINES) && !defined(ECHO_NOLIBDEFINES)
# include <defines/echo.h>
#endif

#endif /* PROTO_ECHO_H */
