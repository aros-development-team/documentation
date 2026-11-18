#ifndef PROTO_SCSI_H
#define PROTO_SCSI_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/scsi/scsi.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <exec/devices.h>
#include <aros/system.h>

#include <clib/scsi_protos.h>

#ifndef __SCSI_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__SCSI_NOLIBBASE__)
  #if !defined(SCSIBase)
   #ifdef __SCSI_STDLIBBASE__
    extern struct Library *SCSIBase;
   #else
    extern struct Device *SCSIBase;
   #endif
  #endif
  #ifndef __aros_getbase_SCSIBase
   #define __aros_getbase_SCSIBase() (SCSIBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __SCSI_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_SCSIBase;
 #define AROS_RELLIB_OFFSET_SCSI __aros_rellib_offset_SCSIBase
 #define AROS_RELLIB_BASE_SCSI __aros_rellib_base_SCSIBase
 #ifndef __aros_getbase_SCSIBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_SCSIBase() (*(struct Device **)(__aros_getoffsettable()+__aros_rellib_offset_SCSIBase))
 #endif
#endif

#ifndef __aros_getbase_SCSIBase
extern struct Device *__aros_getbase_SCSIBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(SCSI_NOLIBINLINE) && !defined(__SCSI_RELLIBBASE__)
# include <inline/scsi.h>
#elif !defined(NOLIBDEFINES) && !defined(SCSI_NOLIBDEFINES)
# include <defines/scsi.h>
#endif

#endif /* PROTO_SCSI_H */
