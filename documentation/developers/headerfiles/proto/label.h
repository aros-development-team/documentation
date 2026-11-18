#ifndef PROTO_LABEL_H
#define PROTO_LABEL_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/label/label.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/label_protos.h>

#ifndef __LABEL_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LABEL_NOLIBBASE__)
  #if !defined(LabelBase)
   extern struct Library *LabelBase;
  #endif
  #ifndef __aros_getbase_LabelBase
   #define __aros_getbase_LabelBase() (LabelBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LABEL_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_LabelBase;
 #define AROS_RELLIB_OFFSET_LABEL __aros_rellib_offset_LabelBase
 #define AROS_RELLIB_BASE_LABEL __aros_rellib_base_LabelBase
 #ifndef __aros_getbase_LabelBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_LabelBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_LabelBase))
 #endif
#endif

#ifndef __aros_getbase_LabelBase
extern struct Library *__aros_getbase_LabelBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LABEL_NOLIBINLINE) && !defined(__LABEL_RELLIBBASE__)
# include <inline/label.h>
#elif !defined(NOLIBDEFINES) && !defined(LABEL_NOLIBDEFINES)
# include <defines/label.h>
#endif

#endif /* PROTO_LABEL_H */
