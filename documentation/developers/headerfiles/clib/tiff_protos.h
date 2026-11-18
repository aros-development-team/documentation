#ifndef CLIB_TIFF_PROTOS_H
#define CLIB_TIFF_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/tiff/tiff.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

# include <sys/types.h>
#include <tifftypes.h>

__BEGIN_DECLS

void TIFFError(const char*, const char*, ...) __stackparm;
void TIFFErrorExt(thandle_t, const char*, const char*, ...) __stackparm;
void TIFFWarning(const char*, const char*, ...) __stackparm;
void TIFFWarningExt(thandle_t, const char*, const char*, ...) __stackparm;

__END_DECLS


__BEGIN_DECLS


#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetVersion
const char* TIFFGetVersion(void);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFindCODEC
const TIFFCodec* TIFFFindCODEC(uint16_t scheme);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRegisterCODEC
TIFFCodec* TIFFRegisterCODEC(uint16_t scheme, const char* name, TIFFInitMethod init);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFUnRegisterCODEC
void TIFFUnRegisterCODEC(TIFFCodec* c);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFIsCODECConfigured
int TIFFIsCODECConfigured(uint16_t scheme);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetConfiguredCODECs
TIFFCodec* TIFFGetConfiguredCODECs(void);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetTagListCount
int TIFFGetTagListCount(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetTagListEntry
uint32_t TIFFGetTagListEntry(TIFF *tif, int tag_index);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFindField
const TIFFField* TIFFFindField(TIFF *tif, uint32_t tag, TIFFDataType dt);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldWithTag
const TIFFField* TIFFFieldWithTag(TIFF *tif, uint32_t tag);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldWithName
const TIFFField* TIFFFieldWithName(TIFF *tif, const char *name);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldTag
uint32_t TIFFFieldTag(const TIFFField* fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldName
const char* TIFFFieldName(const TIFFField* fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldDataType
TIFFDataType TIFFFieldDataType(const TIFFField* fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldPassCount
int TIFFFieldPassCount(const TIFFField* fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldReadCount
int TIFFFieldReadCount(const TIFFField* fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldWriteCount
int TIFFFieldWriteCount(const TIFFField* fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldSetGetSize
int TIFFFieldSetGetSize(const TIFFField* fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldSetGetCountSize
int TIFFFieldSetGetCountSize(const TIFFField* fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFieldIsAnonymous
int TIFFFieldIsAnonymous(const TIFFField *fip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFAccessTagMethods
TIFFTagMethods * TIFFAccessTagMethods(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetClientInfo
void * TIFFGetClientInfo(TIFF *tif, const char *name);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetClientInfo
void TIFFSetClientInfo(TIFF *tif, void *data, const char *name);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCleanup
void TIFFCleanup(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFClose
void TIFFClose(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFlush
int TIFFFlush(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFlushData
int TIFFFlushData(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFVGetField
int TIFFVGetField(TIFF* tif, uint32_t tag, va_list ap);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFVGetFieldDefaulted
int TIFFVGetFieldDefaulted(TIFF* tif, uint32_t tag, va_list ap);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadDirectory
int TIFFReadDirectory(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadCustomDirectory
int TIFFReadCustomDirectory(TIFF* tif, toff_t diroff, const TIFFFieldArray* infoarray);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadEXIFDirectory
int TIFFReadEXIFDirectory(TIFF* tif, toff_t diroff);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadGPSDirectory
int TIFFReadGPSDirectory(TIFF* tif, toff_t diroff);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFScanlineSize64
uint64_t TIFFScanlineSize64(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFScanlineSize
tmsize_t TIFFScanlineSize(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRasterScanlineSize64
uint64_t TIFFRasterScanlineSize64(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRasterScanlineSize
tmsize_t TIFFRasterScanlineSize(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFStripSize64
uint64_t TIFFStripSize64(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFStripSize
tmsize_t TIFFStripSize(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRawStripSize64
uint64_t TIFFRawStripSize64(TIFF* tif, uint32_t strip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRawStripSize
tmsize_t TIFFRawStripSize(TIFF* tif, uint32_t strip);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFVStripSize64
uint64_t TIFFVStripSize64(TIFF* tif, uint32_t nrows);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFVStripSize
tmsize_t TIFFVStripSize(TIFF* tif, uint32_t nrows);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFTileRowSize64
uint64_t TIFFTileRowSize64(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFTileRowSize
tmsize_t TIFFTileRowSize(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFTileSize64
uint64_t TIFFTileSize64(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFTileSize
tmsize_t TIFFTileSize(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFVTileSize64
uint64_t TIFFVTileSize64(TIFF* tif, uint32_t nrows);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFVTileSize
tmsize_t TIFFVTileSize(TIFF* tif, uint32_t nrows);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFDefaultStripSize
uint32_t TIFFDefaultStripSize(TIFF* tif, uint32_t request);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFDefaultTileSize
void TIFFDefaultTileSize(TIFF *tif, uint32_t *tw, uint32_t *th);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFClientdata
thandle_t TIFFClientdata(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetClientdata
thandle_t TIFFSetClientdata(TIFF *tif, thandle_t newvalue);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetMode
int TIFFGetMode(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetMode
int TIFFSetMode(TIFF *tif, int mode);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFIsTiled
int TIFFIsTiled(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFIsByteSwapped
int TIFFIsByteSwapped(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFIsUpSampled
int TIFFIsUpSampled(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFIsMSB2LSB
int TIFFIsMSB2LSB(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFIsBigEndian
int TIFFIsBigEndian(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFIsBigTIFF
int TIFFIsBigTIFF(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetReadProc
TIFFReadWriteProc TIFFGetReadProc(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetWriteProc
TIFFReadWriteProc TIFFGetWriteProc(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetSeekProc
TIFFSeekProc TIFFGetSeekProc(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetCloseProc
TIFFCloseProc TIFFGetCloseProc(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetSizeProc
TIFFSizeProc TIFFGetSizeProc(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetMapFileProc
TIFFMapFileProc TIFFGetMapFileProc(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetUnmapFileProc
TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCurrentRow
uint32_t TIFFCurrentRow(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCurrentDirectory
uint16_t TIFFCurrentDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFNumberOfDirectories
uint16_t TIFFNumberOfDirectories(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCurrentDirOffset
uint64_t TIFFCurrentDirOffset(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCurrentStrip
uint32_t TIFFCurrentStrip(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCurrentTile
uint32_t TIFFCurrentTile(TIFF* tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadBufferSetup
int TIFFReadBufferSetup(TIFF* tif, void* bp, tmsize_t size);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteBufferSetup
int TIFFWriteBufferSetup(TIFF* tif, void* bp, tmsize_t size);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetupStrips
int TIFFSetupStrips(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteCheck
int TIFFWriteCheck(TIFF *tif, int tiles, const char *module);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFreeDirectory
void TIFFFreeDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCreateDirectory
int TIFFCreateDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCreateCustomDirectory
int TIFFCreateCustomDirectory(TIFF *tif, const TIFFFieldArray *infoarray);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCreateEXIFDirectory
int TIFFCreateEXIFDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCreateGPSDirectory
int TIFFCreateGPSDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFLastDirectory
int TIFFLastDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetDirectory
int TIFFSetDirectory(TIFF *tif, uint16_t dirn);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetSubDirectory
int TIFFSetSubDirectory(TIFF *tif, uint64_t diroff);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFUnlinkDirectory
int TIFFUnlinkDirectory(TIFF *tif, uint16_t dirn);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFVSetField
int TIFFVSetField(TIFF *tif, uint32_t tag, va_list ap);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFUnsetField
int TIFFUnsetField(TIFF *tif, uint32_t tag);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteDirectory
int TIFFWriteDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteCustomDirectory
int TIFFWriteCustomDirectory(TIFF *tif, uint64_t *pdiroff);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCheckpointDirectory
int TIFFCheckpointDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRewriteDirectory
int TIFFRewriteDirectory(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFDeferStrileArrayWriting
int TIFFDeferStrileArrayWriting(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFForceStrileArrayWriting
int TIFFForceStrileArrayWriting(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFPrintDirectory
void TIFFPrintDirectory(TIFF *tif, FILE *fd, long flags);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadScanline
int TIFFReadScanline(TIFF* tif, void* buf, uint32_t row, uint16_t sample);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteScanline
int TIFFWriteScanline(TIFF* tif, void* buf, uint32_t row, uint16_t sample);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadRGBAImage
int TIFFReadRGBAImage(TIFF *tif, uint32_t rwidth, uint32_t rheight, uint32_t *raster, int stop);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadRGBAImageOriented
int TIFFReadRGBAImageOriented(TIFF *tif, uint32_t rwidth, uint32_t rheight, uint32_t *raster, int orientation, int stop);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadRGBAStrip
int TIFFReadRGBAStrip(TIFF *tif, uint32_t row, uint32_t *raster);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadRGBATile
int TIFFReadRGBATile(TIFF *tif, uint32_t col, uint32_t row, uint32_t *raster);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadRGBAStripExt
int TIFFReadRGBAStripExt(TIFF *tif, uint32_t row, uint32_t *raster, int stop_on_error);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadRGBATileExt
int TIFFReadRGBATileExt(TIFF *tif, uint32_t col, uint32_t row, uint32_t *raster, int stop_on_error);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRGBAImageOK
int TIFFRGBAImageOK(TIFF *tif, char emsg[1024]);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRGBAImageBegin
int TIFFRGBAImageBegin(TIFFRGBAImage *img, TIFF *tif, int stop, char emsg[1024]);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRGBAImageGet
int TIFFRGBAImageGet(TIFFRGBAImage *img, uint32_t *raster, uint32_t w, uint32_t h);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFRGBAImageEnd
void TIFFRGBAImageEnd(TIFFRGBAImage *img);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFOpen
TIFF* TIFFOpen(const char *name, const char *mode);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFClientOpen
TIFF* TIFFClientOpen(const char *name, const char *mode, thandle_t clientdata, TIFFReadWriteProc readproc, TIFFReadWriteProc writepric, TIFFSeekProc seekproc, TIFFCloseProc closeproc, TIFFSizeProc sizeproc, TIFFMapFileProc mapproc, TIFFUnmapFileProc unmapproc);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFFileName
const char* TIFFFileName(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetFileName
const char* TIFFSetFileName(TIFF *tif, const char *name);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetErrorHandler
TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler handler);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetErrorHandlerExt
TIFFErrorHandlerExt TIFFSetErrorHandlerExt(TIFFErrorHandlerExt handler);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetWarningHandler
TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler handler);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetWarningHandlerExt
TIFFErrorHandlerExt TIFFSetWarningHandlerExt(TIFFErrorHandlerExt handler);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetTagExtender
TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc extendproc);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFComputeTile
uint32_t TIFFComputeTile(TIFF* tif, uint32_t x, uint32_t y, uint32_t z, uint16_t s);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCheckTile
int TIFFCheckTile(TIFF* tif, uint32_t x, uint32_t y, uint32_t z, uint16_t s);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFNumberOfTiles
uint32_t TIFFNumberOfTiles(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadTile
tmsize_t TIFFReadTile(TIFF* tif, void* buf, uint32_t x, uint32_t y, uint32_t z, uint16_t s);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteTile
tmsize_t TIFFWriteTile(TIFF* tif, void* buf, uint32_t x, uint32_t y, uint32_t z, uint16_t s);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFComputeStrip
uint32_t TIFFComputeStrip(TIFF *tif, uint32_t row, uint16_t sample);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFNumberOfStrips
uint32_t TIFFNumberOfStrips(TIFF *tif);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadEncodedStrip
tmsize_t TIFFReadEncodedStrip(TIFF* tif, uint32_t strip, void* buf, tmsize_t size);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadRawStrip
tmsize_t TIFFReadRawStrip(TIFF* tif, uint32_t strip, void* buf, tmsize_t size);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadEncodedTile
tmsize_t TIFFReadEncodedTile(TIFF* tif, uint32_t tile, void* buf, tmsize_t size);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadRawTile
tmsize_t TIFFReadRawTile(TIFF* tif, uint32_t tile, void* buf, tmsize_t size);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReadFromUserBuffer
int TIFFReadFromUserBuffer(TIFF* tif, uint32_t strile, void* inbuf, tmsize_t insize, void* outbuf, tmsize_t outsize);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteEncodedStrip
tmsize_t TIFFWriteEncodedStrip(TIFF* tif, uint32_t strip, void* data, tmsize_t cc);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteRawStrip
tmsize_t TIFFWriteRawStrip(TIFF* tif, uint32_t strip, void* data, tmsize_t cc);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteEncodedTile
tmsize_t TIFFWriteEncodedTile(TIFF* tif, uint32_t tile, void* data, tmsize_t cc);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFWriteRawTile
tmsize_t TIFFWriteRawTile(TIFF* tif, uint32_t tile, void* data, tmsize_t cc);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFDataWidth
int TIFFDataWidth(TIFFDataType ype);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSetWriteOffset
void TIFFSetWriteOffset(TIFF* tif, toff_t off);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabShort
void TIFFSwabShort(uint16_t *wp);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabLong
void TIFFSwabLong(uint32_t *lp);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabLong8
void TIFFSwabLong8(uint64_t *lp);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabFloat
void TIFFSwabFloat(float *fp);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabDouble
void TIFFSwabDouble(double *dp);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabArrayOfShort
void TIFFSwabArrayOfShort(uint16_t* wp, tmsize_t n);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabArrayOfTriples
void TIFFSwabArrayOfTriples(uint8_t* tp, tmsize_t n);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabArrayOfLong
void TIFFSwabArrayOfLong(uint32_t* lp, tmsize_t n);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabArrayOfLong8
void TIFFSwabArrayOfLong8(uint64_t* lp, tmsize_t n);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabArrayOfFloat
void TIFFSwabArrayOfFloat(float* fp, tmsize_t n);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFSwabArrayOfDouble
void TIFFSwabArrayOfDouble(double* dp, tmsize_t n);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFReverseBits
void TIFFReverseBits(uint8_t* cp, tmsize_t n);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetBitRevTable
const unsigned char* TIFFGetBitRevTable(int reversed);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetStrileOffset
uint64_t TIFFGetStrileOffset(TIFF *tif, uint32_t strile);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetStrileByteCount
uint64_t TIFFGetStrileByteCount(TIFF *tif, uint32_t strile);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetStrileOffsetWithErr
uint64_t TIFFGetStrileOffsetWithErr(TIFF *tif, uint32_t strile, int *pbErr);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFGetStrileByteCountWithErr
uint64_t TIFFGetStrileByteCountWithErr(TIFF *tif, uint32_t strile, int *pbErr);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCIELabToRGBInit
int TIFFCIELabToRGBInit(TIFFCIELabToRGB *cielabd, const TIFFDisplay *display, float *refWhite);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFCIELabToXYZ
void TIFFCIELabToXYZ(TIFFCIELabToRGB *cielabd, uint32_t l, int32_t a, int32_t b, float *X, float *Y, float *Z);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFXYZToRGB
void TIFFXYZToRGB(TIFFCIELabToRGB *cielab, float X, float Y, float Z, uint32_t *r, uint32_t *g, uint32_t *b);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFYCbCrToRGBInit
int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB *ycbcr, float *luma, float *refBlackWhite);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFYCbCrtoRGB
void TIFFYCbCrtoRGB(TIFFYCbCrToRGB *ycbcr, uint32_t Y, int32_t Cb, int32_t Cr, uint32_t *r, uint32_t *g, uint32_t *b);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

#if !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__)
#ifndef TIFFMergeFieldInfo
int TIFFMergeFieldInfo(TIFF *tif, const TIFFFieldInfo info[], uint32_t n);
#endif

#endif /* !defined(__TIFF_LIBAPI__) || (50 <= __TIFF_LIBAPI__) */

__END_DECLS

#endif /* CLIB_TIFF_PROTOS_H */
