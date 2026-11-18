#ifndef CLIB_CONSOLE_PROTOS_H
#define CLIB_CONSOLE_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/console/console.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/io.h>
#include <devices/keymap.h>
#include <utility/hooks.h>

__BEGIN_DECLS


#if !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__)
AROS_LP2(struct InputEvent*, CDInputHandler,
         AROS_LPA(struct InputEvent*, events, A0),
         AROS_LPA(APTR, consoleDevice, A1),
         LIBBASETYPEPTR, ConsoleDevice, 7, Console
);

#endif /* !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__) */

#if !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__)
AROS_LP4(LONG, RawKeyConvert,
         AROS_LPA(struct InputEvent*, events, A0),
         AROS_LPA(STRPTR, buffer, A1),
         AROS_LPA(LONG, length, D1),
         AROS_LPA(struct KeyMap*, keyMap, A2),
         LIBBASETYPEPTR, ConsoleDevice, 8, Console
);

#endif /* !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__) */

#if !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__)
AROS_LP0(APTR, GetConSnip,
         LIBBASETYPEPTR, ConsoleDevice, 9, Console
);

#endif /* !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__) */

#if !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__)
AROS_LP1(LONG, SetConSnip,
         AROS_LPA(APTR, param, A0),
         LIBBASETYPEPTR, ConsoleDevice, 10, Console
);

#endif /* !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__) */

#if !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__)
AROS_LP1(void, AddConSnipHook,
         AROS_LPA(struct Hook*, hook, A0),
         LIBBASETYPEPTR, ConsoleDevice, 11, Console
);

#endif /* !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__) */

#if !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__)
AROS_LP1(void, RemConSnipHook,
         AROS_LPA(struct Hook*, hook, A0),
         LIBBASETYPEPTR, ConsoleDevice, 12, Console
);

#endif /* !defined(__CONSOLE_LIBAPI__) || (41 <= __CONSOLE_LIBAPI__) */

__END_DECLS

#endif /* CLIB_CONSOLE_PROTOS_H */
