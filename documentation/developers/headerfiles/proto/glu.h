#ifndef PROTO_GLU_H
#define PROTO_GLU_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/glu/glu.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/glu_protos.h>

#ifndef __GLU_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__GLU_NOLIBBASE__)
  #if !defined(GLUBase)
   extern struct Library *GLUBase;
  #endif
  #ifndef __aros_getbase_GLUBase
   #define __aros_getbase_GLUBase() (GLUBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __GLU_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_GLUBase;
 #define AROS_RELLIB_OFFSET_GLU __aros_rellib_offset_GLUBase
 #define AROS_RELLIB_BASE_GLU __aros_rellib_base_GLUBase
 #ifndef __aros_getbase_GLUBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_GLUBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_GLUBase))
 #endif
#endif

#ifndef __aros_getbase_GLUBase
extern struct Library *__aros_getbase_GLUBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(GLU_NOLIBINLINE) && !defined(__GLU_RELLIBBASE__)
# include <inline/glu.h>
#elif !defined(NOLIBDEFINES) && !defined(GLU_NOLIBDEFINES)
# include <defines/glu.h>
#endif

#endif /* PROTO_GLU_H */
