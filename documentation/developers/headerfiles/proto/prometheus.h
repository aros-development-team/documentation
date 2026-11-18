#ifndef PROTO_PROMETHEUS_H
#define PROTO_PROMETHEUS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/prometheus/prometheus.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/prometheus_protos.h>

#ifndef __PROMETHEUS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PROMETHEUS_NOLIBBASE__)
  #if !defined(PrometheusBase)
   extern struct Library *PrometheusBase;
  #endif
  #ifndef __aros_getbase_PrometheusBase
   #define __aros_getbase_PrometheusBase() (PrometheusBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PROMETHEUS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PrometheusBase;
 #define AROS_RELLIB_OFFSET_PROMETHEUS __aros_rellib_offset_PrometheusBase
 #define AROS_RELLIB_BASE_PROMETHEUS __aros_rellib_base_PrometheusBase
 #ifndef __aros_getbase_PrometheusBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PrometheusBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_PrometheusBase))
 #endif
#endif

#ifndef __aros_getbase_PrometheusBase
extern struct Library *__aros_getbase_PrometheusBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PROMETHEUS_NOLIBINLINE) && !defined(__PROMETHEUS_RELLIBBASE__)
# include <inline/prometheus.h>
#elif !defined(NOLIBDEFINES) && !defined(PROMETHEUS_NOLIBDEFINES)
# include <defines/prometheus.h>
#endif

#endif /* PROTO_PROMETHEUS_H */
