#ifndef PROTO_OPENFIRMWARE_H
#define PROTO_OPENFIRMWARE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/openfirmware/openfirmware.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/openfirmware_protos.h>

#ifndef __OPENFIRMWARE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__OPENFIRMWARE_NOLIBBASE__)
  #if !defined(OpenFirmwareBase)
   #ifdef __OPENFIRMWARE_STDLIBBASE__
    extern struct Library *OpenFirmwareBase;
   #else
    extern APTR OpenFirmwareBase;
   #endif
  #endif
  #ifndef __aros_getbase_OpenFirmwareBase
   #define __aros_getbase_OpenFirmwareBase() (OpenFirmwareBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __OPENFIRMWARE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_OpenFirmwareBase;
 #define AROS_RELLIB_OFFSET_OPENFIRMWARE __aros_rellib_offset_OpenFirmwareBase
 #define AROS_RELLIB_BASE_OPENFIRMWARE __aros_rellib_base_OpenFirmwareBase
 #ifndef __aros_getbase_OpenFirmwareBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_OpenFirmwareBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_OpenFirmwareBase))
 #endif
#endif

#ifndef __aros_getbase_OpenFirmwareBase
extern APTR __aros_getbase_OpenFirmwareBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(OPENFIRMWARE_NOLIBINLINE) && !defined(__OPENFIRMWARE_RELLIBBASE__)
# include <inline/openfirmware.h>
#elif !defined(NOLIBDEFINES) && !defined(OPENFIRMWARE_NOLIBDEFINES)
# include <defines/openfirmware.h>
#endif

#endif /* PROTO_OPENFIRMWARE_H */
