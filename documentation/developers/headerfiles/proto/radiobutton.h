#ifndef PROTO_RADIOBUTTON_H
#define PROTO_RADIOBUTTON_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/radiobutton/radiobutton.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/radiobutton_protos.h>

#ifndef __RADIOBUTTON_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__RADIOBUTTON_NOLIBBASE__)
  #if !defined(RadioButtonBase)
   extern struct Library *RadioButtonBase;
  #endif
  #ifndef __aros_getbase_RadioButtonBase
   #define __aros_getbase_RadioButtonBase() (RadioButtonBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __RADIOBUTTON_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_RadioButtonBase;
 #define AROS_RELLIB_OFFSET_RADIOBUTTON __aros_rellib_offset_RadioButtonBase
 #define AROS_RELLIB_BASE_RADIOBUTTON __aros_rellib_base_RadioButtonBase
 #ifndef __aros_getbase_RadioButtonBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_RadioButtonBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_RadioButtonBase))
 #endif
#endif

#ifndef __aros_getbase_RadioButtonBase
extern struct Library *__aros_getbase_RadioButtonBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(RADIOBUTTON_NOLIBINLINE) && !defined(__RADIOBUTTON_RELLIBBASE__)
# include <inline/radiobutton.h>
#elif !defined(NOLIBDEFINES) && !defined(RADIOBUTTON_NOLIBDEFINES)
# include <defines/radiobutton.h>
#endif

#endif /* PROTO_RADIOBUTTON_H */
