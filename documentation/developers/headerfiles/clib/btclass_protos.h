#ifndef CLIB_BTCLASS_PROTOS_H
#define CLIB_BTCLASS_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/bluetooth/classes/btclass.conf'. Edits will be lost. ***
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
#include <libraries/bluetooth.h>
#include <libraries/btclass.h>

__BEGIN_DECLS


#if !defined(__BTCLASS_LIBAPI__) || (1 <= __BTCLASS_LIBAPI__)
AROS_LP3(LONG, btcGetAttrsA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(APTR, btstruct, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BtClsBase, 5, Btclass
);

#endif /* !defined(__BTCLASS_LIBAPI__) || (1 <= __BTCLASS_LIBAPI__) */

#if !defined(__BTCLASS_LIBAPI__) || (1 <= __BTCLASS_LIBAPI__)
AROS_LP3(LONG, btcSetAttrsA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(APTR, btstruct, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BtClsBase, 6, Btclass
);

#endif /* !defined(__BTCLASS_LIBAPI__) || (1 <= __BTCLASS_LIBAPI__) */

#if !defined(__BTCLASS_LIBAPI__) || (1 <= __BTCLASS_LIBAPI__)
AROS_LP2(SIPTR, btcDoMethodA,
         AROS_LPA(ULONG, methodid, D0),
         AROS_LPA(IPTR *, methoddata, A1),
         LIBBASETYPEPTR, BtClsBase, 7, Btclass
);

#endif /* !defined(__BTCLASS_LIBAPI__) || (1 <= __BTCLASS_LIBAPI__) */

__END_DECLS

#endif /* CLIB_BTCLASS_PROTOS_H */
