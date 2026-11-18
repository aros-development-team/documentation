#ifndef PROTO_BLUETOOTH_H
#define PROTO_BLUETOOTH_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/bluetooth/bluetooth/bluetooth.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/bluetooth_protos.h>

#ifndef __BLUETOOTH_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BLUETOOTH_NOLIBBASE__)
  #if !defined(BluetoothBase)
   extern struct Library *BluetoothBase;
  #endif
  #ifndef __aros_getbase_BluetoothBase
   #define __aros_getbase_BluetoothBase() (BluetoothBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BLUETOOTH_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BluetoothBase;
 #define AROS_RELLIB_OFFSET_BLUETOOTH __aros_rellib_offset_BluetoothBase
 #define AROS_RELLIB_BASE_BLUETOOTH __aros_rellib_base_BluetoothBase
 #ifndef __aros_getbase_BluetoothBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BluetoothBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_BluetoothBase))
 #endif
#endif

#ifndef __aros_getbase_BluetoothBase
extern struct Library *__aros_getbase_BluetoothBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BLUETOOTH_NOLIBINLINE) && !defined(__BLUETOOTH_RELLIBBASE__)
# include <inline/bluetooth.h>
#elif !defined(NOLIBDEFINES) && !defined(BLUETOOTH_NOLIBDEFINES)
# include <defines/bluetooth.h>
#endif

#endif /* PROTO_BLUETOOTH_H */
