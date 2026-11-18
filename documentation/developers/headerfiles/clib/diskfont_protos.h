#ifndef CLIB_DISKFONT_PROTOS_H
#define CLIB_DISKFONT_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/diskfont/diskfont.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <dos/dos.h>
#include <graphics/text.h>

__BEGIN_DECLS


#if !defined(__DISKFONT_LIBAPI__) || (0 <= __DISKFONT_LIBAPI__)
AROS_LP1(struct TextFont *, OpenDiskFont,
         AROS_LPA(struct TextAttr *, textAttr, A0),
         LIBBASETYPEPTR, DiskfontBase, 5, Diskfont
);

#endif /* !defined(__DISKFONT_LIBAPI__) || (0 <= __DISKFONT_LIBAPI__) */

#if !defined(__DISKFONT_LIBAPI__) || (0 <= __DISKFONT_LIBAPI__)
AROS_LP3(LONG, AvailFonts,
         AROS_LPA(STRPTR, buffer, A0),
         AROS_LPA(LONG, bufBytes, D0),
         AROS_LPA(LONG, flags, D1),
         LIBBASETYPEPTR, DiskfontBase, 6, Diskfont
);

#endif /* !defined(__DISKFONT_LIBAPI__) || (0 <= __DISKFONT_LIBAPI__) */

#if !defined(__DISKFONT_LIBAPI__) || (34 <= __DISKFONT_LIBAPI__)
AROS_LP2(struct FontContentsHeader *, NewFontContents,
         AROS_LPA(BPTR, fontsLock, A0),
         AROS_LPA(STRPTR, fontName, A1),
         LIBBASETYPEPTR, DiskfontBase, 7, Diskfont
);

#endif /* !defined(__DISKFONT_LIBAPI__) || (34 <= __DISKFONT_LIBAPI__) */

#if !defined(__DISKFONT_LIBAPI__) || (34 <= __DISKFONT_LIBAPI__)
AROS_LP1(void, DisposeFontContents,
         AROS_LPA(struct FontContentsHeader *, fontContentsHeader, A1),
         LIBBASETYPEPTR, DiskfontBase, 8, Diskfont
);

#endif /* !defined(__DISKFONT_LIBAPI__) || (34 <= __DISKFONT_LIBAPI__) */

#if !defined(__DISKFONT_LIBAPI__) || (36 <= __DISKFONT_LIBAPI__)
AROS_LP2(struct DiskFont *, NewScaledDiskFont,
         AROS_LPA(struct TextFont *, sourceFont, A0),
         AROS_LPA(struct TextAttr *, destTextAttr, A1),
         LIBBASETYPEPTR, DiskfontBase, 9, Diskfont
);

#endif /* !defined(__DISKFONT_LIBAPI__) || (36 <= __DISKFONT_LIBAPI__) */

__END_DECLS

#endif /* CLIB_DISKFONT_PROTOS_H */
