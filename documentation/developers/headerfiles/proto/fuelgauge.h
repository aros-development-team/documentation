#ifndef PROTO_FUELGAUGE_H
#define PROTO_FUELGAUGE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/fuelgauge/fuelgauge.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/fuelgauge_protos.h>

#ifndef __FUELGAUGE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__FUELGAUGE_NOLIBBASE__)
  #if !defined(FuelGaugeBase)
   extern struct Library *FuelGaugeBase;
  #endif
  #ifndef __aros_getbase_FuelGaugeBase
   #define __aros_getbase_FuelGaugeBase() (FuelGaugeBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __FUELGAUGE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_FuelGaugeBase;
 #define AROS_RELLIB_OFFSET_FUELGAUGE __aros_rellib_offset_FuelGaugeBase
 #define AROS_RELLIB_BASE_FUELGAUGE __aros_rellib_base_FuelGaugeBase
 #ifndef __aros_getbase_FuelGaugeBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_FuelGaugeBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_FuelGaugeBase))
 #endif
#endif

#ifndef __aros_getbase_FuelGaugeBase
extern struct Library *__aros_getbase_FuelGaugeBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(FUELGAUGE_NOLIBINLINE) && !defined(__FUELGAUGE_RELLIBBASE__)
# include <inline/fuelgauge.h>
#elif !defined(NOLIBDEFINES) && !defined(FUELGAUGE_NOLIBDEFINES)
# include <defines/fuelgauge.h>
#endif

#endif /* PROTO_FUELGAUGE_H */
