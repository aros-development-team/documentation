#ifndef CLIB_DISKIMAGE_PROTOS_H
#define CLIB_DISKIMAGE_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/devs/diskimage/device/diskimage.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__)
AROS_LP2(LONG, MountImage,
         AROS_LPA(ULONG, unit_num, A0),
         AROS_LPA(CONST_STRPTR, filename, D0),
         LIBBASETYPEPTR, DiskImageBase, 7, DiskImage
);

#endif /* !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__) */

#if !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__)
AROS_LP3(LONG, UnitInfo,
         AROS_LPA(ULONG, unit_num, D0),
         AROS_LPA(STRPTR *, filename, A0),
         AROS_LPA(BOOL *, writeprotect, A1),
         LIBBASETYPEPTR, DiskImageBase, 8, DiskImage
);

#endif /* !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__) */

#if !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__)
AROS_LP2(LONG, WriteProtect,
         AROS_LPA(ULONG, unit_num, D0),
         AROS_LPA(BOOL, writeprotect, D1),
         LIBBASETYPEPTR, DiskImageBase, 9, DiskImage
);

#endif /* !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__) */

#if !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__)
AROS_LP2(LONG, UnitControlA,
         AROS_LPA(ULONG, unit_num, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, DiskImageBase, 10, DiskImage
);

#endif /* !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__) */

#if !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__)
AROS_LP0(LONG, ReloadPlugins,
         LIBBASETYPEPTR, DiskImageBase, 11, DiskImage
);

#endif /* !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__) */

#if !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__)
AROS_LP1(void, DoHookPlugins,
         AROS_LPA(struct Hook *, hook, A0),
         LIBBASETYPEPTR, DiskImageBase, 12, DiskImage
);

#endif /* !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__) */

#if !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__)
AROS_LP2(void, AddDiskChangeHook,
         AROS_LPA(struct Hook *, hook, A0),
         AROS_LPA(BOOL, add_or_remove, D0),
         LIBBASETYPEPTR, DiskImageBase, 13, DiskImage
);

#endif /* !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__) */

#if !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__)
AROS_LP2(void, AddReloadPluginsHook,
         AROS_LPA(struct Hook *, hook, A0),
         AROS_LPA(BOOL, add_or_remove, D0),
         LIBBASETYPEPTR, DiskImageBase, 14, DiskImage
);

#endif /* !defined(__DISKIMAGE_LIBAPI__) || (52 <= __DISKIMAGE_LIBAPI__) */

__END_DECLS

#endif /* CLIB_DISKIMAGE_PROTOS_H */
