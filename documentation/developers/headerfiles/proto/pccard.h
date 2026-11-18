#ifndef PROTO_PCCARD_H
#define PROTO_PCCARD_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/pccard/pccard.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/pccard_protos.h>

#ifndef __PCCARD_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PCCARD_NOLIBBASE__)
  #if !defined(PCCardBase)
   extern struct Library *PCCardBase;
  #endif
  #ifndef __aros_getbase_PCCardBase
   #define __aros_getbase_PCCardBase() (PCCardBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PCCARD_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PCCardBase;
 #define AROS_RELLIB_OFFSET_PCCARD __aros_rellib_offset_PCCardBase
 #define AROS_RELLIB_BASE_PCCARD __aros_rellib_base_PCCardBase
 #ifndef __aros_getbase_PCCardBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PCCardBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_PCCardBase))
 #endif
#endif

#ifndef __aros_getbase_PCCardBase
extern struct Library *__aros_getbase_PCCardBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PCCARD_NOLIBINLINE) && !defined(__PCCARD_RELLIBBASE__)
# include <inline/pccard.h>
#elif !defined(NOLIBDEFINES) && !defined(PCCARD_NOLIBDEFINES)
# include <defines/pccard.h>
#endif

#endif /* PROTO_PCCARD_H */
