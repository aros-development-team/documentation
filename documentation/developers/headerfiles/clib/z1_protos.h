#ifndef CLIB_Z1_PROTOS_H
#define CLIB_Z1_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/z/z1.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <stdarg.h>
#include <zlib.h>

__BEGIN_DECLS


#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef zlibVersion
const char * zlibVersion();
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateInit_
int deflateInit_(z_streamp strm, int level, const char *version, int stream_size);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateInit2_
int deflateInit2_(z_streamp strm, int level, int method, int windowBits, int memLevel, int strategy, const char *version, int stream_size);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflate
int deflate(z_streamp strm, int flush);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateEnd
int deflateEnd(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateSetDictionary
int deflateSetDictionary(z_streamp strm, const Bytef *dictionary, uInt dictLength);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateCopy
int deflateCopy(z_streamp dest, z_streamp source);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateReset
int deflateReset(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateParams
int deflateParams(z_streamp strm, int level, int strategy);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateInit_
int inflateInit_(z_streamp strm, const char * version, int stream_size);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateInit2_
int inflateInit2_(z_streamp strm, int windowBits, const char * version, int stream_size);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflate
int inflate(z_streamp strm, int flush);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateEnd
int inflateEnd(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateSetDictionary
int inflateSetDictionary(z_streamp strm, const Bytef *dictionary, uInt dictLength);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateSync
int inflateSync(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateReset
int inflateReset(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef compress
int compress(Bytef * dest, uLongf * destLen, const Bytef *source, uLong sourceLen);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef compress2
int compress2(Bytef * dest, uLongf * destLen, const Bytef *source, uLong sourceLen, int level);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef uncompress
int uncompress(Bytef * dest, uLongf * destLen, const Bytef *source, uLong sourceLen);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef adler32
uLong adler32(uLong adler, const Bytef *buf, uInt len);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef crc32
uLong crc32(uLong crc, const Bytef *buf, uInt len);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef zError
const char * zError(int err);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateSyncPoint
int inflateSyncPoint(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef get_crc_table
const z_crc_t * get_crc_table();
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateCopy
int inflateCopy(z_streamp dest, z_streamp source);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateBackInit_
int inflateBackInit_(z_streamp strm, int windowBits, unsigned char * window, const char * version, int stream_size);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateBack
int inflateBack(z_streamp strm, in_func in, void * in_desc, out_func out, void * out_desc);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateBackEnd
int inflateBackEnd(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateBound
uLong deflateBound(z_streamp strm, uLong sourceLen);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflatePrime
int deflatePrime(z_streamp strm, int bits, int value);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef compressBound
uLong compressBound(uLong sourceLen);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef zlibCompileFlags
uLong zlibCompileFlags();
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateTune
int deflateTune(z_streamp strm, int good_length, int max_lazy, int nice_length, int max_chain);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateSetHeader
int deflateSetHeader(z_streamp strm, gz_headerp head);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflatePrime
int inflatePrime(z_streamp strm, int bits, int value);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateGetHeader
int inflateGetHeader(z_streamp strm, gz_headerp head);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef adler32_combine
uLong adler32_combine(uLong adler1, uLong adler2, z_off_t len2);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef crc32_combine
uLong crc32_combine(uLong crc1, uLong crc2, z_off_t len2);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateReset2
int inflateReset2(z_streamp strm, int windowBits);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateMark
long inflateMark(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef adler32_combine64
uLong adler32_combine64(uLong adler1, uLong adler2, z_off64_t len2);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef crc32_combine64
uLong crc32_combine64(uLong crc2, uLong d0arg, z_off64_t len2);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateUndermine
int inflateUndermine(z_streamp strm, int subvert);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzopen
gzFile gzopen(const char *path, const char *mode);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzclose
int gzclose(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzclose_r
int gzclose_r(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzclose_w
int gzclose_w(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzbuffer
int gzbuffer(gzFile file, unsigned size);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzclearerr
void gzclearerr(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzdirect
int gzdirect(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzeof
int gzeof(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzerror
const char * gzerror(gzFile file, int *errnum);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzflush
int gzflush(gzFile file, int flush);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzgetc_
int gzgetc_(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzgets
char * gzgets(gzFile file, char *buf, int len);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzoffset
z_off_t gzoffset(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzputc
int gzputc(gzFile file, int c);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzputs
int gzputs(gzFile file, const char *str);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzread
int gzread(gzFile file, voidp buf, unsigned len);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzrewind
int gzrewind(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzseek
z_off_t gzseek(gzFile file, z_off_t offset, int whence);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzsetparams
int gzsetparams(gzFile file, int level, int strategy);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gztell
z_off_t gztell(gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzungetc
int gzungetc(int c, gzFile file);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzvprintf
int gzvprintf(gzFile file, const char *format, va_list args);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzwrite
int gzwrite(gzFile file, voidpc buf, unsigned len);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef gzdopen
gzFile gzdopen(int fd, const char *mode);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateValidate
int inflateValidate(z_streamp strm, int check);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateCodesUsed
unsigned long inflateCodesUsed(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef inflateResetKeep
int inflateResetKeep(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef deflateResetKeep
int deflateResetKeep(z_streamp strm);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

#if !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__)
#ifndef uncompress2
int uncompress2(Bytef *dest, uLongf *destLen, const Bytef *source, uLong *sourceLen);
#endif

#endif /* !defined(__Z1_LIBAPI__) || (1 <= __Z1_LIBAPI__) */

__END_DECLS

#endif /* CLIB_Z1_PROTOS_H */
