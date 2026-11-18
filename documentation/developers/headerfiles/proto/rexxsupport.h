#ifndef PROTO_REXXSUPPORT_H
#define PROTO_REXXSUPPORT_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/rexxsupport/rexxsupport.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/rexxsupport_protos.h>

#ifndef __REXXSUPPORT_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__REXXSUPPORT_NOLIBBASE__)
  #if !defined(RexxSupportBase)
   extern struct Library *RexxSupportBase;
  #endif
  #ifndef __aros_getbase_RexxSupportBase
   #define __aros_getbase_RexxSupportBase() (RexxSupportBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __REXXSUPPORT_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_RexxSupportBase;
 #define AROS_RELLIB_OFFSET_REXXSUPPORT __aros_rellib_offset_RexxSupportBase
 #define AROS_RELLIB_BASE_REXXSUPPORT __aros_rellib_base_RexxSupportBase
 #ifndef __aros_getbase_RexxSupportBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_RexxSupportBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_RexxSupportBase))
 #endif
#endif

#ifndef __aros_getbase_RexxSupportBase
extern struct Library *__aros_getbase_RexxSupportBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(REXXSUPPORT_NOLIBINLINE) && !defined(__REXXSUPPORT_RELLIBBASE__)
# include <inline/rexxsupport.h>
#elif !defined(NOLIBDEFINES) && !defined(REXXSUPPORT_NOLIBDEFINES)
# include <defines/rexxsupport.h>
#endif

#endif /* PROTO_REXXSUPPORT_H */
