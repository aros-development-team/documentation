#ifndef PROTO_CYBERGRAPHICS_H
#define PROTO_CYBERGRAPHICS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/cgfx/cybergraphics.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/cybergraphics_protos.h>

#ifndef __CYBERGRAPHICS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CYBERGRAPHICS_NOLIBBASE__)
  #if !defined(CyberGfxBase)
   extern struct Library *CyberGfxBase;
  #endif
  #ifndef __aros_getbase_CyberGfxBase
   #define __aros_getbase_CyberGfxBase() (CyberGfxBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CYBERGRAPHICS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_CyberGfxBase;
 #define AROS_RELLIB_OFFSET_CYBERGRAPHICS __aros_rellib_offset_CyberGfxBase
 #define AROS_RELLIB_BASE_CYBERGRAPHICS __aros_rellib_base_CyberGfxBase
 #ifndef __aros_getbase_CyberGfxBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_CyberGfxBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_CyberGfxBase))
 #endif
#endif

#ifndef __aros_getbase_CyberGfxBase
extern struct Library *__aros_getbase_CyberGfxBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CYBERGRAPHICS_NOLIBINLINE) && !defined(__CYBERGRAPHICS_RELLIBBASE__)
# include <inline/cybergraphics.h>
#elif !defined(NOLIBDEFINES) && !defined(CYBERGRAPHICS_NOLIBDEFINES)
# include <defines/cybergraphics.h>
#endif

#endif /* PROTO_CYBERGRAPHICS_H */
