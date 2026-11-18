#ifndef PROTO_MISC_H
#define PROTO_MISC_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/misc/misc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/misc_protos.h>

#ifndef __MISC_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MISC_NOLIBBASE__)
  #if !defined(MiscBase)
   #ifdef __MISC_STDLIBBASE__
    extern struct Library *MiscBase;
   #else
    extern APTR MiscBase;
   #endif
  #endif
  #ifndef __aros_getbase_MiscBase
   #define __aros_getbase_MiscBase() (MiscBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MISC_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MiscBase;
 #define AROS_RELLIB_OFFSET_MISC __aros_rellib_offset_MiscBase
 #define AROS_RELLIB_BASE_MISC __aros_rellib_base_MiscBase
 #ifndef __aros_getbase_MiscBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MiscBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_MiscBase))
 #endif
#endif

#ifndef __aros_getbase_MiscBase
extern APTR __aros_getbase_MiscBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MISC_NOLIBINLINE) && !defined(__MISC_RELLIBBASE__)
# include <inline/misc.h>
#elif !defined(NOLIBDEFINES) && !defined(MISC_NOLIBDEFINES)
# include <defines/misc.h>
#endif

#endif /* PROTO_MISC_H */
