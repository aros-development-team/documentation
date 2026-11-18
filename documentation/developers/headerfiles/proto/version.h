#ifndef PROTO_VERSION_H
#define PROTO_VERSION_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/version/version.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/version_protos.h>

#ifndef __VERSION_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__VERSION_NOLIBBASE__)
  #if !defined(VersionBase)
   extern struct Library *VersionBase;
  #endif
  #ifndef __aros_getbase_VersionBase
   #define __aros_getbase_VersionBase() (VersionBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __VERSION_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_VersionBase;
 #define AROS_RELLIB_OFFSET_VERSION __aros_rellib_offset_VersionBase
 #define AROS_RELLIB_BASE_VERSION __aros_rellib_base_VersionBase
 #ifndef __aros_getbase_VersionBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_VersionBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_VersionBase))
 #endif
#endif

#ifndef __aros_getbase_VersionBase
extern struct Library *__aros_getbase_VersionBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(VERSION_NOLIBINLINE) && !defined(__VERSION_RELLIBBASE__)
# include <inline/version.h>
#elif !defined(NOLIBDEFINES) && !defined(VERSION_NOLIBDEFINES)
# include <defines/version.h>
#endif

#endif /* PROTO_VERSION_H */
