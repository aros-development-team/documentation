#ifndef PROTO_ENVOY_H
#define PROTO_ENVOY_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/envoy/envoy.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/envoy_protos.h>

#ifndef __ENVOY_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__ENVOY_NOLIBBASE__)
  #if !defined(EnvoyBase)
   extern struct Library *EnvoyBase;
  #endif
  #ifndef __aros_getbase_EnvoyBase
   #define __aros_getbase_EnvoyBase() (EnvoyBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __ENVOY_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_EnvoyBase;
 #define AROS_RELLIB_OFFSET_ENVOY __aros_rellib_offset_EnvoyBase
 #define AROS_RELLIB_BASE_ENVOY __aros_rellib_base_EnvoyBase
 #ifndef __aros_getbase_EnvoyBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_EnvoyBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_EnvoyBase))
 #endif
#endif

#ifndef __aros_getbase_EnvoyBase
extern struct Library *__aros_getbase_EnvoyBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(ENVOY_NOLIBINLINE) && !defined(__ENVOY_RELLIBBASE__)
# include <inline/envoy.h>
#elif !defined(NOLIBDEFINES) && !defined(ENVOY_NOLIBDEFINES)
# include <defines/envoy.h>
#endif

#endif /* PROTO_ENVOY_H */
