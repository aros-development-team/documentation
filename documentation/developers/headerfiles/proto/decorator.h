#ifndef PROTO_DECORATOR_H
#define PROTO_DECORATOR_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/decorator/decorator.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/decorator_protos.h>

#ifndef __DECORATOR_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DECORATOR_NOLIBBASE__)
  #if !defined(DecoratorBase)
   extern struct Library *DecoratorBase;
  #endif
  #ifndef __aros_getbase_DecoratorBase
   #define __aros_getbase_DecoratorBase() (DecoratorBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DECORATOR_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DecoratorBase;
 #define AROS_RELLIB_OFFSET_DECORATOR __aros_rellib_offset_DecoratorBase
 #define AROS_RELLIB_BASE_DECORATOR __aros_rellib_base_DecoratorBase
 #ifndef __aros_getbase_DecoratorBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DecoratorBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_DecoratorBase))
 #endif
#endif

#ifndef __aros_getbase_DecoratorBase
extern struct Library *__aros_getbase_DecoratorBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DECORATOR_NOLIBINLINE) && !defined(__DECORATOR_RELLIBBASE__)
# include <inline/decorator.h>
#elif !defined(NOLIBDEFINES) && !defined(DECORATOR_NOLIBDEFINES)
# include <defines/decorator.h>
#endif

#endif /* PROTO_DECORATOR_H */
