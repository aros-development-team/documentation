#ifndef CLIB_ENTROPY_PROTOS_H
#define CLIB_ENTROPY_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/entropy/entropy.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <resources/entropy.h>

__BEGIN_DECLS


#if !defined(__ENTROPY_LIBAPI__) || (1 <= __ENTROPY_LIBAPI__)
AROS_LP2(LONG, GetEntropy,
         AROS_LPA(APTR, buffer, A0),
         AROS_LPA(ULONG, length, D0),
         LIBBASETYPEPTR, EntropyBase, 1, Entropy
);

#endif /* !defined(__ENTROPY_LIBAPI__) || (1 <= __ENTROPY_LIBAPI__) */

#if !defined(__ENTROPY_LIBAPI__) || (1 <= __ENTROPY_LIBAPI__)
AROS_LP3(void, AddEntropy,
         AROS_LPA(CONST_APTR, data, A0),
         AROS_LPA(ULONG, length, D0),
         AROS_LPA(ULONG, bits, D1),
         LIBBASETYPEPTR, EntropyBase, 2, Entropy
);

#endif /* !defined(__ENTROPY_LIBAPI__) || (1 <= __ENTROPY_LIBAPI__) */

#if !defined(__ENTROPY_LIBAPI__) || (1 <= __ENTROPY_LIBAPI__)
AROS_LP0(ULONG, GetEntropyInfo,
         LIBBASETYPEPTR, EntropyBase, 3, Entropy
);

#endif /* !defined(__ENTROPY_LIBAPI__) || (1 <= __ENTROPY_LIBAPI__) */

__END_DECLS

#endif /* CLIB_ENTROPY_PROTOS_H */
