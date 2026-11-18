#ifndef PROTO_MATHFFP_H
#define PROTO_MATHFFP_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/mathffp/mathffp.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/mathffp_protos.h>

#ifndef __MATHFFP_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MATHFFP_NOLIBBASE__)
  #if !defined(MathBase)
   extern struct Library *MathBase;
  #endif
  #ifndef __aros_getbase_MathBase
   #define __aros_getbase_MathBase() (MathBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MATHFFP_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MathBase;
 #define AROS_RELLIB_OFFSET_MATHFFP __aros_rellib_offset_MathBase
 #define AROS_RELLIB_BASE_MATHFFP __aros_rellib_base_MathBase
 #ifndef __aros_getbase_MathBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MathBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_MathBase))
 #endif
#endif

#ifndef __aros_getbase_MathBase
extern struct Library *__aros_getbase_MathBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MATHFFP_NOLIBINLINE) && !defined(__MATHFFP_RELLIBBASE__)
# include <inline/mathffp.h>
#elif !defined(NOLIBDEFINES) && !defined(MATHFFP_NOLIBDEFINES)
# include <defines/mathffp.h>
#endif

#endif /* PROTO_MATHFFP_H */
