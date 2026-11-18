#ifndef PROTO_COMMODITIES_H
#define PROTO_COMMODITIES_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/commodities/commodities.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/commodities_protos.h>

#ifndef __COMMODITIES_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__COMMODITIES_NOLIBBASE__)
  #if !defined(CxBase)
   extern struct Library *CxBase;
  #endif
  #ifndef __aros_getbase_CxBase
   #define __aros_getbase_CxBase() (CxBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __COMMODITIES_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_CxBase;
 #define AROS_RELLIB_OFFSET_COMMODITIES __aros_rellib_offset_CxBase
 #define AROS_RELLIB_BASE_COMMODITIES __aros_rellib_base_CxBase
 #ifndef __aros_getbase_CxBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_CxBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_CxBase))
 #endif
#endif

#ifndef __aros_getbase_CxBase
extern struct Library *__aros_getbase_CxBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(COMMODITIES_NOLIBINLINE) && !defined(__COMMODITIES_RELLIBBASE__)
# include <inline/commodities.h>
#elif !defined(NOLIBDEFINES) && !defined(COMMODITIES_NOLIBDEFINES)
# include <defines/commodities.h>
#endif

#endif /* PROTO_COMMODITIES_H */
