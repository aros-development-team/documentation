#ifndef CLIB_COOLIMAGES_PROTOS_H
#define CLIB_COOLIMAGES_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/coolimages/coolimages.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/coolimages.h>

__BEGIN_DECLS


#if !defined(__COOLIMAGES_LIBAPI__) || (1 <= __COOLIMAGES_LIBAPI__)
AROS_LP2(const struct CoolImage *, COOL_ObtainImageA,
         AROS_LPA(ULONG, imageid, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, CoolImagesBase, 5, CoolImages
);

#endif /* !defined(__COOLIMAGES_LIBAPI__) || (1 <= __COOLIMAGES_LIBAPI__) */

__END_DECLS

#endif /* CLIB_COOLIMAGES_PROTOS_H */
