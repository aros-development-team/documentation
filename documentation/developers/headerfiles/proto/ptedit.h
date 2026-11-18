#ifndef PROTO_PTEDIT_H
#define PROTO_PTEDIT_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/ptedit/ptedit.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/ptedit_protos.h>

#ifndef __PTEDIT_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PTEDIT_NOLIBBASE__)
  #if !defined(PtEditBase)
   extern struct Library *PtEditBase;
  #endif
  #ifndef __aros_getbase_PtEditBase
   #define __aros_getbase_PtEditBase() (PtEditBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PTEDIT_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PtEditBase;
 #define AROS_RELLIB_OFFSET_PTEDIT __aros_rellib_offset_PtEditBase
 #define AROS_RELLIB_BASE_PTEDIT __aros_rellib_base_PtEditBase
 #ifndef __aros_getbase_PtEditBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PtEditBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_PtEditBase))
 #endif
#endif

#ifndef __aros_getbase_PtEditBase
extern struct Library *__aros_getbase_PtEditBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PTEDIT_NOLIBINLINE) && !defined(__PTEDIT_RELLIBBASE__)
# include <inline/ptedit.h>
#elif !defined(NOLIBDEFINES) && !defined(PTEDIT_NOLIBDEFINES)
# include <defines/ptedit.h>
#endif

#endif /* PROTO_PTEDIT_H */
