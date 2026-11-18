#ifndef CLIB_ASYNCIO_PROTOS_H
#define CLIB_ASYNCIO_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/asyncio/src/asyncio.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/asyncio.h>

__BEGIN_DECLS


#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP3(APTR, OpenAsync,
         AROS_LPA(const STRPTR, fileName, A0),
         AROS_LPA(OpenModes, mode, D0),
         AROS_LPA(LONG, bufferSize, D1),
         LIBBASETYPEPTR, AsyncIOBase, 5, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP3(APTR, OpenAsyncFromFH,
         AROS_LPA(BPTR, handle, A0),
         AROS_LPA(OpenModes, mode, D0),
         AROS_LPA(LONG, bufferSize, D1),
         LIBBASETYPEPTR, AsyncIOBase, 6, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP1(LONG, CloseAsync,
         AROS_LPA(AsyncFile *, file, A0),
         LIBBASETYPEPTR, AsyncIOBase, 7, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP3(LONG, SeekAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(LONG, position, D0),
         AROS_LPA(SeekModes, mode, D1),
         LIBBASETYPEPTR, AsyncIOBase, 8, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP3(LONG, ReadAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(APTR, buffer, A1),
         AROS_LPA(LONG, numBytes, D0),
         LIBBASETYPEPTR, AsyncIOBase, 9, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP3(LONG, WriteAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(APTR, buffer, A1),
         AROS_LPA(LONG, numBytes, D0),
         LIBBASETYPEPTR, AsyncIOBase, 10, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP1(LONG, ReadCharAsync,
         AROS_LPA(AsyncFile *, file, A0),
         LIBBASETYPEPTR, AsyncIOBase, 11, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP2(LONG, WriteCharAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(UBYTE, ch, D0),
         LIBBASETYPEPTR, AsyncIOBase, 12, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP3(LONG, ReadLineAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(APTR, buffer, A1),
         AROS_LPA(LONG, size, D0),
         LIBBASETYPEPTR, AsyncIOBase, 13, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP2(LONG, WriteLineAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(STRPTR, line, A1),
         LIBBASETYPEPTR, AsyncIOBase, 14, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP3(APTR, FGetsAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(APTR, buffer, A1),
         AROS_LPA(LONG, size, D0),
         LIBBASETYPEPTR, AsyncIOBase, 15, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP4(APTR, FGetsLenAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(APTR, buffer, A1),
         AROS_LPA(LONG, size, D0),
         AROS_LPA(LONG *, length, A2),
         LIBBASETYPEPTR, AsyncIOBase, 16, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

#if !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__)
AROS_LP3(LONG, PeekAsync,
         AROS_LPA(AsyncFile *, file, A0),
         AROS_LPA(APTR, buffer, A1),
         AROS_LPA(LONG, numBytes, D0),
         LIBBASETYPEPTR, AsyncIOBase, 17, Asyncio
);

#endif /* !defined(__ASYNCIO_LIBAPI__) || (40 <= __ASYNCIO_LIBAPI__) */

__END_DECLS

#endif /* CLIB_ASYNCIO_PROTOS_H */
