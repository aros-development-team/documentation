#ifndef CLIB_MISC_PROTOS_H
#define CLIB_MISC_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/misc/misc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__MISC_LIBAPI__) || (41 <= __MISC_LIBAPI__)
AROS_LP2(char *, AllocMiscResource,
         AROS_LPA(ULONG, unitNum, D0),
         AROS_LPA(char *, name, A0),
         LIBBASETYPEPTR, MiscBase, 1, Misc
);

#endif /* !defined(__MISC_LIBAPI__) || (41 <= __MISC_LIBAPI__) */

#if !defined(__MISC_LIBAPI__) || (41 <= __MISC_LIBAPI__)
AROS_LP1(void, FreeMiscResource,
         AROS_LPA(ULONG, unitNum, D0),
         LIBBASETYPEPTR, MiscBase, 2, Misc
);

#endif /* !defined(__MISC_LIBAPI__) || (41 <= __MISC_LIBAPI__) */

__END_DECLS

#endif /* CLIB_MISC_PROTOS_H */
