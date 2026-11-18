#ifndef PROTO_SPACE_H
#define PROTO_SPACE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/space/space.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/space_protos.h>

#ifndef __SPACE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__SPACE_NOLIBBASE__)
  #if !defined(SpaceBase)
   extern struct Library *SpaceBase;
  #endif
  #ifndef __aros_getbase_SpaceBase
   #define __aros_getbase_SpaceBase() (SpaceBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __SPACE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_SpaceBase;
 #define AROS_RELLIB_OFFSET_SPACE __aros_rellib_offset_SpaceBase
 #define AROS_RELLIB_BASE_SPACE __aros_rellib_base_SpaceBase
 #ifndef __aros_getbase_SpaceBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_SpaceBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_SpaceBase))
 #endif
#endif

#ifndef __aros_getbase_SpaceBase
extern struct Library *__aros_getbase_SpaceBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(SPACE_NOLIBINLINE) && !defined(__SPACE_RELLIBBASE__)
# include <inline/space.h>
#elif !defined(NOLIBDEFINES) && !defined(SPACE_NOLIBDEFINES)
# include <defines/space.h>
#endif

#endif /* PROTO_SPACE_H */
