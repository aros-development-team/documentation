#ifndef CLIB_FD_PROTOS_H
#define CLIB_FD_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/fd/fd.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/fd.h>

__BEGIN_DECLS


#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP4(LONG, FD_Alloc,
         AROS_LPA(LONG, startfd, D0),
         AROS_LPA(fd_owner_t, owner, D1),
         AROS_LPA(APTR, data, A0),
         AROS_LPA(LONG *, outfd, A1),
         LIBBASETYPEPTR, FDBase, 5, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP3(LONG, FD_Reserve,
         AROS_LPA(LONG, fd, D0),
         AROS_LPA(fd_owner_t, owner, D1),
         AROS_LPA(APTR, data, A0),
         LIBBASETYPEPTR, FDBase, 6, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP2(LONG, FD_Free,
         AROS_LPA(LONG, fd, D0),
         AROS_LPA(fd_owner_t, owner, D1),
         LIBBASETYPEPTR, FDBase, 7, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP1(LONG, FD_Check,
         AROS_LPA(LONG, fd, D0),
         LIBBASETYPEPTR, FDBase, 8, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP1(fd_owner_t, FD_GetOwner,
         AROS_LPA(LONG, fd, D0),
         LIBBASETYPEPTR, FDBase, 9, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP1(APTR, FD_GetData,
         AROS_LPA(LONG, fd, D0),
         LIBBASETYPEPTR, FDBase, 10, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP3(LONG, FD_SetData,
         AROS_LPA(LONG, fd, D0),
         AROS_LPA(fd_owner_t, owner, D1),
         AROS_LPA(APTR, data, A0),
         LIBBASETYPEPTR, FDBase, 11, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP2(LONG, FD_SetOwnerHooks,
         AROS_LPA(fd_owner_t, owner, D0),
         AROS_LPA(const struct fd_hooks *, hooks, A0),
         LIBBASETYPEPTR, FDBase, 12, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP1(const struct fd_hooks *, FD_GetOwnerHooks,
         AROS_LPA(fd_owner_t, owner, D0),
         LIBBASETYPEPTR, FDBase, 13, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

#if !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__)
AROS_LP2(LONG, FD_Retain,
         AROS_LPA(LONG, fd, D0),
         AROS_LPA(fd_owner_t, owner, D1),
         LIBBASETYPEPTR, FDBase, 14, FD
);

#endif /* !defined(__FD_LIBAPI__) || (51 <= __FD_LIBAPI__) */

__END_DECLS

#endif /* CLIB_FD_PROTOS_H */
