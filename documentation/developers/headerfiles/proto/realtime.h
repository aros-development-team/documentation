#ifndef PROTO_REALTIME_H
#define PROTO_REALTIME_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/realtime/realtime.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/realtime_protos.h>

#ifndef __REALTIME_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__REALTIME_NOLIBBASE__)
  #if !defined(RealTimeBase)
   extern struct Library *RealTimeBase;
  #endif
  #ifndef __aros_getbase_RealTimeBase
   #define __aros_getbase_RealTimeBase() (RealTimeBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __REALTIME_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_RealTimeBase;
 #define AROS_RELLIB_OFFSET_REALTIME __aros_rellib_offset_RealTimeBase
 #define AROS_RELLIB_BASE_REALTIME __aros_rellib_base_RealTimeBase
 #ifndef __aros_getbase_RealTimeBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_RealTimeBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_RealTimeBase))
 #endif
#endif

#ifndef __aros_getbase_RealTimeBase
extern struct Library *__aros_getbase_RealTimeBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(REALTIME_NOLIBINLINE) && !defined(__REALTIME_RELLIBBASE__)
# include <inline/realtime.h>
#elif !defined(NOLIBDEFINES) && !defined(REALTIME_NOLIBDEFINES)
# include <defines/realtime.h>
#endif

#endif /* PROTO_REALTIME_H */
