#ifndef CLIB_HPET_PROTOS_H
#define CLIB_HPET_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/kernel/clocksource.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/nodes.h>
#include <utility/tagitem.h>

__BEGIN_DECLS


#if !defined(__HPET_LIBAPI__) || (45 <= __HPET_LIBAPI__)
AROS_LP1(BOOL, GetCSAttrsA,
         AROS_LPA(const struct TagItem *, tags, A0),
         LIBBASETYPEPTR, HPETBase, 1, Hpet
);

#endif /* !defined(__HPET_LIBAPI__) || (45 <= __HPET_LIBAPI__) */

#if !defined(__HPET_LIBAPI__) || (45 <= __HPET_LIBAPI__)
AROS_LP1(IPTR, AllocCSUnit,
         AROS_LPA(const struct Node *, owner, A0),
         LIBBASETYPEPTR, HPETBase, 2, Hpet
);

#endif /* !defined(__HPET_LIBAPI__) || (45 <= __HPET_LIBAPI__) */

#if !defined(__HPET_LIBAPI__) || (45 <= __HPET_LIBAPI__)
AROS_LP1(void, FreeCSUnit,
         AROS_LPA(IPTR, unit, D0),
         LIBBASETYPEPTR, HPETBase, 3, Hpet
);

#endif /* !defined(__HPET_LIBAPI__) || (45 <= __HPET_LIBAPI__) */

#if !defined(__HPET_LIBAPI__) || (45 <= __HPET_LIBAPI__)
AROS_LP2(BOOL, GetCSUnitAttrsA,
         AROS_LPA(IPTR, unit, D0),
         AROS_LPA(const struct TagItem *, tags, A0),
         LIBBASETYPEPTR, HPETBase, 4, Hpet
);

#endif /* !defined(__HPET_LIBAPI__) || (45 <= __HPET_LIBAPI__) */

__END_DECLS

#endif /* CLIB_HPET_PROTOS_H */
