#ifndef PROTO_REXXSYSLIB_H
#define PROTO_REXXSYSLIB_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/rexxsyslib/rexxsyslib.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/rexxsyslib_protos.h>

#ifndef __REXXSYSLIB_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__REXXSYSLIB_NOLIBBASE__)
  #if !defined(RexxSysBase)
   #ifdef __REXXSYSLIB_STDLIBBASE__
    extern struct Library *RexxSysBase;
   #else
    extern struct RxsLib *RexxSysBase;
   #endif
  #endif
  #ifndef __aros_getbase_RexxSysBase
   #define __aros_getbase_RexxSysBase() (RexxSysBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __REXXSYSLIB_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_RexxSysBase;
 #define AROS_RELLIB_OFFSET_REXXSYSLIB __aros_rellib_offset_RexxSysBase
 #define AROS_RELLIB_BASE_REXXSYSLIB __aros_rellib_base_RexxSysBase
 #ifndef __aros_getbase_RexxSysBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_RexxSysBase() (*(struct RxsLib **)(__aros_getoffsettable()+__aros_rellib_offset_RexxSysBase))
 #endif
#endif

#ifndef __aros_getbase_RexxSysBase
extern struct RxsLib *__aros_getbase_RexxSysBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(REXXSYSLIB_NOLIBINLINE) && !defined(__REXXSYSLIB_RELLIBBASE__)
# include <inline/rexxsyslib.h>
#elif !defined(NOLIBDEFINES) && !defined(REXXSYSLIB_NOLIBDEFINES)
# include <defines/rexxsyslib.h>
#endif

#endif /* PROTO_REXXSYSLIB_H */
