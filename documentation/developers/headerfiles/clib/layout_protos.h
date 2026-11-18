#ifndef CLIB_LAYOUT_PROTOS_H
#define CLIB_LAYOUT_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/layout/layout.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <intuition/classes.h>
#include <intuition/gadgetclass.h>
#include <gadgets/layout.h>

/* varargs forms: stubs in libreaction.a */
__BEGIN_DECLS
ULONG SetPageGadgetAttrs(struct Gadget *gadget, Object *object, struct Window *window, struct Requester *requester, Tag tag1, ...);
__END_DECLS

__BEGIN_DECLS


#if !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__)
AROS_LP0(Class *, LAYOUT_GetClass,
         LIBBASETYPEPTR, LayoutBase, 5, Layout
);

#endif /* !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__) */

#if !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__)
AROS_LP4(BOOL, ActivateLayoutGadget,
         AROS_LPA(struct Gadget *, gadget, A0),
         AROS_LPA(struct Window *, window, A1),
         AROS_LPA(struct Requester *, requester, A2),
         AROS_LPA(ULONG, object, D0),
         LIBBASETYPEPTR, LayoutBase, 6, Layout
);

#endif /* !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__) */

#if !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__)
AROS_LP1(void, FlushLayoutDomainCache,
         AROS_LPA(struct Gadget *, gadget, A0),
         LIBBASETYPEPTR, LayoutBase, 7, Layout
);

#endif /* !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__) */

#if !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__)
AROS_LP4(BOOL, RethinkLayout,
         AROS_LPA(struct Gadget *, gadget, A0),
         AROS_LPA(struct Window *, window, A1),
         AROS_LPA(struct Requester *, requester, A2),
         AROS_LPA(BOOL, refresh, D0),
         LIBBASETYPEPTR, LayoutBase, 8, Layout
);

#endif /* !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__) */

#if !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__)
AROS_LP4(void, LayoutLimits,
         AROS_LPA(struct Gadget *, gadget, A0),
         AROS_LPA(struct LayoutLimits *, limits, A1),
         AROS_LPA(struct TextFont *, font, A2),
         AROS_LPA(struct Screen *, screen, A3),
         LIBBASETYPEPTR, LayoutBase, 9, Layout
);

#endif /* !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__) */

#if !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__)
AROS_LP0(Class *, PAGE_GetClass,
         LIBBASETYPEPTR, LayoutBase, 10, Layout
);

#endif /* !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__) */

#if !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__)
AROS_LP5(ULONG, SetPageGadgetAttrsA,
         AROS_LPA(struct Gadget *, gadget, A0),
         AROS_LPA(Object *, object, A1),
         AROS_LPA(struct Window *, window, A2),
         AROS_LPA(struct Requester *, requester, A3),
         AROS_LPA(struct TagItem *, tags, A4),
         LIBBASETYPEPTR, LayoutBase, 11, Layout
);

#endif /* !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__) */

#if !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__)
AROS_LP4(void, RefreshPageGadget,
         AROS_LPA(struct Gadget *, gadget, A0),
         AROS_LPA(Object *, object, A1),
         AROS_LPA(struct Window *, window, A2),
         AROS_LPA(struct Requester *, requester, A3),
         LIBBASETYPEPTR, LayoutBase, 12, Layout
);

#endif /* !defined(__LAYOUT_LIBAPI__) || (44 <= __LAYOUT_LIBAPI__) */

__END_DECLS

#endif /* CLIB_LAYOUT_PROTOS_H */
