#ifndef CLIB_OPENFIRMWARE_PROTOS_H
#define CLIB_OPENFIRMWARE_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/openfirmware/openfirmware.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <inttypes.h>
#include <utility/tagitem.h>

__BEGIN_DECLS


#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP1(void *, OF_OpenKey,
         AROS_LPA(char *, name, A0),
         LIBBASETYPEPTR, OpenFirmwareBase, 1, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP1(void, OF_CloseKey,
         AROS_LPA(void *, key, A0),
         LIBBASETYPEPTR, OpenFirmwareBase, 2, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP2(void *, OF_GetChild,
         AROS_LPA(void *, key, A0),
         AROS_LPA(void *, prev, A1),
         LIBBASETYPEPTR, OpenFirmwareBase, 3, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP2(void *, OF_FindProperty,
         AROS_LPA(void *, key, A0),
         AROS_LPA(char *, name, A1),
         LIBBASETYPEPTR, OpenFirmwareBase, 4, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP2(void *, OF_GetProperty,
         AROS_LPA(void *, key, A0),
         AROS_LPA(void *, prev, A1),
         LIBBASETYPEPTR, OpenFirmwareBase, 5, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP1(uint32_t, OF_GetPropLen,
         AROS_LPA(void *, prop, A0),
         LIBBASETYPEPTR, OpenFirmwareBase, 6, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP1(void *, OF_GetPropValue,
         AROS_LPA(void *, prop, A0),
         LIBBASETYPEPTR, OpenFirmwareBase, 7, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP1(char *, OF_GetPropName,
         AROS_LPA(void *, prop, A0),
         LIBBASETYPEPTR, OpenFirmwareBase, 8, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

#if !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__)
AROS_LP2(void *, OF_FindNodeByCompatible,
         AROS_LPA(void *, start, A0),
         AROS_LPA(char *, compatible, A1),
         LIBBASETYPEPTR, OpenFirmwareBase, 9, Openfirmware
);

#endif /* !defined(__OPENFIRMWARE_LIBAPI__) || (0 <= __OPENFIRMWARE_LIBAPI__) */

__END_DECLS

#endif /* CLIB_OPENFIRMWARE_PROTOS_H */
