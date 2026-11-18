#ifndef PROTO_LISTBROWSER_H
#define PROTO_LISTBROWSER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/listbrowser/listbrowser.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/listbrowser_protos.h>

#ifndef __LISTBROWSER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LISTBROWSER_NOLIBBASE__)
  #if !defined(ListBrowserBase)
   extern struct Library *ListBrowserBase;
  #endif
  #ifndef __aros_getbase_ListBrowserBase
   #define __aros_getbase_ListBrowserBase() (ListBrowserBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LISTBROWSER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ListBrowserBase;
 #define AROS_RELLIB_OFFSET_LISTBROWSER __aros_rellib_offset_ListBrowserBase
 #define AROS_RELLIB_BASE_LISTBROWSER __aros_rellib_base_ListBrowserBase
 #ifndef __aros_getbase_ListBrowserBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ListBrowserBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ListBrowserBase))
 #endif
#endif

#ifndef __aros_getbase_ListBrowserBase
extern struct Library *__aros_getbase_ListBrowserBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LISTBROWSER_NOLIBINLINE) && !defined(__LISTBROWSER_RELLIBBASE__)
# include <inline/listbrowser.h>
#elif !defined(NOLIBDEFINES) && !defined(LISTBROWSER_NOLIBDEFINES)
# include <defines/listbrowser.h>
#endif

#endif /* PROTO_LISTBROWSER_H */
