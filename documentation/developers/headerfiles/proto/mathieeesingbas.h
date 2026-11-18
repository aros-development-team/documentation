#ifndef PROTO_MATHIEEESINGBAS_H
#define PROTO_MATHIEEESINGBAS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/mathieeesingbas/mathieeesingbas.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/mathieeesingbas_protos.h>

#ifndef __MATHIEEESINGBAS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MATHIEEESINGBAS_NOLIBBASE__)
  #if !defined(MathIeeeSingBasBase)
   extern struct Library *MathIeeeSingBasBase;
  #endif
  #ifndef __aros_getbase_MathIeeeSingBasBase
   #define __aros_getbase_MathIeeeSingBasBase() (MathIeeeSingBasBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MATHIEEESINGBAS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MathIeeeSingBasBase;
 #define AROS_RELLIB_OFFSET_MATHIEEESINGBAS __aros_rellib_offset_MathIeeeSingBasBase
 #define AROS_RELLIB_BASE_MATHIEEESINGBAS __aros_rellib_base_MathIeeeSingBasBase
 #ifndef __aros_getbase_MathIeeeSingBasBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MathIeeeSingBasBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_MathIeeeSingBasBase))
 #endif
#endif

#ifndef __aros_getbase_MathIeeeSingBasBase
extern struct Library *__aros_getbase_MathIeeeSingBasBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MATHIEEESINGBAS_NOLIBINLINE) && !defined(__MATHIEEESINGBAS_RELLIBBASE__)
# include <inline/mathieeesingbas.h>
#elif !defined(NOLIBDEFINES) && !defined(MATHIEEESINGBAS_NOLIBDEFINES)
# include <defines/mathieeesingbas.h>
#endif

#endif /* PROTO_MATHIEEESINGBAS_H */
