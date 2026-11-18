#ifndef PROTO_CHECKBOX_H
#define PROTO_CHECKBOX_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/checkbox/checkbox.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/checkbox_protos.h>

#ifndef __CHECKBOX_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CHECKBOX_NOLIBBASE__)
  #if !defined(CheckBoxBase)
   extern struct Library *CheckBoxBase;
  #endif
  #ifndef __aros_getbase_CheckBoxBase
   #define __aros_getbase_CheckBoxBase() (CheckBoxBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CHECKBOX_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_CheckBoxBase;
 #define AROS_RELLIB_OFFSET_CHECKBOX __aros_rellib_offset_CheckBoxBase
 #define AROS_RELLIB_BASE_CHECKBOX __aros_rellib_base_CheckBoxBase
 #ifndef __aros_getbase_CheckBoxBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_CheckBoxBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_CheckBoxBase))
 #endif
#endif

#ifndef __aros_getbase_CheckBoxBase
extern struct Library *__aros_getbase_CheckBoxBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CHECKBOX_NOLIBINLINE) && !defined(__CHECKBOX_RELLIBBASE__)
# include <inline/checkbox.h>
#elif !defined(NOLIBDEFINES) && !defined(CHECKBOX_NOLIBDEFINES)
# include <defines/checkbox.h>
#endif

#endif /* PROTO_CHECKBOX_H */
