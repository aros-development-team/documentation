#ifndef PROTO_FREETYPE2_H
#define PROTO_FREETYPE2_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/freetype2/freetype2.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/freetype2_protos.h>

#ifndef __FREETYPE2_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__FREETYPE2_NOLIBBASE__)
  #if !defined(FreeType2Base)
   extern struct Library *FreeType2Base;
  #endif
  #ifndef __aros_getbase_FreeType2Base
   #define __aros_getbase_FreeType2Base() (FreeType2Base)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __FREETYPE2_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_FreeType2Base;
 #define AROS_RELLIB_OFFSET_FREETYPE2 __aros_rellib_offset_FreeType2Base
 #define AROS_RELLIB_BASE_FREETYPE2 __aros_rellib_base_FreeType2Base
 #ifndef __aros_getbase_FreeType2Base
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_FreeType2Base() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_FreeType2Base))
 #endif
#endif

#ifndef __aros_getbase_FreeType2Base
extern struct Library *__aros_getbase_FreeType2Base(void);
#endif

#if !defined(NOLIBINLINE) && !defined(FREETYPE2_NOLIBINLINE) && !defined(__FREETYPE2_RELLIBBASE__)
# include <inline/freetype2.h>
#elif !defined(NOLIBDEFINES) && !defined(FREETYPE2_NOLIBDEFINES)
# include <defines/freetype2.h>
#endif

#endif /* PROTO_FREETYPE2_H */
