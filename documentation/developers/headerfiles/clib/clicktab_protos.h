#ifndef CLIB_CLICKTAB_PROTOS_H
#define CLIB_CLICKTAB_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/clicktab/clicktab.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <intuition/classes.h>
#include <intuition/gadgetclass.h>
#include <gadgets/clicktab.h>

/* varargs forms: stubs in libreaction.a */
__BEGIN_DECLS
struct Node *AllocClickTabNode(Tag tag1, ...);
void SetClickTabNodeAttrs(struct Node *node, Tag tag1, ...);
void GetClickTabNodeAttrs(struct Node *node, Tag tag1, ...);
__END_DECLS

__BEGIN_DECLS


#if !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__)
AROS_LP0(Class *, CLICKTAB_GetClass,
         LIBBASETYPEPTR, ClickTabBase, 5, ClickTab
);

#endif /* !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__) */

#if !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__)
AROS_LP1(struct Node *, AllocClickTabNodeA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ClickTabBase, 6, ClickTab
);

#endif /* !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__) */

#if !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__)
AROS_LP1(void, FreeClickTabNode,
         AROS_LPA(struct Node *, node, A0),
         LIBBASETYPEPTR, ClickTabBase, 7, ClickTab
);

#endif /* !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__) */

#if !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__)
AROS_LP2(void, SetClickTabNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ClickTabBase, 8, ClickTab
);

#endif /* !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__) */

#if !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__)
AROS_LP2(void, GetClickTabNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ClickTabBase, 9, ClickTab
);

#endif /* !defined(__CLICKTAB_LIBAPI__) || (47 <= __CLICKTAB_LIBAPI__) */

__END_DECLS

#endif /* CLIB_CLICKTAB_PROTOS_H */
