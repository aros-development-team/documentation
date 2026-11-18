#ifndef CLIB_BOOTLOADER_PROTOS_H
#define CLIB_BOOTLOADER_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/bootloader/bootloader.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__BOOTLOADER_LIBAPI__) || (41 <= __BOOTLOADER_LIBAPI__)
AROS_LP1(APTR, GetBootInfo,
         AROS_LPA(ULONG, infoType, D0),
         LIBBASETYPEPTR, BootLoaderBase, 1, Bootloader
);

#endif /* !defined(__BOOTLOADER_LIBAPI__) || (41 <= __BOOTLOADER_LIBAPI__) */

__END_DECLS

#endif /* CLIB_BOOTLOADER_PROTOS_H */
