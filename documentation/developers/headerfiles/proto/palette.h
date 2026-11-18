#ifndef PROTO_PALETTE_H
#define PROTO_PALETTE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/palette/palette.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/palette_protos.h>

#ifndef __PALETTE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PALETTE_NOLIBBASE__)
  #if !defined(PaletteBase)
   extern struct Library *PaletteBase;
  #endif
  #ifndef __aros_getbase_PaletteBase
   #define __aros_getbase_PaletteBase() (PaletteBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PALETTE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PaletteBase;
 #define AROS_RELLIB_OFFSET_PALETTE __aros_rellib_offset_PaletteBase
 #define AROS_RELLIB_BASE_PALETTE __aros_rellib_base_PaletteBase
 #ifndef __aros_getbase_PaletteBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PaletteBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_PaletteBase))
 #endif
#endif

#ifndef __aros_getbase_PaletteBase
extern struct Library *__aros_getbase_PaletteBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PALETTE_NOLIBINLINE) && !defined(__PALETTE_RELLIBBASE__)
# include <inline/palette.h>
#elif !defined(NOLIBDEFINES) && !defined(PALETTE_NOLIBDEFINES)
# include <defines/palette.h>
#endif

#endif /* PROTO_PALETTE_H */
