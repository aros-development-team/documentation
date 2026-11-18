#ifndef PROTO_EXPAT_H
#define PROTO_EXPAT_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/expat/expat.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/expat_protos.h>

#ifndef __EXPAT_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__EXPAT_NOLIBBASE__)
  #if !defined(ExpatBase)
   extern struct Library *ExpatBase;
  #endif
  #ifndef __aros_getbase_ExpatBase
   #define __aros_getbase_ExpatBase() (ExpatBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __EXPAT_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ExpatBase;
 #define AROS_RELLIB_OFFSET_EXPAT __aros_rellib_offset_ExpatBase
 #define AROS_RELLIB_BASE_EXPAT __aros_rellib_base_ExpatBase
 #ifndef __aros_getbase_ExpatBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ExpatBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ExpatBase))
 #endif
#endif

#ifndef __aros_getbase_ExpatBase
extern struct Library *__aros_getbase_ExpatBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(EXPAT_NOLIBINLINE) && !defined(__EXPAT_RELLIBBASE__)
# include <inline/expat.h>
#elif !defined(NOLIBDEFINES) && !defined(EXPAT_NOLIBDEFINES)
# include <defines/expat.h>
#endif

#endif /* PROTO_EXPAT_H */
