#ifndef PROTO_POPUPMENU_H
#define PROTO_POPUPMENU_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/popupmenu/popupmenu.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/popupmenu_protos.h>

#ifndef __POPUPMENU_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__POPUPMENU_NOLIBBASE__)
  #if !defined(PopupMenuBase)
   #ifdef __POPUPMENU_STDLIBBASE__
    extern struct Library *PopupMenuBase;
   #else
    extern struct PopupMenuBase *PopupMenuBase;
   #endif
  #endif
  #ifndef __aros_getbase_PopupMenuBase
   #define __aros_getbase_PopupMenuBase() (PopupMenuBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __POPUPMENU_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PopupMenuBase;
 #define AROS_RELLIB_OFFSET_POPUPMENU __aros_rellib_offset_PopupMenuBase
 #define AROS_RELLIB_BASE_POPUPMENU __aros_rellib_base_PopupMenuBase
 #ifndef __aros_getbase_PopupMenuBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PopupMenuBase() (*(struct PopupMenuBase **)(__aros_getoffsettable()+__aros_rellib_offset_PopupMenuBase))
 #endif
#endif

#ifndef __aros_getbase_PopupMenuBase
extern struct PopupMenuBase *__aros_getbase_PopupMenuBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(POPUPMENU_NOLIBINLINE) && !defined(__POPUPMENU_RELLIBBASE__)
# include <inline/popupmenu.h>
#elif !defined(NOLIBDEFINES) && !defined(POPUPMENU_NOLIBDEFINES)
# include <defines/popupmenu.h>
#endif

#endif /* PROTO_POPUPMENU_H */
