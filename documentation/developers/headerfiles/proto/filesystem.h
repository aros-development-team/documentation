#ifndef PROTO_FILESYSTEM_H
#define PROTO_FILESYSTEM_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/efsservice/filesystem.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/filesystem_protos.h>

#ifndef __FILESYSTEM_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__FILESYSTEM_NOLIBBASE__)
  #if !defined(FSServiceBase)
   extern struct Library *FSServiceBase;
  #endif
  #ifndef __aros_getbase_FSServiceBase
   #define __aros_getbase_FSServiceBase() (FSServiceBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __FILESYSTEM_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_FSServiceBase;
 #define AROS_RELLIB_OFFSET_FILESYSTEM __aros_rellib_offset_FSServiceBase
 #define AROS_RELLIB_BASE_FILESYSTEM __aros_rellib_base_FSServiceBase
 #ifndef __aros_getbase_FSServiceBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_FSServiceBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_FSServiceBase))
 #endif
#endif

#ifndef __aros_getbase_FSServiceBase
extern struct Library *__aros_getbase_FSServiceBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(FILESYSTEM_NOLIBINLINE) && !defined(__FILESYSTEM_RELLIBBASE__)
# include <inline/filesystem.h>
#elif !defined(NOLIBDEFINES) && !defined(FILESYSTEM_NOLIBDEFINES)
# include <defines/filesystem.h>
#endif

#endif /* PROTO_FILESYSTEM_H */
