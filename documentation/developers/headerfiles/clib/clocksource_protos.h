#ifndef CLIB_CLOCKSOURCE_PROTOS_H
#define CLIB_CLOCKSOURCE_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/kernel/clocksource.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/nodes.h>
#include <utility/tagitem.h>

__BEGIN_DECLS


#if !defined(__CLOCKSOURCE_LIBAPI__) || (45 <= __CLOCKSOURCE_LIBAPI__)
AROS_LP1(BOOL, GetCSAttrsA,
         AROS_LPA(const struct TagItem *, tags, A0),
         LIBBASETYPEPTR, CSBase, 1, Clocksource
);

#endif /* !defined(__CLOCKSOURCE_LIBAPI__) || (45 <= __CLOCKSOURCE_LIBAPI__) */

#if !defined(__CLOCKSOURCE_LIBAPI__) || (45 <= __CLOCKSOURCE_LIBAPI__)
AROS_LP1(IPTR, AllocCSUnit,
         AROS_LPA(const struct Node *, owner, A0),
         LIBBASETYPEPTR, CSBase, 2, Clocksource
);

#endif /* !defined(__CLOCKSOURCE_LIBAPI__) || (45 <= __CLOCKSOURCE_LIBAPI__) */

#if !defined(__CLOCKSOURCE_LIBAPI__) || (45 <= __CLOCKSOURCE_LIBAPI__)
AROS_LP1(void, FreeCSUnit,
         AROS_LPA(IPTR, unit, D0),
         LIBBASETYPEPTR, CSBase, 3, Clocksource
);

#endif /* !defined(__CLOCKSOURCE_LIBAPI__) || (45 <= __CLOCKSOURCE_LIBAPI__) */

#if !defined(__CLOCKSOURCE_LIBAPI__) || (45 <= __CLOCKSOURCE_LIBAPI__)
AROS_LP2(BOOL, GetCSUnitAttrsA,
         AROS_LPA(IPTR, unit, D0),
         AROS_LPA(const struct TagItem *, tags, A0),
         LIBBASETYPEPTR, CSBase, 4, Clocksource
);

#endif /* !defined(__CLOCKSOURCE_LIBAPI__) || (45 <= __CLOCKSOURCE_LIBAPI__) */

__END_DECLS

#endif /* CLIB_CLOCKSOURCE_PROTOS_H */
