#ifndef CLIB_PCCARD_PROTOS_H
#define CLIB_PCCARD_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/pccard/pccard.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/pccard.h>

__BEGIN_DECLS


#if !defined(__PCCARD_LIBAPI__) || (1 <= __PCCARD_LIBAPI__)
AROS_LP1(const struct TagItem *, PCCard_GetTupleInfo,
         AROS_LPA(const UBYTE *, tuple, A0),
         LIBBASETYPEPTR, PCCardBase, 5, PCCard
);

#endif /* !defined(__PCCARD_LIBAPI__) || (1 <= __PCCARD_LIBAPI__) */

#if !defined(__PCCARD_LIBAPI__) || (1 <= __PCCARD_LIBAPI__)
AROS_LP1(VOID, PCCard_FreeTupleInfo,
         AROS_LPA(const struct TagItem *, tag_list, A0),
         LIBBASETYPEPTR, PCCardBase, 6, PCCard
);

#endif /* !defined(__PCCARD_LIBAPI__) || (1 <= __PCCARD_LIBAPI__) */

__END_DECLS

#endif /* CLIB_PCCARD_PROTOS_H */
