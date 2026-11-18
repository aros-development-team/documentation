#ifndef CLIB_NVDISK_PROTOS_H
#define CLIB_NVDISK_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/nonvolatile/nvdisk/nvdisk.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/nonvolatile.h>

__BEGIN_DECLS


#if !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__)
AROS_LP2(APTR, ReadNVDData,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(STRPTR, itemName, A1),
         LIBBASETYPEPTR, nvdBase, 5, NVDisk
);

#endif /* !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__) */

#if !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__)
AROS_LP4(LONG, WriteNVDData,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(STRPTR, itemName, A1),
         AROS_LPA(APTR, data, A2),
         AROS_LPA(LONG, length, A3),
         LIBBASETYPEPTR, nvdBase, 6, NVDisk
);

#endif /* !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__) */

#if !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__)
AROS_LP2(BOOL, DeleteNVDData,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(STRPTR, itemName, A1),
         LIBBASETYPEPTR, nvdBase, 7, NVDisk
);

#endif /* !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__) */

#if !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__)
AROS_LP1(BOOL, MemInfoNVD,
         AROS_LPA(struct NVInfo *, nvInfo, A0),
         LIBBASETYPEPTR, nvdBase, 8, NVDisk
);

#endif /* !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__) */

#if !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__)
AROS_LP3(BOOL, SetNVDProtection,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(STRPTR, itemName, A1),
         AROS_LPA(LONG, mask, D0),
         LIBBASETYPEPTR, nvdBase, 9, NVDisk
);

#endif /* !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__) */

#if !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__)
AROS_LP1(struct MinList *, GetNVDItemList,
         AROS_LPA(STRPTR, appName, A0),
         LIBBASETYPEPTR, nvdBase, 10, NVDisk
);

#endif /* !defined(__NVDISK_LIBAPI__) || (42 <= __NVDISK_LIBAPI__) */

__END_DECLS

#endif /* CLIB_NVDISK_PROTOS_H */
