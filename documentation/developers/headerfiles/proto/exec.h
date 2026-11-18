#ifndef PROTO_EXEC_H
#define PROTO_EXEC_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/exec/exec.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/exec_protos.h>

#ifndef __EXEC_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__EXEC_NOLIBBASE__)
  #if !defined(SysBase)
   #ifdef __EXEC_STDLIBBASE__
    extern struct Library *SysBase;
   #else
    extern struct ExecBase *SysBase;
   #endif
  #endif
  #ifndef __aros_getbase_SysBase
   #define __aros_getbase_SysBase() (SysBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __EXEC_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_SysBase;
 #define AROS_RELLIB_OFFSET_EXEC __aros_rellib_offset_SysBase
 #define AROS_RELLIB_BASE_EXEC __aros_rellib_base_SysBase
 #ifndef __aros_getbase_SysBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_SysBase() (*(struct ExecBase **)(__aros_getoffsettable()+__aros_rellib_offset_SysBase))
 #endif
#endif

#ifndef __aros_getbase_SysBase
extern struct ExecBase *__aros_getbase_SysBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(EXEC_NOLIBINLINE) && !defined(__EXEC_RELLIBBASE__)
# include <inline/exec.h>
#elif !defined(NOLIBDEFINES) && !defined(EXEC_NOLIBDEFINES)
# include <defines/exec.h>
#endif

#endif /* PROTO_EXEC_H */
