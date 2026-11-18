#ifndef PROTO_KEYMAP_H
#define PROTO_KEYMAP_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/keymap/keymap.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/keymap_protos.h>

#ifndef __KEYMAP_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__KEYMAP_NOLIBBASE__)
  #if !defined(KeymapBase)
   extern struct Library *KeymapBase;
  #endif
  #ifndef __aros_getbase_KeymapBase
   #define __aros_getbase_KeymapBase() (KeymapBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __KEYMAP_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_KeymapBase;
 #define AROS_RELLIB_OFFSET_KEYMAP __aros_rellib_offset_KeymapBase
 #define AROS_RELLIB_BASE_KEYMAP __aros_rellib_base_KeymapBase
 #ifndef __aros_getbase_KeymapBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_KeymapBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_KeymapBase))
 #endif
#endif

#ifndef __aros_getbase_KeymapBase
extern struct Library *__aros_getbase_KeymapBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(KEYMAP_NOLIBINLINE) && !defined(__KEYMAP_RELLIBBASE__)
# include <inline/keymap.h>
#elif !defined(NOLIBDEFINES) && !defined(KEYMAP_NOLIBDEFINES)
# include <defines/keymap.h>
#endif

#endif /* PROTO_KEYMAP_H */
