#ifndef CLIB_DOSRELATIVE_PROTOS_H
#define CLIB_DOSRELATIVE_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/dosrelative/dosrelative.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <dos/dos.h>
#include <dos/dosextens.h>

__BEGIN_DECLS


#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP3(BPTR, LockRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         AROS_LPA(LONG, accessMode, D3),
         LIBBASETYPEPTR, DOSRelativeBase, 5, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP3(BPTR, OpenRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         AROS_LPA(LONG, accessMode, D3),
         LIBBASETYPEPTR, DOSRelativeBase, 6, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP3(struct DevProc *, GetDeviceProcRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         AROS_LPA(struct DevProc *, dp, D3),
         LIBBASETYPEPTR, DOSRelativeBase, 7, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP2(BOOL, IsFileSystemRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         LIBBASETYPEPTR, DOSRelativeBase, 8, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP2(BPTR, CreateDirRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         LIBBASETYPEPTR, DOSRelativeBase, 9, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP2(BOOL, DeleteFileRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         LIBBASETYPEPTR, DOSRelativeBase, 10, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP3(LONG, SetCommentRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         AROS_LPA(CONST_STRPTR, comment, D3),
         LIBBASETYPEPTR, DOSRelativeBase, 11, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP3(BOOL, SetFileDateRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         AROS_LPA(const struct DateStamp *, date, D3),
         LIBBASETYPEPTR, DOSRelativeBase, 12, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP3(BOOL, SetOwnerRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         AROS_LPA(ULONG, owner_info, D3),
         LIBBASETYPEPTR, DOSRelativeBase, 13, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP3(LONG, SetProtectionRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         AROS_LPA(ULONG, protect, D3),
         LIBBASETYPEPTR, DOSRelativeBase, 14, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP4(LONG, MakeLinkRelative,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(CONST_STRPTR, name, D2),
         AROS_LPA(SIPTR, dest, D3),
         AROS_LPA(LONG, soft, D4),
         LIBBASETYPEPTR, DOSRelativeBase, 15, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

#if !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__)
AROS_LP4(LONG, RenameRelative,
         AROS_LPA(BPTR, oldLock, D1),
         AROS_LPA(CONST_STRPTR, oldName, D2),
         AROS_LPA(BPTR, newLock, D3),
         AROS_LPA(CONST_STRPTR, newName, D4),
         LIBBASETYPEPTR, DOSRelativeBase, 16, DosRelative
);

#endif /* !defined(__DOSRELATIVE_LIBAPI__) || (50 <= __DOSRELATIVE_LIBAPI__) */

__END_DECLS

#endif /* CLIB_DOSRELATIVE_PROTOS_H */
