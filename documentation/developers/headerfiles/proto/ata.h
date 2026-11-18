#ifndef PROTO_ATA_H
#define PROTO_ATA_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/ata/ata.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <exec/devices.h>
#include <aros/system.h>

#include <clib/ata_protos.h>

#ifndef __ATA_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__ATA_NOLIBBASE__)
  #if !defined(ataBase)
   #ifdef __ATA_STDLIBBASE__
    extern struct Library *ataBase;
   #else
    extern struct Device *ataBase;
   #endif
  #endif
  #ifndef __aros_getbase_ataBase
   #define __aros_getbase_ataBase() (ataBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __ATA_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ataBase;
 #define AROS_RELLIB_OFFSET_ATA __aros_rellib_offset_ataBase
 #define AROS_RELLIB_BASE_ATA __aros_rellib_base_ataBase
 #ifndef __aros_getbase_ataBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ataBase() (*(struct Device **)(__aros_getoffsettable()+__aros_rellib_offset_ataBase))
 #endif
#endif

#ifndef __aros_getbase_ataBase
extern struct Device *__aros_getbase_ataBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(ATA_NOLIBINLINE) && !defined(__ATA_RELLIBBASE__)
# include <inline/ata.h>
#elif !defined(NOLIBDEFINES) && !defined(ATA_NOLIBDEFINES)
# include <defines/ata.h>
#endif

#endif /* PROTO_ATA_H */
