#ifndef CLIB_DECORTHEME_PROTOS_H
#define CLIB_DECORTHEME_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/decortheme/decortheme.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/decortheme.h>

__BEGIN_DECLS


#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP1(struct DecorTheme *, DTLoadTheme,
         AROS_LPA(STRPTR, path, A0),
         LIBBASETYPEPTR, DecorThemeBase, 6, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP1(void, DTFreeTheme,
         AROS_LPA(struct DecorTheme *, theme, A0),
         LIBBASETYPEPTR, DecorThemeBase, 7, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP1(struct DecorConfig *, DTGetConfig,
         AROS_LPA(struct DecorTheme *, theme, A0),
         LIBBASETYPEPTR, DecorThemeBase, 8, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP1(struct DecorImages *, DTGetImages,
         AROS_LPA(struct DecorTheme *, theme, A0),
         LIBBASETYPEPTR, DecorThemeBase, 9, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP2(struct DecoratorElement *, DTGetElement,
         AROS_LPA(struct DecorTheme *, theme, A0),
         AROS_LPA(ULONG, elemid, D0),
         LIBBASETYPEPTR, DecorThemeBase, 10, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP0(struct DecorImages *, DTNewDecorImages,
         LIBBASETYPEPTR, DecorThemeBase, 11, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP1(void, DTFreeImages,
         AROS_LPA(struct DecorImages *, di, A0),
         LIBBASETYPEPTR, DecorThemeBase, 12, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP3(struct DecorThemeScreen *, DTObtainScreenTheme,
         AROS_LPA(struct DecorTheme *, theme, A0),
         AROS_LPA(struct Screen *, scr, A1),
         AROS_LPA(BOOL, truecolor, D0),
         LIBBASETYPEPTR, DecorThemeBase, 13, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

#if !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__)
AROS_LP1(void, DTReleaseScreenTheme,
         AROS_LPA(struct DecorThemeScreen *, dts, A0),
         LIBBASETYPEPTR, DecorThemeBase, 14, Decortheme
);

#endif /* !defined(__DECORTHEME_LIBAPI__) || (1 <= __DECORTHEME_LIBAPI__) */

__END_DECLS

#endif /* CLIB_DECORTHEME_PROTOS_H */
