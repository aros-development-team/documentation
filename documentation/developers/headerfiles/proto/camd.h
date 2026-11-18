#ifndef PROTO_CAMD_H
#define PROTO_CAMD_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/camd/camd.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/camd_protos.h>

#ifndef __CAMD_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CAMD_NOLIBBASE__)
  #if !defined(CamdBase)
   extern struct Library *CamdBase;
  #endif
  #ifndef __aros_getbase_CamdBase
   #define __aros_getbase_CamdBase() (CamdBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CAMD_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_CamdBase;
 #define AROS_RELLIB_OFFSET_CAMD __aros_rellib_offset_CamdBase
 #define AROS_RELLIB_BASE_CAMD __aros_rellib_base_CamdBase
 #ifndef __aros_getbase_CamdBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_CamdBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_CamdBase))
 #endif
#endif

#ifndef __aros_getbase_CamdBase
extern struct Library *__aros_getbase_CamdBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CAMD_NOLIBINLINE) && !defined(__CAMD_RELLIBBASE__)
# include <inline/camd.h>
#elif !defined(NOLIBDEFINES) && !defined(CAMD_NOLIBDEFINES)
# include <defines/camd.h>
#endif

#endif /* PROTO_CAMD_H */
