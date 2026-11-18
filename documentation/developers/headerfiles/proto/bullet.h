#ifndef PROTO_BULLET_H
#define PROTO_BULLET_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/bullet/bullet.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/bullet_protos.h>

#ifndef __BULLET_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BULLET_NOLIBBASE__)
  #if !defined(BulletBase)
   extern struct Library *BulletBase;
  #endif
  #ifndef __aros_getbase_BulletBase
   #define __aros_getbase_BulletBase() (BulletBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BULLET_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BulletBase;
 #define AROS_RELLIB_OFFSET_BULLET __aros_rellib_offset_BulletBase
 #define AROS_RELLIB_BASE_BULLET __aros_rellib_base_BulletBase
 #ifndef __aros_getbase_BulletBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BulletBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_BulletBase))
 #endif
#endif

#ifndef __aros_getbase_BulletBase
extern struct Library *__aros_getbase_BulletBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BULLET_NOLIBINLINE) && !defined(__BULLET_RELLIBBASE__)
# include <inline/bullet.h>
#elif !defined(NOLIBDEFINES) && !defined(BULLET_NOLIBDEFINES)
# include <defines/bullet.h>
#endif

#endif /* PROTO_BULLET_H */
