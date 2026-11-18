#ifndef CLIB_CARDRES_PROTOS_H
#define CLIB_CARDRES_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/card/card.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <resources/card.h>

__BEGIN_DECLS


#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP1(struct CardHandle *, OwnCard,
         AROS_LPA(struct CardHandle *, handle, A1),
         LIBBASETYPEPTR, CardResource, 1, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP2(void, ReleaseCard,
         AROS_LPA(struct CardHandle *, handle, A1),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, CardResource, 2, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP0(struct CardMemoryMap *, GetCardMap,
         LIBBASETYPEPTR, CardResource, 3, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP1(BOOL, BeginCardAccess,
         AROS_LPA(struct CardHandle *, handle, A1),
         LIBBASETYPEPTR, CardResource, 4, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP1(BOOL, EndCardAccess,
         AROS_LPA(struct CardHandle *, handle, A1),
         LIBBASETYPEPTR, CardResource, 5, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP0(UBYTE, ReadCardStatus,
         LIBBASETYPEPTR, CardResource, 6, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP2(BOOL, CardResetRemove,
         AROS_LPA(struct CardHandle *, handle, A1),
         AROS_LPA(ULONG, flag, D0),
         LIBBASETYPEPTR, CardResource, 7, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP2(UBYTE, CardMiscControl,
         AROS_LPA(struct CardHandle *, handle, A1),
         AROS_LPA(UBYTE, control_bits, D1),
         LIBBASETYPEPTR, CardResource, 8, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP2(ULONG, CardAccessSpeed,
         AROS_LPA(struct CardHandle *, handle, A1),
         AROS_LPA(ULONG, nanoseconds, D0),
         LIBBASETYPEPTR, CardResource, 9, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP2(LONG, CardProgramVoltage,
         AROS_LPA(struct CardHandle *, handle, A1),
         AROS_LPA(ULONG, voltage, D0),
         LIBBASETYPEPTR, CardResource, 10, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP1(BOOL, CardResetCard,
         AROS_LPA(struct CardHandle *, handle, A1),
         LIBBASETYPEPTR, CardResource, 11, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP4(BOOL, CopyTuple,
         AROS_LPA(struct CardHandle *, handle, A1),
         AROS_LPA(UBYTE *, buffer, A0),
         AROS_LPA(ULONG, tuplecode, D1),
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, CardResource, 12, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP2(ULONG, DeviceTuple,
         AROS_LPA(UBYTE *, tuple_data, A0),
         AROS_LPA(struct DeviceTData *, storage, A1),
         LIBBASETYPEPTR, CardResource, 13, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP1(struct Resident *, IfAmigaXIP,
         AROS_LPA(struct CardHandle *, handle, A2),
         LIBBASETYPEPTR, CardResource, 14, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP0(BOOL, CardForceChange,
         LIBBASETYPEPTR, CardResource, 15, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP0(ULONG, CardChangeCount,
         LIBBASETYPEPTR, CardResource, 16, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

#if !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__)
AROS_LP0(ULONG, CardInterface,
         LIBBASETYPEPTR, CardResource, 17, Card
);

#endif /* !defined(__CARDRES_LIBAPI__) || (41 <= __CARDRES_LIBAPI__) */

__END_DECLS

#endif /* CLIB_CARDRES_PROTOS_H */
