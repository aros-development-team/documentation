#ifndef PROTO_WORKBENCH_H
#define PROTO_WORKBENCH_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/workbench/workbench.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/workbench_protos.h>

#ifndef __WORKBENCH_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__WORKBENCH_NOLIBBASE__)
  #if !defined(WorkbenchBase)
   extern struct Library *WorkbenchBase;
  #endif
  #ifndef __aros_getbase_WorkbenchBase
   #define __aros_getbase_WorkbenchBase() (WorkbenchBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __WORKBENCH_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_WorkbenchBase;
 #define AROS_RELLIB_OFFSET_WORKBENCH __aros_rellib_offset_WorkbenchBase
 #define AROS_RELLIB_BASE_WORKBENCH __aros_rellib_base_WorkbenchBase
 #ifndef __aros_getbase_WorkbenchBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_WorkbenchBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_WorkbenchBase))
 #endif
#endif

#ifndef __aros_getbase_WorkbenchBase
extern struct Library *__aros_getbase_WorkbenchBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(WORKBENCH_NOLIBINLINE) && !defined(__WORKBENCH_RELLIBBASE__)
# include <inline/workbench.h>
#elif !defined(NOLIBDEFINES) && !defined(WORKBENCH_NOLIBDEFINES)
# include <defines/workbench.h>
#endif

#endif /* PROTO_WORKBENCH_H */
