#ifndef CLIB_CHOOSER_PROTOS_H
#define CLIB_CHOOSER_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/chooser/chooser.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <intuition/classes.h>
#include <intuition/gadgetclass.h>
#include <gadgets/chooser.h>

/* varargs forms: stubs in libreaction.a */
__BEGIN_DECLS
struct Node *AllocChooserNode(Tag tag1, ...);
void SetChooserNodeAttrs(struct Node *node, Tag tag1, ...);
void GetChooserNodeAttrs(struct Node *node, Tag tag1, ...);
__END_DECLS

__BEGIN_DECLS


#if !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__)
AROS_LP0(Class *, CHOOSER_GetClass,
         LIBBASETYPEPTR, ChooserBase, 5, Chooser
);

#endif /* !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__) */

#if !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__)
AROS_LP1(struct Node *, AllocChooserNodeA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ChooserBase, 6, Chooser
);

#endif /* !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__) */

#if !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__)
AROS_LP1(void, FreeChooserNode,
         AROS_LPA(struct Node *, node, A0),
         LIBBASETYPEPTR, ChooserBase, 7, Chooser
);

#endif /* !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__) */

#if !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__)
AROS_LP2(void, SetChooserNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ChooserBase, 8, Chooser
);

#endif /* !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__) */

#if !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__)
AROS_LP2(void, GetChooserNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ChooserBase, 9, Chooser
);

#endif /* !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__) */

#if !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__)
AROS_LP4(BOOL, ShowChooser,
         AROS_LPA(Object *, o, A0),
         AROS_LPA(struct Window *, w, A1),
         AROS_LPA(ULONG, xpos, D0),
         AROS_LPA(ULONG, ypos, D1),
         LIBBASETYPEPTR, ChooserBase, 10, Chooser
);

#endif /* !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__) */

#if !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__)
AROS_LP2(void, HideChooser,
         AROS_LPA(Object *, o, A0),
         AROS_LPA(struct Window *, w, A1),
         LIBBASETYPEPTR, ChooserBase, 11, Chooser
);

#endif /* !defined(__CHOOSER_LIBAPI__) || (45 <= __CHOOSER_LIBAPI__) */

__END_DECLS

#endif /* CLIB_CHOOSER_PROTOS_H */
