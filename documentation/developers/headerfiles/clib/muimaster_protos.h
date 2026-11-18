#ifndef CLIB_MUIMASTER_PROTOS_H
#define CLIB_MUIMASTER_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/muimaster/muimaster.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


#ifndef INTUITION_CLASSES_H
#   include <intuition/classes.h>
#endif

#ifndef INTUITION_CLASSUSR_H
#   include <intuition/classusr.h>
#endif

#ifndef UTILITIY_TAGITEM_H
#   include <utility/tagitem.h>
#endif

#ifndef GRAPHICS_REGIONS_H
#   include <graphics/regions.h>
#endif

#include <aros/preprocessor/variadic/cast2iptr.hpp>

#ifndef MUIMasterBase
extern struct Library *MUIMasterBase;
#endif

# if defined(__GNUC__) && (defined(NO_INLINE_STDARG) || !defined(MUIMASTER_YES_INLINE_STDARG))
#  define MUI_Request(app, win, flags, title, gadgets, format, ...) \
({ \
    IPTR __args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) }; \
    MUI_RequestA((app), (win), (flags), (title), (gadgets), (format), __args); \
})
# endif

/* By default, disable the variadic stuff for zune, since it's not 
   very backward compatible */
#if !defined(MUIMASTER_YES_INLINE_STDARG)
#undef  MUIMASTER_NO_INLINE_STDARG
#define MUIMASTER_NO_INLINE_STDARG
#endif

/* Prototypes for stubs in mui.lib */

__BEGIN_DECLS

APTR 	MUI_AllocAslRequestTags(ULONG reqType, Tag tag1, ...) __stackparm;
BOOL 	MUI_AslRequestTags(APTR requester, Tag tag1, ...) __stackparm;
Object *MUI_MakeObject(LONG type, ...);
Object *MUI_NewObject(const char *classname, Tag tag1, ...) __stackparm;

__END_DECLS

/* Predeclaration of private structures */
struct MUI_RenderInfo;
struct MUI_PenSpec;


__BEGIN_DECLS


