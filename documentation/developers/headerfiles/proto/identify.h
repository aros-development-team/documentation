#ifndef PROTO_IDENTIFY_H
#define PROTO_IDENTIFY_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/identify/identify.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/identify_protos.h>

#ifndef __IDENTIFY_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__IDENTIFY_NOLIBBASE__)
  #if !defined(IdentifyBase)
   extern struct Library *IdentifyBase;
  #endif
  #ifndef __aros_getbase_IdentifyBase
   #define __aros_getbase_IdentifyBase() (IdentifyBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __IDENTIFY_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_IdentifyBase;
 #define AROS_RELLIB_OFFSET_IDENTIFY __aros_rellib_offset_IdentifyBase
 #define AROS_RELLIB_BASE_IDENTIFY __aros_rellib_base_IdentifyBase
 #ifndef __aros_getbase_IdentifyBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_IdentifyBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_IdentifyBase))
 #endif
#endif

#ifndef __aros_getbase_IdentifyBase
extern struct Library *__aros_getbase_IdentifyBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(IDENTIFY_NOLIBINLINE) && !defined(__IDENTIFY_RELLIBBASE__)
# include <inline/identify.h>
#elif !defined(NOLIBDEFINES) && !defined(IDENTIFY_NOLIBDEFINES)
# include <defines/identify.h>
#endif

#endif /* PROTO_IDENTIFY_H */
