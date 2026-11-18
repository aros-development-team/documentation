#ifndef CLIB_BZ2_PROTOS_H
#define CLIB_BZ2_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/external/bz2/bz2.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <bzlib.h>
#include <stdio.h> /* For FILE */

__BEGIN_DECLS


#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP0(const char *, BZ2_bzlibVersion,
         LIBBASETYPEPTR, BZ2Base, 5, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP4(int, BZ2_bzCompressInit,
         AROS_LPA(bz_stream *, strm, A0),
         AROS_LPA(int, blockSize100k, D0),
         AROS_LPA(int, verbosity, D1),
         AROS_LPA(int, workFactor, D2),
         LIBBASETYPEPTR, BZ2Base, 6, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP2(int, BZ2_bzCompress,
         AROS_LPA(bz_stream *, strm, A0),
         AROS_LPA(int, action, D0),
         LIBBASETYPEPTR, BZ2Base, 7, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP1(int, BZ2_bzCompressEnd,
         AROS_LPA(bz_stream *, strm, A0),
         LIBBASETYPEPTR, BZ2Base, 8, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP3(int, BZ2_bzDecompressInit,
         AROS_LPA(bz_stream *, strm, A0),
         AROS_LPA(int, verbosity, D0),
         AROS_LPA(int, small, D1),
         LIBBASETYPEPTR, BZ2Base, 9, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP1(int, BZ2_bzDecompress,
         AROS_LPA(bz_stream *, strm, A0),
         LIBBASETYPEPTR, BZ2Base, 10, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP1(int, BZ2_bzDecompressEnd,
         AROS_LPA(bz_stream *, strm, A0),
         LIBBASETYPEPTR, BZ2Base, 11, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP7(int, BZ2_bzBuffToBuffCompress,
         AROS_LPA(char *, dest, A0),
         AROS_LPA(unsigned int *, destLen, A1),
         AROS_LPA(char *, source, A2),
         AROS_LPA(unsigned int, sourceLen, D0),
         AROS_LPA(int, blockSize100k, D1),
         AROS_LPA(int, verbosity, D2),
         AROS_LPA(int, workFactor, D3),
         LIBBASETYPEPTR, BZ2Base, 12, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP6(int, BZ2_bzBuffToBuffDecompress,
         AROS_LPA(char *, dest, A0),
         AROS_LPA(unsigned int *, destLen, A1),
         AROS_LPA(char *, source, A2),
         AROS_LPA(unsigned int, sourceLen, D0),
         AROS_LPA(int, small, D1),
         AROS_LPA(int, verbosity, D2),
         LIBBASETYPEPTR, BZ2Base, 13, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
#ifndef BZ2_bzCompressInit_SYSV
int BZ2_bzCompressInit_SYSV(bz_stream *strm, int blockSize100k, int verbosity, int workFactor);
#endif

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
#ifndef BZ2_bzCompress_SYSV
int BZ2_bzCompress_SYSV(bz_stream *strm, int action);
#endif

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
#ifndef BZ2_bzCompressEnd_SYSV
int BZ2_bzCompressEnd_SYSV(bz_stream *strm);
#endif

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
#ifndef BZ2_bzDecompressInit_SYSV
int BZ2_bzDecompressInit_SYSV(bz_stream *strm, int verbosity, int small);
#endif

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
#ifndef BZ2_bzDecompress_SYSV
int BZ2_bzDecompress_SYSV(bz_stream *strm);
#endif

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
#ifndef BZ2_bzDecompressEnd_SYSV
int BZ2_bzDecompressEnd_SYSV(bz_stream *strm);
#endif

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
#ifndef BZ2_bzBuffToBuffCompress_SYSV
int BZ2_bzBuffToBuffCompress_SYSV(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int blockSize100k, int verbosity, int workFactor);
#endif

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
#ifndef BZ2_bzBuffToBuffDecompress_SYSV
int BZ2_bzBuffToBuffDecompress_SYSV(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int small, int verbosity);
#endif

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP6(BZFILE *, BZ2_bzReadOpen,
         AROS_LPA(int*, bzerror, A0),
         AROS_LPA(FILE*, f, A1),
         AROS_LPA(int, verbosity, D0),
         AROS_LPA(int, small, D1),
         AROS_LPA(void *, unused, A2),
         AROS_LPA(int, nUnused, D2),
         LIBBASETYPEPTR, BZ2Base, 30, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP2(void, BZ2_bzReadClose,
         AROS_LPA(int *, bzerror, A0),
         AROS_LPA(BZFILE*, b, A1),
         LIBBASETYPEPTR, BZ2Base, 31, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP4(void, BZ2_bzReadGetUnused,
         AROS_LPA(int *, bzerror, A0),
         AROS_LPA(BZFILE *, b, A1),
         AROS_LPA(void **, unused, A2),
         AROS_LPA(int *, nUnused, A3),
         LIBBASETYPEPTR, BZ2Base, 32, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP4(int, BZ2_bzRead,
         AROS_LPA(int *, bzerror, A0),
         AROS_LPA(BZFILE*, b, A1),
         AROS_LPA(void *, buf, A2),
         AROS_LPA(int, len, D0),
         LIBBASETYPEPTR, BZ2Base, 33, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP5(BZFILE *, BZ2_bzWriteOpen,
         AROS_LPA(int *, bzerror, A0),
         AROS_LPA(FILE *, f, A1),
         AROS_LPA(int, blockSize100k, D0),
         AROS_LPA(int, verbosity, D1),
         AROS_LPA(int, workFactor, D2),
         LIBBASETYPEPTR, BZ2Base, 34, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP4(void, BZ2_bzWrite,
         AROS_LPA(int *, bzerror, A0),
         AROS_LPA(BZFILE*, b, A1),
         AROS_LPA(void *, buf, A2),
         AROS_LPA(int, len, D0),
         LIBBASETYPEPTR, BZ2Base, 35, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP5(void, BZ2_bzWriteClose,
         AROS_LPA(int *, bzerror, A0),
         AROS_LPA(BZFILE *, b, A1),
         AROS_LPA(int, abandon, D0),
         AROS_LPA(unsigned int *, nbytes_in, A2),
         AROS_LPA(unsigned int *, nbytes_out, A3),
         LIBBASETYPEPTR, BZ2Base, 36, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

#if !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__)
AROS_LP7(void, BZ2_bzWriteClose64,
         AROS_LPA(int *, bzerror, A0),
         AROS_LPA(BZFILE *, b, A1),
         AROS_LPA(int, abandon, D0),
         AROS_LPA(unsigned int *, nbytes_in_lo32, A2),
         AROS_LPA(unsigned int *, nbytes_in_hi32, A3),
         AROS_LPA(unsigned int *, nbytes_out_lo32, A4),
         AROS_LPA(unsigned int *, nbytes_out_hi32, D1),
         LIBBASETYPEPTR, BZ2Base, 37, BZ2
);

#endif /* !defined(__BZ2_LIBAPI__) || (2 <= __BZ2_LIBAPI__) */

__END_DECLS

#endif /* CLIB_BZ2_PROTOS_H */
