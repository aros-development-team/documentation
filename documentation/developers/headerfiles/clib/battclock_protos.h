#ifndef CLIB_BATTCLOCK_PROTOS_H
#define CLIB_BATTCLOCK_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/battclock/battclock.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__)
AROS_LP0(void, ResetBattClock,
         LIBBASETYPEPTR, BattClockBase, 1, Battclock
);

#endif /* !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__) */

#if !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__)
AROS_LP0(ULONG, ReadBattClock,
         LIBBASETYPEPTR, BattClockBase, 2, Battclock
);

#endif /* !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__) */

#if !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__)
AROS_LP1(void, WriteBattClock,
         AROS_LPA(ULONG, time, D0),
         LIBBASETYPEPTR, BattClockBase, 3, Battclock
);

#endif /* !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__) */

#if !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__)
AROS_LP2(ULONG, ReadBattClockMem,
         AROS_LPA(ULONG, offset, D1),
         AROS_LPA(ULONG, length, D2),
         LIBBASETYPEPTR, BattClockBase, 4, Battclock
);

#endif /* !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__) */

#if !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__)
AROS_LP3(void, WriteBattClockMem,
         AROS_LPA(ULONG, data, D0),
         AROS_LPA(ULONG, offset, D1),
         AROS_LPA(ULONG, length, D2),
         LIBBASETYPEPTR, BattClockBase, 5, Battclock
);

#endif /* !defined(__BATTCLOCK_LIBAPI__) || (41 <= __BATTCLOCK_LIBAPI__) */

__END_DECLS

#endif /* CLIB_BATTCLOCK_PROTOS_H */
