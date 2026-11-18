#ifndef PROTO_CHOOSER_H
#define PROTO_CHOOSER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/chooser/chooser.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/chooser_protos.h>

#ifndef __CHOOSER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CHOOSER_NOLIBBASE__)
  #if !defined(ChooserBase)
   extern struct Library *ChooserBase;
  #endif
  #ifndef __aros_getbase_ChooserBase
   #define __aros_getbase_ChooserBase() (ChooserBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CHOOSER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ChooserBase;
 #define AROS_RELLIB_OFFSET_CHOOSER __aros_rellib_offset_ChooserBase
 #define AROS_RELLIB_BASE_CHOOSER __aros_rellib_base_ChooserBase
 #ifndef __aros_getbase_ChooserBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ChooserBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ChooserBase))
 #endif
#endif

#ifndef __aros_getbase_ChooserBase
extern struct Library *__aros_getbase_ChooserBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CHOOSER_NOLIBINLINE) && !defined(__CHOOSER_RELLIBBASE__)
# include <inline/chooser.h>
#elif !defined(NOLIBDEFINES) && !defined(CHOOSER_NOLIBDEFINES)
# include <defines/chooser.h>
#endif

#endif /* PROTO_CHOOSER_H */
