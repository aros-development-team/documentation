#ifndef PROTO_EXAMPLE_H
#define PROTO_EXAMPLE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/developer/debug/test/security/pamexample/example.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/example_protos.h>

#ifndef __EXAMPLE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__EXAMPLE_NOLIBBASE__)
  #if !defined(PamExampleBase)
   extern struct Library *PamExampleBase;
  #endif
  #ifndef __aros_getbase_PamExampleBase
   #define __aros_getbase_PamExampleBase() (PamExampleBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __EXAMPLE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PamExampleBase;
 #define AROS_RELLIB_OFFSET_EXAMPLE __aros_rellib_offset_PamExampleBase
 #define AROS_RELLIB_BASE_EXAMPLE __aros_rellib_base_PamExampleBase
 #ifndef __aros_getbase_PamExampleBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PamExampleBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_PamExampleBase))
 #endif
#endif

#ifndef __aros_getbase_PamExampleBase
extern struct Library *__aros_getbase_PamExampleBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(EXAMPLE_NOLIBINLINE) && !defined(__EXAMPLE_RELLIBBASE__)
# include <inline/example.h>
#elif !defined(NOLIBDEFINES) && !defined(EXAMPLE_NOLIBDEFINES)
# include <defines/example.h>
#endif

#endif /* PROTO_EXAMPLE_H */
