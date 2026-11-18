#ifndef PROTO_REQTOOLS_H
#define PROTO_REQTOOLS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/reqtools/reqtools.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/reqtools_protos.h>

#ifndef __REQTOOLS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__REQTOOLS_NOLIBBASE__)
  #if !defined(ReqToolsBase)
   #ifdef __REQTOOLS_STDLIBBASE__
    extern struct Library *ReqToolsBase;
   #else
    extern struct ReqToolsBase *ReqToolsBase;
   #endif
  #endif
  #ifndef __aros_getbase_ReqToolsBase
   #define __aros_getbase_ReqToolsBase() (ReqToolsBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __REQTOOLS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ReqToolsBase;
 #define AROS_RELLIB_OFFSET_REQTOOLS __aros_rellib_offset_ReqToolsBase
 #define AROS_RELLIB_BASE_REQTOOLS __aros_rellib_base_ReqToolsBase
 #ifndef __aros_getbase_ReqToolsBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ReqToolsBase() (*(struct ReqToolsBase **)(__aros_getoffsettable()+__aros_rellib_offset_ReqToolsBase))
 #endif
#endif

#ifndef __aros_getbase_ReqToolsBase
extern struct ReqToolsBase *__aros_getbase_ReqToolsBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(REQTOOLS_NOLIBINLINE) && !defined(__REQTOOLS_RELLIBBASE__)
# include <inline/reqtools.h>
#elif !defined(NOLIBDEFINES) && !defined(REQTOOLS_NOLIBDEFINES)
# include <defines/reqtools.h>
#endif

#endif /* PROTO_REQTOOLS_H */
