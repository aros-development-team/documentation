#ifndef CLIB_IDENTIFY_PROTOS_H
#define CLIB_IDENTIFY_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/identify/identify.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <utility/tagitem.h>

__BEGIN_DECLS

LONG IdAlertTags(ULONG, Tag, ...) __stackparm;
ULONG IdEstimateFormatSizeTags(STRPTR, Tag, ...) __stackparm;
LONG IdExpansionTags(Tag, ...) __stackparm;
ULONG IdFormatStringTags(STRPTR, STRPTR, ULONG, Tag, ...) __stackparm;
LONG IdFunctionTags(STRPTR, LONG, Tag, ...) __stackparm;
CONST_STRPTR IdHardwareTags(ULONG, Tag, ...) __stackparm;
ULONG IdHardwareNumTags(ULONG, Tag, ...) __stackparm;

__END_DECLS

__BEGIN_DECLS


#if !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__)
AROS_LP1(LONG, IdExpansion,
         AROS_LPA(struct TagItem *, TagList, A0),
         LIBBASETYPEPTR, IdentifyBase, 5, Identify
);

#endif /* !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__) */

#if !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__)
AROS_LP2(CONST_STRPTR, IdHardware,
         AROS_LPA(ULONG, Type, D0),
         AROS_LPA(struct TagItem *, TagList, A0),
         LIBBASETYPEPTR, IdentifyBase, 6, Identify
);

#endif /* !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__) */

#if !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__)
AROS_LP2(LONG, IdAlert,
         AROS_LPA(ULONG, ID, D0),
         AROS_LPA(struct TagItem *, TagList, A0),
         LIBBASETYPEPTR, IdentifyBase, 7, Identify
);

#endif /* !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__) */

#if !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__)
AROS_LP3(LONG, IdFunction,
         AROS_LPA(STRPTR, LibName, A0),
         AROS_LPA(LONG, Offset, D0),
         AROS_LPA(struct TagItem *, TagList, A1),
         LIBBASETYPEPTR, IdentifyBase, 8, Identify
);

#endif /* !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__) */

#if !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__)
AROS_LP2(ULONG, IdHardwareNum,
         AROS_LPA(ULONG, Type, D0),
         AROS_LPA(struct TagItem *, TagList, A0),
         LIBBASETYPEPTR, IdentifyBase, 9, Identify
);

#endif /* !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__) */

#if !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__)
AROS_LP0(void, IdHardwareUpdate,
         LIBBASETYPEPTR, IdentifyBase, 10, Identify
);

#endif /* !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__) */

#if !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__)
AROS_LP4(ULONG, IdFormatString,
         AROS_LPA(STRPTR, String, A0),
         AROS_LPA(STRPTR, Buffer, A1),
         AROS_LPA(ULONG, Length, D0),
         AROS_LPA(struct TagItem *, Tags, A2),
         LIBBASETYPEPTR, IdentifyBase, 11, Identify
);

#endif /* !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__) */

#if !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__)
AROS_LP2(ULONG, IdEstimateFormatSize,
         AROS_LPA(STRPTR, String, A0),
         AROS_LPA(struct TagItem *, Tags, A1),
         LIBBASETYPEPTR, IdentifyBase, 12, Identify
);

#endif /* !defined(__IDENTIFY_LIBAPI__) || (37 <= __IDENTIFY_LIBAPI__) */

__END_DECLS

#endif /* CLIB_IDENTIFY_PROTOS_H */
