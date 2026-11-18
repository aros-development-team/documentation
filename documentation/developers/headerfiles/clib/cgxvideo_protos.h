#ifndef CLIB_CGXVIDEO_PROTOS_H
#define CLIB_CGXVIDEO_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/cgxvideo/cgxvideo.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <utility/tagitem.h>
#include <cybergraphx/cgxvideo.h>
#include <intuition/screens.h>
#include <intuition/intuition.h>

__BEGIN_DECLS


#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP2(struct VLayerHandle *, CreateVLayerHandleTagList,
         AROS_LPA(struct Screen *, Screen, A0),
         AROS_LPA(struct TagItem *, TagItems, A1),
         LIBBASETYPEPTR, CGXVideoBase, 5, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP1(void, DeleteVLayerHandle,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         LIBBASETYPEPTR, CGXVideoBase, 6, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP3(ULONG, AttachVLayerTagList,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         AROS_LPA(struct Window *, Window, A1),
         AROS_LPA(struct TagItem *, TagItems, A2),
         LIBBASETYPEPTR, CGXVideoBase, 7, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP1(ULONG, DetachVLayer,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         LIBBASETYPEPTR, CGXVideoBase, 8, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP2(IPTR, GetVLayerAttr,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         AROS_LPA(ULONG, AttrNum, D0),
         LIBBASETYPEPTR, CGXVideoBase, 9, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP1(ULONG, LockVLayer,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         LIBBASETYPEPTR, CGXVideoBase, 10, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP1(ULONG, UnlockVLayer,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         LIBBASETYPEPTR, CGXVideoBase, 11, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP2(void, SetVLayerAttrTagList,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         AROS_LPA(struct TagItem *, TagItems, A1),
         LIBBASETYPEPTR, CGXVideoBase, 12, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP1(void, SwapVLayerBuffer,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         LIBBASETYPEPTR, CGXVideoBase, 16, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP5(ULONG, WriteSPLine,
         AROS_LPA(struct VLayerHandle *, VLayerHandle, A0),
         AROS_LPA(UBYTE *, Buffer, A1),
         AROS_LPA(LONG, X, D0),
         AROS_LPA(LONG, Y, D1),
         AROS_LPA(LONG, Width, D2),
         LIBBASETYPEPTR, CGXVideoBase, 17, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

#if !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__)
AROS_LP2(ULONG, QueryVLayerAttr,
         AROS_LPA(struct Screen *, Screen, A0),
         AROS_LPA(ULONG, AttrID, D0),
         LIBBASETYPEPTR, CGXVideoBase, 18, Cgxvideo
);

#endif /* !defined(__CGXVIDEO_LIBAPI__) || (50 <= __CGXVIDEO_LIBAPI__) */

__END_DECLS

#endif /* CLIB_CGXVIDEO_PROTOS_H */
