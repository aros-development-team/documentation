#ifndef PROTO_FD_H
#define PROTO_FD_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/fd/fd.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/fd_protos.h>

#ifndef __FD_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__FD_NOLIBBASE__)
  #if !defined(FDBase)
   extern struct Library *FDBase;
  #endif
  #ifndef __aros_getbase_FDBase
   #define __aros_getbase_FDBase() (FDBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __FD_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_FDBase;
 #define AROS_RELLIB_OFFSET_FD __aros_rellib_offset_FDBase
 #define AROS_RELLIB_BASE_FD __aros_rellib_base_FDBase
 #ifndef __aros_getbase_FDBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_FDBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_FDBase))
 #endif
#endif

#ifndef __aros_getbase_FDBase
extern struct Library *__aros_getbase_FDBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(FD_NOLIBINLINE) && !defined(__FD_RELLIBBASE__)
# include <inline/fd.h>
#elif !defined(NOLIBDEFINES) && !defined(FD_NOLIBDEFINES)
# include <defines/fd.h>
#endif

#endif /* PROTO_FD_H */
