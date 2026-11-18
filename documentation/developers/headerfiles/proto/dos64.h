#ifndef PROTO_DOS64_H
#define PROTO_DOS64_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/dos64/dos64.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/dos64_protos.h>

#ifndef __DOS64_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DOS64_NOLIBBASE__)
  #if !defined(DOS64Base)
   extern struct Library *DOS64Base;
  #endif
  #ifndef __aros_getbase_DOS64Base
   #define __aros_getbase_DOS64Base() (DOS64Base)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DOS64_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DOS64Base;
 #define AROS_RELLIB_OFFSET_DOS64 __aros_rellib_offset_DOS64Base
 #define AROS_RELLIB_BASE_DOS64 __aros_rellib_base_DOS64Base
 #ifndef __aros_getbase_DOS64Base
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DOS64Base() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_DOS64Base))
 #endif
#endif

#ifndef __aros_getbase_DOS64Base
extern struct Library *__aros_getbase_DOS64Base(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DOS64_NOLIBINLINE) && !defined(__DOS64_RELLIBBASE__)
# include <inline/dos64.h>
#elif !defined(NOLIBDEFINES) && !defined(DOS64_NOLIBDEFINES)
# include <defines/dos64.h>
#endif

#endif /* PROTO_DOS64_H */
