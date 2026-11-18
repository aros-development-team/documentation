#ifndef PROTO_GL_H
#define PROTO_GL_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/gl/gl.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/gl_protos.h>

#ifndef __GL_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__GL_NOLIBBASE__)
  #if !defined(GLBase)
   extern struct Library *GLBase;
  #endif
  #ifndef __aros_getbase_GLBase
   #define __aros_getbase_GLBase() (GLBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __GL_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_GLBase;
 #define AROS_RELLIB_OFFSET_GL __aros_rellib_offset_GLBase
 #define AROS_RELLIB_BASE_GL __aros_rellib_base_GLBase
 #ifndef __aros_getbase_GLBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_GLBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_GLBase))
 #endif
#endif

#ifndef __aros_getbase_GLBase
extern struct Library *__aros_getbase_GLBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(GL_NOLIBINLINE) && !defined(__GL_RELLIBBASE__)
# include <inline/gl.h>
#elif !defined(NOLIBDEFINES) && !defined(GL_NOLIBDEFINES)
# include <defines/gl.h>
#endif

#endif /* PROTO_GL_H */
