#ifndef PROTO_LED_H
#define PROTO_LED_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/led/led.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/led_protos.h>

#ifndef __LED_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LED_NOLIBBASE__)
  #if !defined(LEDBase)
   extern struct Library *LEDBase;
  #endif
  #ifndef __aros_getbase_LEDBase
   #define __aros_getbase_LEDBase() (LEDBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LED_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_LEDBase;
 #define AROS_RELLIB_OFFSET_LED __aros_rellib_offset_LEDBase
 #define AROS_RELLIB_BASE_LED __aros_rellib_base_LEDBase
 #ifndef __aros_getbase_LEDBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_LEDBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_LEDBase))
 #endif
#endif

#ifndef __aros_getbase_LEDBase
extern struct Library *__aros_getbase_LEDBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LED_NOLIBINLINE) && !defined(__LED_RELLIBBASE__)
# include <inline/led.h>
#elif !defined(NOLIBDEFINES) && !defined(LED_NOLIBDEFINES)
# include <defines/led.h>
#endif

#endif /* PROTO_LED_H */
