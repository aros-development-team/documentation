#ifndef PROTO_MATHIEEESINGTRANS_H
#define PROTO_MATHIEEESINGTRANS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/mathieeesingtrans/mathieeesingtrans.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/mathieeesingtrans_protos.h>

#ifndef __MATHIEEESINGTRANS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MATHIEEESINGTRANS_NOLIBBASE__)
  #if !defined(MathIeeeSingTransBase)
   extern struct Library *MathIeeeSingTransBase;
  #endif
  #ifndef __aros_getbase_MathIeeeSingTransBase
   #define __aros_getbase_MathIeeeSingTransBase() (MathIeeeSingTransBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MATHIEEESINGTRANS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MathIeeeSingTransBase;
 #define AROS_RELLIB_OFFSET_MATHIEEESINGTRANS __aros_rellib_offset_MathIeeeSingTransBase
 #define AROS_RELLIB_BASE_MATHIEEESINGTRANS __aros_rellib_base_MathIeeeSingTransBase
 #ifndef __aros_getbase_MathIeeeSingTransBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MathIeeeSingTransBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_MathIeeeSingTransBase))
 #endif
#endif

#ifndef __aros_getbase_MathIeeeSingTransBase
extern struct Library *__aros_getbase_MathIeeeSingTransBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MATHIEEESINGTRANS_NOLIBINLINE) && !defined(__MATHIEEESINGTRANS_RELLIBBASE__)
# include <inline/mathieeesingtrans.h>
#elif !defined(NOLIBDEFINES) && !defined(MATHIEEESINGTRANS_NOLIBDEFINES)
# include <defines/mathieeesingtrans.h>
#endif

#endif /* PROTO_MATHIEEESINGTRANS_H */
