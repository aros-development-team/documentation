#ifndef PROTO_TRANSLATOR_H
#define PROTO_TRANSLATOR_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/translator/translator.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/translator_protos.h>

#ifndef __TRANSLATOR_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__TRANSLATOR_NOLIBBASE__)
  #if !defined(TranslatorBase)
   extern struct Library *TranslatorBase;
  #endif
  #ifndef __aros_getbase_TranslatorBase
   #define __aros_getbase_TranslatorBase() (TranslatorBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __TRANSLATOR_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_TranslatorBase;
 #define AROS_RELLIB_OFFSET_TRANSLATOR __aros_rellib_offset_TranslatorBase
 #define AROS_RELLIB_BASE_TRANSLATOR __aros_rellib_base_TranslatorBase
 #ifndef __aros_getbase_TranslatorBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_TranslatorBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_TranslatorBase))
 #endif
#endif

#ifndef __aros_getbase_TranslatorBase
extern struct Library *__aros_getbase_TranslatorBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(TRANSLATOR_NOLIBINLINE) && !defined(__TRANSLATOR_RELLIBBASE__)
# include <inline/translator.h>
#elif !defined(NOLIBDEFINES) && !defined(TRANSLATOR_NOLIBDEFINES)
# include <defines/translator.h>
#endif

#endif /* PROTO_TRANSLATOR_H */
