#ifndef CLIB_FILESYSTEM_PROTOS_H
#define CLIB_FILESYSTEM_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/efsservice/filesystem.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <utility/tagitem.h>
#include <envoy/services.h>

__BEGIN_DECLS


#if !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__)
AROS_LP0(void, RexxReserved,
         LIBBASETYPEPTR, FSServiceBase, 5, FSService
);

#endif /* !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__) */

#if !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__)
AROS_LP1(ULONG, StartServiceA,
         AROS_LPA(struct TagItem *, tagList, A0),
         LIBBASETYPEPTR, FSServiceBase, 6, FSService
);

#endif /* !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__) */

#if !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__)
AROS_LP1(void, GetServiceAttrsA,
         AROS_LPA(struct TagItem *, tagList, A0),
         LIBBASETYPEPTR, FSServiceBase, 7, FSService
);

#endif /* !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__) */

#if !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__)
AROS_LP1(void, SetServiceAttrsA,
         AROS_LPA(struct TagItem *, tagList, A0),
         LIBBASETYPEPTR, FSServiceBase, 8, FSService
);

#endif /* !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__) */

#if !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__)
AROS_LP2(void, AttemptShutdown,
         AROS_LPA(CONST_STRPTR, desc, A0),
         AROS_LPA(ULONG, seconds, D0),
         LIBBASETYPEPTR, FSServiceBase, 9, FSService
);

#endif /* !defined(__FILESYSTEM_LIBAPI__) || (50 <= __FILESYSTEM_LIBAPI__) */

__END_DECLS

#endif /* CLIB_FILESYSTEM_PROTOS_H */
