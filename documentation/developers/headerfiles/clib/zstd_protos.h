#ifndef CLIB_ZSTD_PROTOS_H
#define CLIB_ZSTD_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/zstd/zstd.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <stdarg.h>
#include <zstd.h>

__BEGIN_DECLS


#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_versionNumber
unsigned ZSTD_versionNumber(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_versionString
const char* ZSTD_versionString(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_compressStream
size_t ZSTD_compressStream(ZSTD_CStream* zcs, ZSTD_outBuffer* output, ZSTD_inBuffer* input);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_flushStream
size_t ZSTD_flushStream(ZSTD_CStream* zcs, ZSTD_outBuffer* output);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_endStream
size_t ZSTD_endStream(ZSTD_CStream* zcs, ZSTD_outBuffer* output);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_cParam_getBounds
ZSTD_bounds ZSTD_cParam_getBounds(ZSTD_cParameter cParam);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_CCtx_setParameter
size_t ZSTD_CCtx_setParameter(ZSTD_CCtx* cctx, ZSTD_cParameter param, int value);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_CCtx_setPledgedSrcSize
size_t ZSTD_CCtx_setPledgedSrcSize(ZSTD_CCtx* cctx, unsigned long long pledgedSrcSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_CCtx_reset
size_t ZSTD_CCtx_reset(ZSTD_CCtx* cctx, ZSTD_ResetDirective reset);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_compress2
size_t ZSTD_compress2(ZSTD_CCtx* cctx, void* dst, size_t dstCapacity, const void* src, size_t srcSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_dParam_getBounds
ZSTD_bounds ZSTD_dParam_getBounds(ZSTD_dParameter dParam);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_DCtx_setParameter
size_t ZSTD_DCtx_setParameter(ZSTD_DCtx* dctx, ZSTD_dParameter param, int value);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_DCtx_reset
size_t ZSTD_DCtx_reset(ZSTD_DCtx* dctx, ZSTD_ResetDirective reset);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_createCStream
ZSTD_CStream* ZSTD_createCStream(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_freeCStream
size_t ZSTD_freeCStream(ZSTD_CStream* zcs);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_compressStream2
size_t ZSTD_compressStream2(ZSTD_CCtx* cctx, ZSTD_outBuffer* output, ZSTD_inBuffer* input, ZSTD_EndDirective endOp);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_CStreamInSize
size_t ZSTD_CStreamInSize(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_CStreamOutSize
size_t ZSTD_CStreamOutSize(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_initCStream
size_t ZSTD_initCStream(ZSTD_CStream* zcs, int compressionLevel);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_CCtx_loadDictionary
size_t ZSTD_CCtx_loadDictionary(ZSTD_CCtx* cctx, const void* dict, size_t dictSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_CCtx_refCDict
size_t ZSTD_CCtx_refCDict(ZSTD_CCtx* cctx, const ZSTD_CDict* cdict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_CCtx_refPrefix
size_t ZSTD_CCtx_refPrefix(ZSTD_CCtx* cctx, const void* prefix, size_t prefixSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_DCtx_loadDictionary
size_t ZSTD_DCtx_loadDictionary(ZSTD_DCtx* dctx, const void* dict, size_t dictSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_DCtx_refDDict
size_t ZSTD_DCtx_refDDict(ZSTD_DCtx* dctx, const ZSTD_DDict* ddict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_DCtx_refPrefix
size_t ZSTD_DCtx_refPrefix(ZSTD_DCtx* dctx, const void* prefix, size_t prefixSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_createCDict
ZSTD_CDict* ZSTD_createCDict(const void* dictBuffer, size_t dictSize, int compressionLevel);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_freeCDict
size_t ZSTD_freeCDict(ZSTD_CDict* CDict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_compress_usingCDict
size_t ZSTD_compress_usingCDict(ZSTD_CCtx* cctx, void* dst, size_t dstCapacity, const void* src, size_t srcSize, const ZSTD_CDict* cdict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_createDDict
ZSTD_DDict* ZSTD_createDDict(const void* dictBuffer, size_t dictSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_freeDDict
size_t ZSTD_freeDDict(ZSTD_DDict* ddict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_decompress_usingDDict
size_t ZSTD_decompress_usingDDict(ZSTD_DCtx* dctx, void* dst, size_t dstCapacity, const void* src, size_t srcSize, const ZSTD_DDict* ddict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_getDictID_fromDict
unsigned ZSTD_getDictID_fromDict(const void* dict, size_t dictSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_getDictID_fromCDict
unsigned ZSTD_getDictID_fromCDict(const ZSTD_CDict* cdict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_getDictID_fromDDict
unsigned ZSTD_getDictID_fromDDict(const ZSTD_DDict* ddict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_getDictID_fromFrame
unsigned ZSTD_getDictID_fromFrame(const void* src, size_t srcSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_compress_usingDict
size_t ZSTD_compress_usingDict(ZSTD_CCtx* ctx, void* dst, size_t dstCapacity, const void* src, size_t srcSize, const void* dict, size_t dictSize, int compressionLevel);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_decompress_usingDict
size_t ZSTD_decompress_usingDict(ZSTD_DCtx* dctx, void* dst, size_t dstCapacity, const void* src, size_t srcSize, const void* dict, size_t dictSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_compress
size_t ZSTD_compress(void* dst, size_t dstCapacity, const void* src, size_t srcSize, int compressionLevel);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_decompress
size_t ZSTD_decompress(void* dst, size_t dstCapacity, const void* src, size_t compressedSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_getFrameContentSize
unsigned long long ZSTD_getFrameContentSize(const void *src, size_t srcSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_getDecompressedSize
unsigned long long ZSTD_getDecompressedSize(const void* src, size_t srcSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_findFrameCompressedSize
size_t ZSTD_findFrameCompressedSize(const void* src, size_t srcSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_compressBound
size_t ZSTD_compressBound(size_t srcSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_isError
unsigned ZSTD_isError(size_t result);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_getErrorCode
ZSTD_ErrorCode ZSTD_getErrorCode(size_t functionResult);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_getErrorName
const char* ZSTD_getErrorName(size_t result);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_minCLevel
int ZSTD_minCLevel(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_maxCLevel
int ZSTD_maxCLevel(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_defaultCLevel
int ZSTD_defaultCLevel(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_createCCtx
ZSTD_CCtx* ZSTD_createCCtx(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_freeCCtx
size_t ZSTD_freeCCtx(ZSTD_CCtx* cctx);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_compressCCtx
size_t ZSTD_compressCCtx(ZSTD_CCtx* cctx, void* dst, size_t dstCapacity, const void* src, size_t srcSize, int compressionLevel);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_createDCtx
ZSTD_DCtx* ZSTD_createDCtx(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_freeDCtx
size_t ZSTD_freeDCtx(ZSTD_DCtx* dctx);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_decompressDCtx
size_t ZSTD_decompressDCtx(ZSTD_DCtx* dctx, void* dst, size_t dstCapacity, const void* src, size_t srcSize);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_sizeof_CCtx
size_t ZSTD_sizeof_CCtx(const ZSTD_CCtx* cctx);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_sizeof_DCtx
size_t ZSTD_sizeof_DCtx(const ZSTD_DCtx* dctx);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_sizeof_CStream
size_t ZSTD_sizeof_CStream(const ZSTD_CStream* zcs);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_sizeof_DStream
size_t ZSTD_sizeof_DStream(const ZSTD_DStream* zds);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_sizeof_CDict
size_t ZSTD_sizeof_CDict(const ZSTD_CDict* cdict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_sizeof_DDict
size_t ZSTD_sizeof_DDict(const ZSTD_DDict* ddict);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_createDStream
ZSTD_DStream* ZSTD_createDStream(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_freeDStream
size_t ZSTD_freeDStream(ZSTD_DStream* zds);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_initDStream
size_t ZSTD_initDStream(ZSTD_DStream* zds);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_decompressStream
size_t ZSTD_decompressStream(ZSTD_DStream* zds, ZSTD_outBuffer* output, ZSTD_inBuffer* input);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_DStreamInSize
size_t ZSTD_DStreamInSize(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

#if !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__)
#ifndef ZSTD_DStreamOutSize
size_t ZSTD_DStreamOutSize(void);
#endif

#endif /* !defined(__ZSTD_LIBAPI__) || (1 <= __ZSTD_LIBAPI__) */

__END_DECLS

#endif /* CLIB_ZSTD_PROTOS_H */
