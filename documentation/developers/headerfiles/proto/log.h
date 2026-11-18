#ifndef PROTO_LOG_H
#define PROTO_LOG_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/log/log.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/log_protos.h>

#ifndef __LOG_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LOG_NOLIBBASE__)
  #if !defined(LogResBase)
   extern struct Library *LogResBase;
  #endif
  #ifndef __aros_getbase_LogResBase
   #define __aros_getbase_LogResBase() (LogResBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LOG_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_LogResBase;
 #define AROS_RELLIB_OFFSET_LOG __aros_rellib_offset_LogResBase
 #define AROS_RELLIB_BASE_LOG __aros_rellib_base_LogResBase
 #ifndef __aros_getbase_LogResBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_LogResBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_LogResBase))
 #endif
#endif

#ifndef __aros_getbase_LogResBase
extern struct Library *__aros_getbase_LogResBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LOG_NOLIBINLINE) && !defined(__LOG_RELLIBBASE__)
# include <inline/log.h>
#elif !defined(NOLIBDEFINES) && !defined(LOG_NOLIBDEFINES)
# include <defines/log.h>
#endif

#endif /* PROTO_LOG_H */
