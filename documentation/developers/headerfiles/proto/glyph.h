#ifndef PROTO_GLYPH_H
#define PROTO_GLYPH_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/glyph/glyph.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/glyph_protos.h>

#ifndef __GLYPH_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__GLYPH_NOLIBBASE__)
  #if !defined(GlyphBase)
   extern struct Library *GlyphBase;
  #endif
  #ifndef __aros_getbase_GlyphBase
   #define __aros_getbase_GlyphBase() (GlyphBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __GLYPH_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_GlyphBase;
 #define AROS_RELLIB_OFFSET_GLYPH __aros_rellib_offset_GlyphBase
 #define AROS_RELLIB_BASE_GLYPH __aros_rellib_base_GlyphBase
 #ifndef __aros_getbase_GlyphBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_GlyphBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_GlyphBase))
 #endif
#endif

#ifndef __aros_getbase_GlyphBase
extern struct Library *__aros_getbase_GlyphBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(GLYPH_NOLIBINLINE) && !defined(__GLYPH_RELLIBBASE__)
# include <inline/glyph.h>
#elif !defined(NOLIBDEFINES) && !defined(GLYPH_NOLIBDEFINES)
# include <defines/glyph.h>
#endif

#endif /* PROTO_GLYPH_H */
