#ifndef CLIB_LISTBROWSER_PROTOS_H
#define CLIB_LISTBROWSER_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/listbrowser/listbrowser.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <intuition/classes.h>
#include <intuition/gadgetclass.h>
#include <gadgets/listbrowser.h>

/* varargs forms: stubs in libreaction.a */
__BEGIN_DECLS
struct Node *AllocListBrowserNode(UWORD columns, Tag tag1, ...);
void SetListBrowserNodeAttrs(struct Node *node, Tag tag1, ...);
void GetListBrowserNodeAttrs(struct Node *node, Tag tag1, ...);
struct ColumnInfo *AllocLBColumnInfo(UWORD columns, Tag tag1, ...);
LONG SetLBColumnInfoAttrs(struct ColumnInfo *colinfo, Tag tag1, ...);
LONG GetLBColumnInfoAttrs(struct ColumnInfo *colinfo, Tag tag1, ...);
__END_DECLS

__BEGIN_DECLS


#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP0(Class *, LISTBROWSER_GetClass,
         LIBBASETYPEPTR, ListBrowserBase, 5, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP2(struct Node *, AllocListBrowserNodeA,
         AROS_LPA(UWORD, columns, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ListBrowserBase, 6, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP1(void, FreeListBrowserNode,
         AROS_LPA(struct Node *, node, A0),
         LIBBASETYPEPTR, ListBrowserBase, 7, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP2(void, SetListBrowserNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ListBrowserBase, 8, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP2(void, GetListBrowserNodeAttrsA,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ListBrowserBase, 9, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP1(void, ListBrowserSelectAll,
         AROS_LPA(struct List *, list, A0),
         LIBBASETYPEPTR, ListBrowserBase, 10, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP2(void, ShowListBrowserNodeChildren,
         AROS_LPA(struct Node *, node, A0),
         AROS_LPA(WORD, depth, D0),
         LIBBASETYPEPTR, ListBrowserBase, 11, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP1(void, HideListBrowserNodeChildren,
         AROS_LPA(struct Node *, node, A0),
         LIBBASETYPEPTR, ListBrowserBase, 12, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP1(void, ShowAllListBrowserChildren,
         AROS_LPA(struct List *, list, A0),
         LIBBASETYPEPTR, ListBrowserBase, 13, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP1(void, HideAllListBrowserChildren,
         AROS_LPA(struct List *, list, A0),
         LIBBASETYPEPTR, ListBrowserBase, 14, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP1(void, FreeListBrowserList,
         AROS_LPA(struct List *, list, A0),
         LIBBASETYPEPTR, ListBrowserBase, 15, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP2(struct ColumnInfo *, AllocLBColumnInfoA,
         AROS_LPA(UWORD, columns, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ListBrowserBase, 16, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP2(LONG, SetLBColumnInfoAttrsA,
         AROS_LPA(struct ColumnInfo *, colinfo, A1),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ListBrowserBase, 17, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP2(LONG, GetLBColumnInfoAttrsA,
         AROS_LPA(struct ColumnInfo *, colinfo, A1),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ListBrowserBase, 18, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP1(void, FreeLBColumnInfo,
         AROS_LPA(struct ColumnInfo *, colinfo, A0),
         LIBBASETYPEPTR, ListBrowserBase, 19, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

#if !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__)
AROS_LP1(void, ListBrowserClearAll,
         AROS_LPA(struct List *, list, A0),
         LIBBASETYPEPTR, ListBrowserBase, 20, ListBrowser
);

#endif /* !defined(__LISTBROWSER_LIBAPI__) || (45 <= __LISTBROWSER_LIBAPI__) */

__END_DECLS

#endif /* CLIB_LISTBROWSER_PROTOS_H */
