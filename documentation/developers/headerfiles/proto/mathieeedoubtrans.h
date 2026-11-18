#ifndef PROTO_MATHIEEEDOUBTRANS_H
#define PROTO_MATHIEEEDOUBTRANS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/mathieeedoubtrans/mathieeedoubtrans.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/mathieeedoubtrans_protos.h>

#ifndef __MATHIEEEDOUBTRANS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MATHIEEEDOUBTRANS_NOLIBBASE__)
  #if !defined(MathIeeeDoubTransBase)
   extern struct Library *MathIeeeDoubTransBase;
  #endif
  #ifndef __aros_getbase_MathIeeeDoubTransBase
   #define __aros_getbase_MathIeeeDoubTransBase() (MathIeeeDoubTransBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MATHIEEEDOUBTRANS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MathIeeeDoubTransBase;
 #define AROS_RELLIB_OFFSET_MATHIEEEDOUBTRANS __aros_rellib_offset_MathIeeeDoubTransBase
 #define AROS_RELLIB_BASE_MATHIEEEDOUBTRANS __aros_rellib_base_MathIeeeDoubTransBase
 #ifndef __aros_getbase_MathIeeeDoubTransBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MathIeeeDoubTransBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_MathIeeeDoubTransBase))
 #endif
#endif

#ifndef __aros_getbase_MathIeeeDoubTransBase
extern struct Library *__aros_getbase_MathIeeeDoubTransBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MATHIEEEDOUBTRANS_NOLIBINLINE) && !defined(__MATHIEEEDOUBTRANS_RELLIBBASE__)
# include <inline/mathieeedoubtrans.h>
#elif !defined(NOLIBDEFINES) && !defined(MATHIEEEDOUBTRANS_NOLIBDEFINES)
# include <defines/mathieeedoubtrans.h>
#endif

#endif /* PROTO_MATHIEEEDOUBTRANS_H */
