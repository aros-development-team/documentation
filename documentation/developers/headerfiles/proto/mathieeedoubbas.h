#ifndef PROTO_MATHIEEEDOUBBAS_H
#define PROTO_MATHIEEEDOUBBAS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/mathieeedoubbas/mathieeedoubbas.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/mathieeedoubbas_protos.h>

#ifndef __MATHIEEEDOUBBAS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MATHIEEEDOUBBAS_NOLIBBASE__)
  #if !defined(MathIeeeDoubBasBase)
   extern struct Library *MathIeeeDoubBasBase;
  #endif
  #ifndef __aros_getbase_MathIeeeDoubBasBase
   #define __aros_getbase_MathIeeeDoubBasBase() (MathIeeeDoubBasBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MATHIEEEDOUBBAS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MathIeeeDoubBasBase;
 #define AROS_RELLIB_OFFSET_MATHIEEEDOUBBAS __aros_rellib_offset_MathIeeeDoubBasBase
 #define AROS_RELLIB_BASE_MATHIEEEDOUBBAS __aros_rellib_base_MathIeeeDoubBasBase
 #ifndef __aros_getbase_MathIeeeDoubBasBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MathIeeeDoubBasBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_MathIeeeDoubBasBase))
 #endif
#endif

#ifndef __aros_getbase_MathIeeeDoubBasBase
extern struct Library *__aros_getbase_MathIeeeDoubBasBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MATHIEEEDOUBBAS_NOLIBINLINE) && !defined(__MATHIEEEDOUBBAS_RELLIBBASE__)
# include <inline/mathieeedoubbas.h>
#elif !defined(NOLIBDEFINES) && !defined(MATHIEEEDOUBBAS_NOLIBDEFINES)
# include <defines/mathieeedoubbas.h>
#endif

#endif /* PROTO_MATHIEEEDOUBBAS_H */
