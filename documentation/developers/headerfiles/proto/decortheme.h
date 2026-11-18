#ifndef PROTO_DECORTHEME_H
#define PROTO_DECORTHEME_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/decortheme/decortheme.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/decortheme_protos.h>

#ifndef __DECORTHEME_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DECORTHEME_NOLIBBASE__)
  #if !defined(DecorThemeBase)
   extern struct Library *DecorThemeBase;
  #endif
  #ifndef __aros_getbase_DecorThemeBase
   #define __aros_getbase_DecorThemeBase() (DecorThemeBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DECORTHEME_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DecorThemeBase;
 #define AROS_RELLIB_OFFSET_DECORTHEME __aros_rellib_offset_DecorThemeBase
 #define AROS_RELLIB_BASE_DECORTHEME __aros_rellib_base_DecorThemeBase
 #ifndef __aros_getbase_DecorThemeBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DecorThemeBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_DecorThemeBase))
 #endif
#endif

#ifndef __aros_getbase_DecorThemeBase
extern struct Library *__aros_getbase_DecorThemeBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DECORTHEME_NOLIBINLINE) && !defined(__DECORTHEME_RELLIBBASE__)
# include <inline/decortheme.h>
#elif !defined(NOLIBDEFINES) && !defined(DECORTHEME_NOLIBDEFINES)
# include <defines/decortheme.h>
#endif

#endif /* PROTO_DECORTHEME_H */
