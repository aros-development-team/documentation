#ifndef PROTO_TASK_H
#define PROTO_TASK_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/task/task.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/task_protos.h>

#ifndef __TASK_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__TASK_NOLIBBASE__)
  #if !defined(TaskResBase)
   #ifdef __TASK_STDLIBBASE__
    extern struct Library *TaskResBase;
   #else
    extern APTR TaskResBase;
   #endif
  #endif
  #ifndef __aros_getbase_TaskResBase
   #define __aros_getbase_TaskResBase() (TaskResBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __TASK_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_TaskResBase;
 #define AROS_RELLIB_OFFSET_TASK __aros_rellib_offset_TaskResBase
 #define AROS_RELLIB_BASE_TASK __aros_rellib_base_TaskResBase
 #ifndef __aros_getbase_TaskResBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_TaskResBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_TaskResBase))
 #endif
#endif

#ifndef __aros_getbase_TaskResBase
extern APTR __aros_getbase_TaskResBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(TASK_NOLIBINLINE) && !defined(__TASK_RELLIBBASE__)
# include <inline/task.h>
#elif !defined(NOLIBDEFINES) && !defined(TASK_NOLIBDEFINES)
# include <defines/task.h>
#endif

#endif /* PROTO_TASK_H */
