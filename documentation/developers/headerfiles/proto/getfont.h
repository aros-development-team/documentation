#ifndef PROTO_GETFONT_H
#define PROTO_GETFONT_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/getfont/getfont.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/getfont_protos.h>

#ifndef __GETFONT_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__GETFONT_NOLIBBASE__)
  #if !defined(GetFontBase)
   extern struct Library *GetFontBase;
  #endif
  #ifndef __aros_getbase_GetFontBase
   #define __aros_getbase_GetFontBase() (GetFontBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __GETFONT_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_GetFontBase;
 #define AROS_RELLIB_OFFSET_GETFONT __aros_rellib_offset_GetFontBase
 #define AROS_RELLIB_BASE_GETFONT __aros_rellib_base_GetFontBase
 #ifndef __aros_getbase_GetFontBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_GetFontBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_GetFontBase))
 #endif
#endif

#ifndef __aros_getbase_GetFontBase
extern struct Library *__aros_getbase_GetFontBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(GETFONT_NOLIBINLINE) && !defined(__GETFONT_RELLIBBASE__)
# include <inline/getfont.h>
#elif !defined(NOLIBDEFINES) && !defined(GETFONT_NOLIBDEFINES)
# include <defines/getfont.h>
#endif

#endif /* PROTO_GETFONT_H */
