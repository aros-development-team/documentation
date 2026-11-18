#ifndef CLIB_DOS64_PROTOS_H
#define CLIB_DOS64_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/dos64/dos64.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <dos/dos.h>
#include <dos/dosextens.h>
#include <dos/record.h>
#include <dos/dos64.h>
#include <utility/tagitem.h>

__BEGIN_DECLS


#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(QUAD, Seek64,
         AROS_LPA(BPTR, file, D1),
         AROS_LPA(LONG, mode, D2),
         AROS_LPA(QUAD, position, D3/D4),
         LIBBASETYPEPTR, DOS64Base, 5, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(QUAD, SetFileSize64,
         AROS_LPA(BPTR, file, D1),
         AROS_LPA(LONG, mode, D2),
         AROS_LPA(QUAD, offset, D3/D4),
         LIBBASETYPEPTR, DOS64Base, 6, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP1(QUAD, GetFilePosition64,
         AROS_LPA(BPTR, file, D1),
         LIBBASETYPEPTR, DOS64Base, 7, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP1(QUAD, GetFileSize64,
         AROS_LPA(BPTR, file, D1),
         LIBBASETYPEPTR, DOS64Base, 8, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(LONG, ChangeFilePosition64,
         AROS_LPA(BPTR, file, D1),
         AROS_LPA(LONG, mode, D2),
         AROS_LPA(QUAD, position, D3/D4),
         LIBBASETYPEPTR, DOS64Base, 9, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(LONG, ChangeFileSize64,
         AROS_LPA(BPTR, file, D1),
         AROS_LPA(LONG, mode, D2),
         AROS_LPA(QUAD, size, D3/D4),
         LIBBASETYPEPTR, DOS64Base, 10, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(QUAD, Read64,
         AROS_LPA(BPTR, file, D1),
         AROS_LPA(APTR, buffer, D2),
         AROS_LPA(QUAD, length, D3/D4),
         LIBBASETYPEPTR, DOS64Base, 11, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(QUAD, Write64,
         AROS_LPA(BPTR, file, D1),
         AROS_LPA(CONST_APTR, buffer, D2),
         AROS_LPA(QUAD, length, D3/D4),
         LIBBASETYPEPTR, DOS64Base, 12, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(LONG, Examine64,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(struct FileInfoBlock *, fib, D2),
         AROS_LPA(struct TagItem *, tags, D3),
         LIBBASETYPEPTR, DOS64Base, 13, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(LONG, ExNext64,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(struct FileInfoBlock *, fib, D2),
         AROS_LPA(struct TagItem *, tags, D3),
         LIBBASETYPEPTR, DOS64Base, 14, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(LONG, ExamineFH64,
         AROS_LPA(BPTR, fh, D1),
         AROS_LPA(struct FileInfoBlock *, fib, D2),
         AROS_LPA(struct TagItem *, tags, D3),
         LIBBASETYPEPTR, DOS64Base, 15, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP2(LONG, Info64,
         AROS_LPA(BPTR, lock, D1),
         AROS_LPA(struct InfoData64 *, parameterBlock, D2),
         LIBBASETYPEPTR, DOS64Base, 16, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP2(BOOL, LockRecord64,
         AROS_LPA(struct RecordLock64 *, rec, D1),
         AROS_LPA(ULONG, timeout, D2),
         LIBBASETYPEPTR, DOS64Base, 17, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP2(BOOL, LockRecords64,
         AROS_LPA(struct RecordLock64 *, recArray, D1),
         AROS_LPA(ULONG, timeout, D2),
         LIBBASETYPEPTR, DOS64Base, 18, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP1(BOOL, UnLockRecord64,
         AROS_LPA(struct RecordLock64 *, rec, D1),
         LIBBASETYPEPTR, DOS64Base, 19, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP1(BOOL, UnLockRecords64,
         AROS_LPA(struct RecordLock64 *, recArray, D1),
         LIBBASETYPEPTR, DOS64Base, 20, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP2(APTR, AllocDosObject64,
         AROS_LPA(ULONG, type, D1),
         AROS_LPA(const struct TagItem *, tags, D2),
         LIBBASETYPEPTR, DOS64Base, 21, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP2(void, FreeDosObject64,
         AROS_LPA(ULONG, type, D1),
         AROS_LPA(APTR, ptr, D2),
         LIBBASETYPEPTR, DOS64Base, 22, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP1(LONG, IsFileSystem64,
         AROS_LPA(BPTR, file, D1),
         LIBBASETYPEPTR, DOS64Base, 23, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

#if !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__)
AROS_LP3(LONG, ExamineName64,
         AROS_LPA(CONST_STRPTR, name, D1),
         AROS_LPA(struct FileInfoBlock *, fib, D2),
         AROS_LPA(struct TagItem *, tags, D3),
         LIBBASETYPEPTR, DOS64Base, 24, Dos64
);

#endif /* !defined(__DOS64_LIBAPI__) || (51 <= __DOS64_LIBAPI__) */

__END_DECLS

#endif /* CLIB_DOS64_PROTOS_H */
