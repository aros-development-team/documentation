#ifndef PROTO_STRING_H
#define PROTO_STRING_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/string/string.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/string_protos.h>

#ifndef __STRING_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__STRING_NOLIBBASE__)
  #if !defined(StringBase)
   extern struct Library *StringBase;
  #endif
  #ifndef __aros_getbase_StringBase
   #define __aros_getbase_StringBase() (StringBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __STRING_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_StringBase;
 #define AROS_RELLIB_OFFSET_STRING __aros_rellib_offset_StringBase
 #define AROS_RELLIB_BASE_STRING __aros_rellib_base_StringBase
 #ifndef __aros_getbase_StringBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_StringBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_StringBase))
 #endif
#endif

#ifndef __aros_getbase_StringBase
extern struct Library *__aros_getbase_StringBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(STRING_NOLIBINLINE) && !defined(__STRING_RELLIBBASE__)
# include <inline/string.h>
#elif !defined(NOLIBDEFINES) && !defined(STRING_NOLIBDEFINES)
# include <defines/string.h>
#endif

#endif /* PROTO_STRING_H */
