#ifndef PROTO_UUID_H
#define PROTO_UUID_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/uuid/uuid.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/uuid_protos.h>

#ifndef __UUID_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__UUID_NOLIBBASE__)
  #if !defined(UUIDBase)
   extern struct Library *UUIDBase;
  #endif
  #ifndef __aros_getbase_UUIDBase
   #define __aros_getbase_UUIDBase() (UUIDBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __UUID_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_UUIDBase;
 #define AROS_RELLIB_OFFSET_UUID __aros_rellib_offset_UUIDBase
 #define AROS_RELLIB_BASE_UUID __aros_rellib_base_UUIDBase
 #ifndef __aros_getbase_UUIDBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_UUIDBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_UUIDBase))
 #endif
#endif

#ifndef __aros_getbase_UUIDBase
extern struct Library *__aros_getbase_UUIDBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(UUID_NOLIBINLINE) && !defined(__UUID_RELLIBBASE__)
# include <inline/uuid.h>
#elif !defined(NOLIBDEFINES) && !defined(UUID_NOLIBDEFINES)
# include <defines/uuid.h>
#endif

#endif /* PROTO_UUID_H */
