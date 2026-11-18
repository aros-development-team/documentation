#ifndef CLIB_USBCLASS_PROTOS_H
#define CLIB_USBCLASS_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/usb/classes/usbclass.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <exec/lists.h>
#include <exec/semaphores.h>
#include <exec/devices.h>
#include <exec/io.h>
#include <exec/ports.h>
#include <utility/utility.h>
#include <devices/timer.h>
#include <libraries/poseidon.h>
#include <libraries/usbclass.h>

__BEGIN_DECLS


#if !defined(__USBCLASS_LIBAPI__) || (1 <= __USBCLASS_LIBAPI__)
AROS_LP3(LONG, usbGetAttrsA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(APTR, usbstruct, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, UsbClsBase, 5, Usbclass
);

#endif /* !defined(__USBCLASS_LIBAPI__) || (1 <= __USBCLASS_LIBAPI__) */

#if !defined(__USBCLASS_LIBAPI__) || (1 <= __USBCLASS_LIBAPI__)
AROS_LP3(LONG, usbSetAttrsA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(APTR, usbstruct, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, UsbClsBase, 6, Usbclass
);

#endif /* !defined(__USBCLASS_LIBAPI__) || (1 <= __USBCLASS_LIBAPI__) */

#if !defined(__USBCLASS_LIBAPI__) || (1 <= __USBCLASS_LIBAPI__)
AROS_LP2(SIPTR, usbDoMethodA,
         AROS_LPA(ULONG, methodid, D0),
         AROS_LPA(IPTR *, methoddata, A1),
         LIBBASETYPEPTR, UsbClsBase, 7, Usbclass
);

#endif /* !defined(__USBCLASS_LIBAPI__) || (1 <= __USBCLASS_LIBAPI__) */

__END_DECLS

#endif /* CLIB_USBCLASS_PROTOS_H */
