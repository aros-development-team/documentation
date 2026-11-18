#ifndef PROTO_M68KEMU_H
#define PROTO_M68KEMU_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/m68kemu/m68kemu.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/m68kemu_protos.h>

#ifndef __M68KEMU_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__M68KEMU_NOLIBBASE__)
  #if !defined(M68KEmuBase)
   extern struct Library *M68KEmuBase;
  #endif
  #ifndef __aros_getbase_M68KEmuBase
   #define __aros_getbase_M68KEmuBase() (M68KEmuBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __M68KEMU_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_M68KEmuBase;
 #define AROS_RELLIB_OFFSET_M68KEMU __aros_rellib_offset_M68KEmuBase
 #define AROS_RELLIB_BASE_M68KEMU __aros_rellib_base_M68KEmuBase
 #ifndef __aros_getbase_M68KEmuBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_M68KEmuBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_M68KEmuBase))
 #endif
#endif

#ifndef __aros_getbase_M68KEmuBase
extern struct Library *__aros_getbase_M68KEmuBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(M68KEMU_NOLIBINLINE) && !defined(__M68KEMU_RELLIBBASE__)
# include <inline/m68kemu.h>
#elif !defined(NOLIBDEFINES) && !defined(M68KEMU_NOLIBDEFINES)
# include <defines/m68kemu.h>
#endif

#endif /* PROTO_M68KEMU_H */
