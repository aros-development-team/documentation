#ifndef PROTO_MATHTRANS_H
#define PROTO_MATHTRANS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/mathtrans/mathtrans.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/mathtrans_protos.h>

#ifndef __MATHTRANS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MATHTRANS_NOLIBBASE__)
  #if !defined(MathTransBase)
   extern struct Library *MathTransBase;
  #endif
  #ifndef __aros_getbase_MathTransBase
   #define __aros_getbase_MathTransBase() (MathTransBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MATHTRANS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MathTransBase;
 #define AROS_RELLIB_OFFSET_MATHTRANS __aros_rellib_offset_MathTransBase
 #define AROS_RELLIB_BASE_MATHTRANS __aros_rellib_base_MathTransBase
 #ifndef __aros_getbase_MathTransBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MathTransBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_MathTransBase))
 #endif
#endif

#ifndef __aros_getbase_MathTransBase
extern struct Library *__aros_getbase_MathTransBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MATHTRANS_NOLIBINLINE) && !defined(__MATHTRANS_RELLIBBASE__)
# include <inline/mathtrans.h>
#elif !defined(NOLIBDEFINES) && !defined(MATHTRANS_NOLIBDEFINES)
# include <defines/mathtrans.h>
#endif

#endif /* PROTO_MATHTRANS_H */
