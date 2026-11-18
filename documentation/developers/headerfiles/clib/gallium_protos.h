#ifndef CLIB_GALLIUM_PROTOS_H
#define CLIB_GALLIUM_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/gallium/gallium.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <utility/tagitem.h>
#include <graphics/rastport.h>
#include <intuition/intuition.h>
#include <gallium/gallium.h>

__BEGIN_DECLS


#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP1(PipeHandle_t, CreatePipe,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, GalliumBase, 5, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP1(void, DestroyPipe,
         AROS_LPA(PipeHandle_t, pipe, A0),
         LIBBASETYPEPTR, GalliumBase, 6, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP1(PipeScreen_t, CreatePipeScreen,
         AROS_LPA(PipeHandle_t, pipe, A0),
         LIBBASETYPEPTR, GalliumBase, 7, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP2(void, DestroyPipeScreen,
         AROS_LPA(PipeHandle_t, pipe, A0),
         AROS_LPA(PipeScreen_t, screen, A1),
         LIBBASETYPEPTR, GalliumBase, 8, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP9(void, BltPipeResourceRastPort,
         AROS_LPA(PipeHandle_t, pipe, A0),
         AROS_LPA(APTR, srcPipeResource, A1),
         AROS_LPA(LONG, xSrc, D0),
         AROS_LPA(LONG, ySrc, D1),
         AROS_LPA(struct RastPort *, destRP, A2),
         AROS_LPA(LONG, xDest, D2),
         AROS_LPA(LONG, yDest, D3),
         AROS_LPA(LONG, xSize, D4),
         AROS_LPA(LONG, ySize, D5),
         LIBBASETYPEPTR, GalliumBase, 9, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP3(APTR, CreateScanoutFrameBuffer,
         AROS_LPA(PipeHandle_t, pipe, A0),
         AROS_LPA(struct Window *, window, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, GalliumBase, 10, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP2(APTR, GetScanoutFrameBufferResource,
         AROS_LPA(APTR, fb, A0),
         AROS_LPA(ULONG, buffer, D0),
         LIBBASETYPEPTR, GalliumBase, 11, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP1(ULONG, SwapScanoutFrameBuffer,
         AROS_LPA(APTR, fb, A0),
         LIBBASETYPEPTR, GalliumBase, 12, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP1(void, DestroyScanoutFrameBuffer,
         AROS_LPA(APTR, fb, A0),
         LIBBASETYPEPTR, GalliumBase, 13, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP2(IPTR, GetScanoutFrameBufferAttr,
         AROS_LPA(APTR, fb, A0),
         AROS_LPA(ULONG, attr, D0),
         LIBBASETYPEPTR, GalliumBase, 14, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP1(APTR, FindScanoutFrameBuffer,
         AROS_LPA(struct Window *, window, A0),
         LIBBASETYPEPTR, GalliumBase, 15, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

#if !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__)
AROS_LP3(BOOL, SetScanoutFrameBufferAttr,
         AROS_LPA(APTR, fb, A0),
         AROS_LPA(ULONG, attr, D0),
         AROS_LPA(IPTR, value, D1),
         LIBBASETYPEPTR, GalliumBase, 16, Gallium
);

#endif /* !defined(__GALLIUM_LIBAPI__) || (26 <= __GALLIUM_LIBAPI__) */

__END_DECLS

#endif /* CLIB_GALLIUM_PROTOS_H */
