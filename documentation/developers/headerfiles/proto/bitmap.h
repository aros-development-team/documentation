#ifndef PROTO_BITMAP_H
#define PROTO_BITMAP_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/bitmap/bitmap.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/bitmap_protos.h>

#ifndef __BITMAP_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BITMAP_NOLIBBASE__)
  #if !defined(BitMapBase)
   extern struct Library *BitMapBase;
  #endif
  #ifndef __aros_getbase_BitMapBase
   #define __aros_getbase_BitMapBase() (BitMapBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BITMAP_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BitMapBase;
 #define AROS_RELLIB_OFFSET_BITMAP __aros_rellib_offset_BitMapBase
 #define AROS_RELLIB_BASE_BITMAP __aros_rellib_base_BitMapBase
 #ifndef __aros_getbase_BitMapBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BitMapBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_BitMapBase))
 #endif
#endif

#ifndef __aros_getbase_BitMapBase
extern struct Library *__aros_getbase_BitMapBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BITMAP_NOLIBINLINE) && !defined(__BITMAP_RELLIBBASE__)
# include <inline/bitmap.h>
#elif !defined(NOLIBDEFINES) && !defined(BITMAP_NOLIBDEFINES)
# include <defines/bitmap.h>
#endif

#endif /* PROTO_BITMAP_H */
