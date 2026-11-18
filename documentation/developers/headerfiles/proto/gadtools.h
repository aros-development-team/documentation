#ifndef PROTO_GADTOOLS_H
#define PROTO_GADTOOLS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/gadtools/gadtools.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/gadtools_protos.h>

#ifndef __GADTOOLS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__GADTOOLS_NOLIBBASE__)
  #if !defined(GadToolsBase)
   extern struct Library *GadToolsBase;
  #endif
  #ifndef __aros_getbase_GadToolsBase
   #define __aros_getbase_GadToolsBase() (GadToolsBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __GADTOOLS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_GadToolsBase;
 #define AROS_RELLIB_OFFSET_GADTOOLS __aros_rellib_offset_GadToolsBase
 #define AROS_RELLIB_BASE_GADTOOLS __aros_rellib_base_GadToolsBase
 #ifndef __aros_getbase_GadToolsBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_GadToolsBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_GadToolsBase))
 #endif
#endif

#ifndef __aros_getbase_GadToolsBase
extern struct Library *__aros_getbase_GadToolsBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(GADTOOLS_NOLIBINLINE) && !defined(__GADTOOLS_RELLIBBASE__)
# include <inline/gadtools.h>
#elif !defined(NOLIBDEFINES) && !defined(GADTOOLS_NOLIBDEFINES)
# include <defines/gadtools.h>
#endif

#endif /* PROTO_GADTOOLS_H */
