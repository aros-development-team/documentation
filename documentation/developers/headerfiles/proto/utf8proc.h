#ifndef PROTO_UTF8PROC_H
#define PROTO_UTF8PROC_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/utf8proc/utf8proc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/utf8proc_protos.h>

#ifndef __UTF8PROC_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__UTF8PROC_NOLIBBASE__)
  #if !defined(UTF8PROCBase)
   extern struct Library *UTF8PROCBase;
  #endif
  #ifndef __aros_getbase_UTF8PROCBase
   #define __aros_getbase_UTF8PROCBase() (UTF8PROCBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __UTF8PROC_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_UTF8PROCBase;
 #define AROS_RELLIB_OFFSET_UTF8PROC __aros_rellib_offset_UTF8PROCBase
 #define AROS_RELLIB_BASE_UTF8PROC __aros_rellib_base_UTF8PROCBase
 #ifndef __aros_getbase_UTF8PROCBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_UTF8PROCBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_UTF8PROCBase))
 #endif
#endif

#ifndef __aros_getbase_UTF8PROCBase
extern struct Library *__aros_getbase_UTF8PROCBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(UTF8PROC_NOLIBINLINE) && !defined(__UTF8PROC_RELLIBBASE__)
# include <inline/utf8proc.h>
#elif !defined(NOLIBDEFINES) && !defined(UTF8PROC_NOLIBDEFINES)
# include <defines/utf8proc.h>
#endif

#endif /* PROTO_UTF8PROC_H */
