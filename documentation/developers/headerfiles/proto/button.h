#ifndef PROTO_BUTTON_H
#define PROTO_BUTTON_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/button/button.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/button_protos.h>

#ifndef __BUTTON_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BUTTON_NOLIBBASE__)
  #if !defined(ButtonBase)
   extern struct Library *ButtonBase;
  #endif
  #ifndef __aros_getbase_ButtonBase
   #define __aros_getbase_ButtonBase() (ButtonBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BUTTON_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ButtonBase;
 #define AROS_RELLIB_OFFSET_BUTTON __aros_rellib_offset_ButtonBase
 #define AROS_RELLIB_BASE_BUTTON __aros_rellib_base_ButtonBase
 #ifndef __aros_getbase_ButtonBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ButtonBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ButtonBase))
 #endif
#endif

#ifndef __aros_getbase_ButtonBase
extern struct Library *__aros_getbase_ButtonBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BUTTON_NOLIBINLINE) && !defined(__BUTTON_RELLIBBASE__)
# include <inline/button.h>
#elif !defined(NOLIBDEFINES) && !defined(BUTTON_NOLIBDEFINES)
# include <defines/button.h>
#endif

#endif /* PROTO_BUTTON_H */
