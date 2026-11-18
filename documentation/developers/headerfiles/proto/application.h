#ifndef PROTO_APPLICATION_H
#define PROTO_APPLICATION_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/application/application.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/application_protos.h>

#ifndef __APPLICATION_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__APPLICATION_NOLIBBASE__)
  #if !defined(ApplicationBase)
   extern struct Library *ApplicationBase;
  #endif
  #ifndef __aros_getbase_ApplicationBase
   #define __aros_getbase_ApplicationBase() (ApplicationBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __APPLICATION_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ApplicationBase;
 #define AROS_RELLIB_OFFSET_APPLICATION __aros_rellib_offset_ApplicationBase
 #define AROS_RELLIB_BASE_APPLICATION __aros_rellib_base_ApplicationBase
 #ifndef __aros_getbase_ApplicationBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ApplicationBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ApplicationBase))
 #endif
#endif

#ifndef __aros_getbase_ApplicationBase
extern struct Library *__aros_getbase_ApplicationBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(APPLICATION_NOLIBINLINE) && !defined(__APPLICATION_RELLIBBASE__)
# include <inline/application.h>
#elif !defined(NOLIBDEFINES) && !defined(APPLICATION_NOLIBDEFINES)
# include <defines/application.h>
#endif

#endif /* PROTO_APPLICATION_H */
