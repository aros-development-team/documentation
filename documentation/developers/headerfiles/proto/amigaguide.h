#ifndef PROTO_AMIGAGUIDE_H
#define PROTO_AMIGAGUIDE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/amigaguide/amigaguide.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/amigaguide_protos.h>

#ifndef __AMIGAGUIDE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__AMIGAGUIDE_NOLIBBASE__)
  #if !defined(AmigaGuideBase)
   extern struct Library *AmigaGuideBase;
  #endif
  #ifndef __aros_getbase_AmigaGuideBase
   #define __aros_getbase_AmigaGuideBase() (AmigaGuideBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __AMIGAGUIDE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_AmigaGuideBase;
 #define AROS_RELLIB_OFFSET_AMIGAGUIDE __aros_rellib_offset_AmigaGuideBase
 #define AROS_RELLIB_BASE_AMIGAGUIDE __aros_rellib_base_AmigaGuideBase
 #ifndef __aros_getbase_AmigaGuideBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_AmigaGuideBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_AmigaGuideBase))
 #endif
#endif

#ifndef __aros_getbase_AmigaGuideBase
extern struct Library *__aros_getbase_AmigaGuideBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(AMIGAGUIDE_NOLIBINLINE) && !defined(__AMIGAGUIDE_RELLIBBASE__)
# include <inline/amigaguide.h>
#elif !defined(NOLIBDEFINES) && !defined(AMIGAGUIDE_NOLIBDEFINES)
# include <defines/amigaguide.h>
#endif

#endif /* PROTO_AMIGAGUIDE_H */
