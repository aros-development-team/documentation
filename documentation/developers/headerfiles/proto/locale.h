#ifndef PROTO_LOCALE_H
#define PROTO_LOCALE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/locale/locale.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/locale_protos.h>

#ifndef __LOCALE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LOCALE_NOLIBBASE__)
  #if !defined(LocaleBase)
   #ifdef __LOCALE_STDLIBBASE__
    extern struct Library *LocaleBase;
   #else
    extern struct LocaleBase *LocaleBase;
   #endif
  #endif
  #ifndef __aros_getbase_LocaleBase
   #define __aros_getbase_LocaleBase() (LocaleBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LOCALE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_LocaleBase;
 #define AROS_RELLIB_OFFSET_LOCALE __aros_rellib_offset_LocaleBase
 #define AROS_RELLIB_BASE_LOCALE __aros_rellib_base_LocaleBase
 #ifndef __aros_getbase_LocaleBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_LocaleBase() (*(struct LocaleBase **)(__aros_getoffsettable()+__aros_rellib_offset_LocaleBase))
 #endif
#endif

#ifndef __aros_getbase_LocaleBase
extern struct LocaleBase *__aros_getbase_LocaleBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LOCALE_NOLIBINLINE) && !defined(__LOCALE_RELLIBBASE__)
# include <inline/locale.h>
#elif !defined(NOLIBDEFINES) && !defined(LOCALE_NOLIBDEFINES)
# include <defines/locale.h>
#endif

#endif /* PROTO_LOCALE_H */
