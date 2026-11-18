#ifndef CLIB_WORKBENCH_PROTOS_H
#define CLIB_WORKBENCH_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/workbench/workbench.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <workbench/workbench.h>
#include <dos/bptr.h>

/* Prototypes for stubs in amiga.lib */
struct AppIcon * AddAppIcon(IPTR id, IPTR userdata, CONST_STRPTR text, struct MsgPort * msgport, BPTR lock, struct DiskObject * diskobj, Tag tag1, ... ) __stackparm;
struct AppMenuItem * AddAppMenuItem(IPTR id, IPTR userdata, STRPTR text, struct MsgPort * msgport, Tag tag1, ... ) __stackparm;
struct AppWindow * AddAppWindow(IPTR id, IPTR userdata, struct Window * window, struct MsgPort * msgport, Tag tag1, ... ) __stackparm;
struct AppWindowDropZone * AddAppWindowDropZone( struct AppWindow * aw, IPTR id, IPTR userdata, Tag tag1, ... ) __stackparm;
BOOL CloseWorkbenchObject( STRPTR name, Tag tag1, ... ) __stackparm;
BOOL MakeWorkbenchObjectVisible( STRPTR name, Tag tag1, ... ) __stackparm;
BOOL OpenWorkbenchObject( STRPTR name, Tag tag1, ... ) __stackparm;
BOOL WorkbenchControl( STRPTR name, Tag tag1, ... ) __stackparm;

__BEGIN_DECLS


#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP3(BOOL, UpdateWorkbench,
         AROS_LPA(CONST_STRPTR, name, A0),
         AROS_LPA(BPTR, lock, A1),
         AROS_LPA(LONG, action, D0),
         LIBBASETYPEPTR, WorkbenchBase, 5, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP1(BOOL, QuoteWorkbench,
         AROS_LPA(ULONG, stringNum, D0),
         LIBBASETYPEPTR, WorkbenchBase, 6, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP2(BOOL, StartWorkbench,
         AROS_LPA(ULONG, flag, D0),
         AROS_LPA(APTR, ptr, D1),
         LIBBASETYPEPTR, WorkbenchBase, 7, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP5(struct AppWindow *, AddAppWindowA,
         AROS_LPA(IPTR, id, D0),
         AROS_LPA(IPTR, userdata, D1),
         AROS_LPA(struct Window *, window, A0),
         AROS_LPA(struct MsgPort *, msgport, A1),
         AROS_LPA(struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, WorkbenchBase, 8, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP1(BOOL, RemoveAppWindow,
         AROS_LPA(struct AppWindow *, appWindow, A0),
         LIBBASETYPEPTR, WorkbenchBase, 9, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP7(struct AppIcon *, AddAppIconA,
         AROS_LPA(IPTR, id, D0),
         AROS_LPA(IPTR, userdata, D1),
         AROS_LPA(const char *, text, A0),
         AROS_LPA(struct MsgPort *, msgport, A1),
         AROS_LPA(BPTR, lock, A2),
         AROS_LPA(struct DiskObject *, diskobj, A3),
         AROS_LPA(struct TagItem *, taglist, A4),
         LIBBASETYPEPTR, WorkbenchBase, 10, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP1(BOOL, RemoveAppIcon,
         AROS_LPA(struct AppIcon *, appIcon, A0),
         LIBBASETYPEPTR, WorkbenchBase, 11, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP5(struct AppMenuItem *, AddAppMenuItemA,
         AROS_LPA(IPTR, id, D0),
         AROS_LPA(IPTR, userdata, D1),
         AROS_LPA(APTR, text, A0),
         AROS_LPA(struct MsgPort *, msgport, A1),
         AROS_LPA(struct TagItem *, taglist, A3),
         LIBBASETYPEPTR, WorkbenchBase, 12, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__)
AROS_LP1(BOOL, RemoveAppMenuItem,
         AROS_LPA(struct AppMenuItem *, appMenuItem, A0),
         LIBBASETYPEPTR, WorkbenchBase, 13, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (36 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (39 <= __WORKBENCH_LIBAPI__)
AROS_LP2(BOOL, WBConfig,
         AROS_LPA(ULONG, unk1, D0),
         AROS_LPA(ULONG, unk2, D1),
         LIBBASETYPEPTR, WorkbenchBase, 14, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (39 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (39 <= __WORKBENCH_LIBAPI__)
AROS_LP3(BOOL, WBInfo,
         AROS_LPA(BPTR, lock, A0),
         AROS_LPA(CONST_STRPTR, name, A1),
         AROS_LPA(struct Screen *, screen, A2),
         LIBBASETYPEPTR, WorkbenchBase, 15, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (39 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__)
AROS_LP2(BOOL, OpenWorkbenchObjectA,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, WorkbenchBase, 16, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__)
AROS_LP2(BOOL, CloseWorkbenchObjectA,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, WorkbenchBase, 17, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__)
AROS_LP2(BOOL, WorkbenchControlA,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, WorkbenchBase, 18, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__)
AROS_LP4(struct AppWindowDropZone *, AddAppWindowDropZoneA,
         AROS_LPA(struct AppWindow *, aw, A0),
         AROS_LPA(IPTR, id, D0),
         AROS_LPA(IPTR, userdata, D1),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, WorkbenchBase, 19, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__)
AROS_LP2(BOOL, RemoveAppWindowDropZone,
         AROS_LPA(struct AppWindow *, aw, A0),
         AROS_LPA(struct AppWindowDropZone *, dropZone, A1),
         LIBBASETYPEPTR, WorkbenchBase, 20, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__)
AROS_LP3(BOOL, ChangeWorkbenchSelectionA,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(struct Hook *, hook, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, WorkbenchBase, 21, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__)
AROS_LP2(BOOL, MakeWorkbenchObjectVisibleA,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, WorkbenchBase, 22, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (44 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__)
AROS_LP1(BOOL, RegisterWorkbench,
         AROS_LPA(struct MsgPort *, messageport, A0),
         LIBBASETYPEPTR, WorkbenchBase, 23, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__)
AROS_LP1(BOOL, UnregisterWorkbench,
         AROS_LPA(struct MsgPort *, messageport, A0),
         LIBBASETYPEPTR, WorkbenchBase, 24, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__)
AROS_LP3(BOOL, UpdateWorkbenchObjectA,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(LONG, type, D1),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, WorkbenchBase, 25, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__)
AROS_LP8(BOOL, SendAppWindowMessage,
         AROS_LPA(struct Window *, win, A0),
         AROS_LPA(ULONG, numfiles, D0),
         AROS_LPA(char **, files, A1),
         AROS_LPA(UWORD, windowclass, D1),
         AROS_LPA(WORD, mousex, D2),
         AROS_LPA(WORD, mousey, D3),
         AROS_LPA(ULONG, seconds, D4),
         AROS_LPA(ULONG, micros, D5),
         LIBBASETYPEPTR, WorkbenchBase, 26, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__) */

#if !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__)
AROS_LP2(struct DiskObject *, GetNextAppIcon,
         AROS_LPA(struct DiskObject *, lastdiskobj, A0),
         AROS_LPA(char*, text, A1),
         LIBBASETYPEPTR, WorkbenchBase, 27, Workbench
);

#endif /* !defined(__WORKBENCH_LIBAPI__) || (45 <= __WORKBENCH_LIBAPI__) */

__END_DECLS

#endif /* CLIB_WORKBENCH_PROTOS_H */