#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(Object*, MUI_NewObjectA,
         AROS_LPA(ClassID, classid, A0),
         AROS_LPA(struct TagItem*, tags, A1),
         LIBBASETYPEPTR, MUIMasterBase, 5, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP1(void, MUI_DisposeObject,
         AROS_LPA(Object*, obj, A0),
         LIBBASETYPEPTR, MUIMasterBase, 6, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP7(LONG, MUI_RequestA,
         AROS_LPA(APTR, app, D0),
         AROS_LPA(APTR, win, D1),
         AROS_LPA(LONGBITS, flags, D2),
         AROS_LPA(CONST_STRPTR, title, A0),
         AROS_LPA(CONST_STRPTR, gadgets, A1),
         AROS_LPA(CONST_STRPTR, format, A2),
         AROS_LPA(APTR, params, A3),
         LIBBASETYPEPTR, MUIMasterBase, 7, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(APTR, MUI_AllocAslRequest,
         AROS_LPA(ULONG, reqType, D0),
         AROS_LPA(struct TagItem*, tagList, A0),
         LIBBASETYPEPTR, MUIMasterBase, 8, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(BOOL, MUI_AslRequest,
         AROS_LPA(APTR, requester, A0),
         AROS_LPA(struct TagItem*, tagList, A1),
         LIBBASETYPEPTR, MUIMasterBase, 9, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP1(void, MUI_FreeAslRequest,
         AROS_LPA(APTR, requester, A0),
         LIBBASETYPEPTR, MUIMasterBase, 10, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP0(LONG, MUI_Error,
         LIBBASETYPEPTR, MUIMasterBase, 11, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP1(LONG, MUI_SetError,
         AROS_LPA(LONG, num, D0),
         LIBBASETYPEPTR, MUIMasterBase, 12, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP1(struct IClass*, MUI_GetClass,
         AROS_LPA(ClassID, classid, A0),
         LIBBASETYPEPTR, MUIMasterBase, 13, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP1(void, MUI_FreeClass,
         AROS_LPA(Class*, cl, A0),
         LIBBASETYPEPTR, MUIMasterBase, 14, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(void, MUI_RequestIDCMP,
         AROS_LPA(Object*, obj, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, MUIMasterBase, 15, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(void, MUI_RejectIDCMP,
         AROS_LPA(Object*, obj, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, MUIMasterBase, 16, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(void, MUI_Redraw,
         AROS_LPA(Object*, obj, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, MUIMasterBase, 17, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP5(struct MUI_CustomClass*, MUI_CreateCustomClass,
         AROS_LPA(struct Library*, base, A0),
         AROS_LPA(ClassID, supername, A1),
         AROS_LPA(struct MUI_CustomClass*, supermcc, A2),
         AROS_LPA(ULONG, datasize, D0),
         AROS_LPA(APTR, dispatcher, A3),
         LIBBASETYPEPTR, MUIMasterBase, 18, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP1(BOOL, MUI_DeleteCustomClass,
         AROS_LPA(struct MUI_CustomClass*, mcc, A0),
         LIBBASETYPEPTR, MUIMasterBase, 19, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(Object*, MUI_MakeObjectA,
         AROS_LPA(LONG, type, D0),
         AROS_LPA(IPTR*, params, A0),
         LIBBASETYPEPTR, MUIMasterBase, 20, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP6(BOOL, MUI_Layout,
         AROS_LPA(Object*, obj, A0),
         AROS_LPA(LONG, left, D0),
         AROS_LPA(LONG, top, D1),
         AROS_LPA(LONG, width, D2),
         AROS_LPA(LONG, height, D3),
         AROS_LPA(ULONG, flags, D4),
         LIBBASETYPEPTR, MUIMasterBase, 21, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP3(LONG, MUI_ObtainPen,
         AROS_LPA(struct MUI_RenderInfo*, mri, A0),
         AROS_LPA(struct MUI_PenSpec*, spec, A1),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, MUIMasterBase, 26, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(void, MUI_ReleasePen,
         AROS_LPA(struct MUI_RenderInfo*, mri, A0),
         AROS_LPA(LONG, pen, D0),
         LIBBASETYPEPTR, MUIMasterBase, 27, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP5(APTR, MUI_AddClipping,
         AROS_LPA(struct MUI_RenderInfo*, mri, A0),
         AROS_LPA(WORD, left, D0),
         AROS_LPA(WORD, top, D1),
         AROS_LPA(WORD, width, D2),
         AROS_LPA(WORD, height, D3),
         LIBBASETYPEPTR, MUIMasterBase, 28, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(void, MUI_RemoveClipping,
         AROS_LPA(struct MUI_RenderInfo*, mri, A0),
         AROS_LPA(APTR, handle, A1),
         LIBBASETYPEPTR, MUIMasterBase, 29, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(APTR, MUI_AddClipRegion,
         AROS_LPA(struct MUI_RenderInfo*, mri, A0),
         AROS_LPA(struct Region*, r, A1),
         LIBBASETYPEPTR, MUIMasterBase, 30, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(void, MUI_RemoveClipRegion,
         AROS_LPA(struct MUI_RenderInfo*, mri, A0),
         AROS_LPA(APTR, handle, A1),
         LIBBASETYPEPTR, MUIMasterBase, 31, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(BOOL, MUI_BeginRefresh,
         AROS_LPA(struct MUI_RenderInfo*, mri, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, MUIMasterBase, 32, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

#if !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__)
AROS_LP2(void, MUI_EndRefresh,
         AROS_LPA(struct MUI_RenderInfo*, mri, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, MUIMasterBase, 33, MUIMaster
);

#endif /* !defined(__MUIMASTER_LIBAPI__) || (19 <= __MUIMASTER_LIBAPI__) */

__END_DECLS

#endif /* CLIB_MUIMASTER_PROTOS_H */
