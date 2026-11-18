#ifndef PROTO_EFI_H
#define PROTO_EFI_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/arch/all-native/efi/efi.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/efi_protos.h>

#ifndef __EFI_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__EFI_NOLIBBASE__)
  #if !defined(EFIBase)
   #ifdef __EFI_STDLIBBASE__
    extern struct Library *EFIBase;
   #else
    extern struct EFIBase *EFIBase;
   #endif
  #endif
  #ifndef __aros_getbase_EFIBase
   #define __aros_getbase_EFIBase() (EFIBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __EFI_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_EFIBase;
 #define AROS_RELLIB_OFFSET_EFI __aros_rellib_offset_EFIBase
 #define AROS_RELLIB_BASE_EFI __aros_rellib_base_EFIBase
 #ifndef __aros_getbase_EFIBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_EFIBase() (*(struct EFIBase **)(__aros_getoffsettable()+__aros_rellib_offset_EFIBase))
 #endif
#endif

#ifndef __aros_getbase_EFIBase
extern struct EFIBase *__aros_getbase_EFIBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(EFI_NOLIBINLINE) && !defined(__EFI_RELLIBBASE__)
# include <inline/efi.h>
#elif !defined(NOLIBDEFINES) && !defined(EFI_NOLIBDEFINES)
# include <defines/efi.h>
#endif

#endif /* PROTO_EFI_H */
