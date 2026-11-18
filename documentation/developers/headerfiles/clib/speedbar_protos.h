#ifndef CLIB_SPEEDBAR_PROTOS_H
#define CLIB_SPEEDBAR_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/speedbar/speedbar.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <intuition/classes.h>
#include <intuition/gadgetclass.h>
#include <gadgets/speedbar.h>

/* varargs forms: stubs in libreaction.a */
__BEGIN_DECLS
struct Node *AllocSpeedButtonNode(UWORD number, Tag tag1, ...);
void SetSpeedButtonNodeAttrs(struct Node *node, Tag tag1, ...);
void GetSpeedButtonNodeAttrs(struct Node *node, Tag tag1, ...);
__END_DECLS

__BEGIN_DECLS


#if !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__)
AROS_LP0(Class *, SPEEDBAR_GetClass,
         LIBBASETYPEPTR, SpeedBarBase, 5, SpeedBar
);

#endif /* !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__) */

#if !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__)
AROS_LP2(struct Node *, AllocSpeedButtonNodeA,
         AROS_LPA(UWORD, number, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, SpeedBarBase, 6, SpeedBar
);

#endif /* !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__) */

#if !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__)
AROS_LP1(void, FreeSpeedButtonNode,
         AROS_LPA(struct Node *, node, A0),
         LIBBASETYPEPTR, SpeedBarBase, 7, SpeedBar
);

#endif /* !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__) */

#if !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__)
AROS_LP2(void, SetSpeedButtonNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, SpeedBarBase, 8, SpeedBar
);

#endif /* !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__) */

#if !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__)
AROS_LP2(void, GetSpeedButtonNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, SpeedBarBase, 9, SpeedBar
);

#endif /* !defined(__SPEEDBAR_LIBAPI__) || (44 <= __SPEEDBAR_LIBAPI__) */

__END_DECLS

#endif /* CLIB_SPEEDBAR_PROTOS_H */
