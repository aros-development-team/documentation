#ifndef CLIB_STDCIO_PROTOS_H
#define CLIB_STDCIO_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/compiler/crt/stdc/stdcio.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/stdcio.h>

#define _STDIO_H_NOMACRO
#include <stdio.h>

#include <wchar.h>
#include <wctype.h>

__BEGIN_DECLS


#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef __stdcio_set_environptr
int __stdcio_set_environptr(char ***environptr);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef __stdcio_get_environptr
char *** __stdcio_get_environptr(void);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef __stdcio_set_envlistptr
int __stdcio_set_envlistptr(char ***envlisttr);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef __stdcio_get_envlistptr
char *** __stdcio_get_envlistptr(void);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef __stdcio_env_getvar
char * __stdcio_env_getvar(const char *varname, int valuesize);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef __assert
void __assert(const char * expr, const char * file, unsigned int line);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef remove
int remove(const char *filename);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef rename
int rename(const char *old, const char *new);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef tmpfile
FILE * tmpfile(void);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef tmpnam
char * tmpnam(char *s);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fclose
int fclose(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fflush
int fflush(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fopen
FILE * fopen(const char * __restrict filename, const char * __restrict mode);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef freopen
FILE * freopen(const char * __restrict filename, const char * __restrict mode, FILE * __restrict stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef setbuf
void setbuf(FILE * __restrict stream, char * __restrict buf);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef setvbuf
int setvbuf(FILE * __restrict stream, char * __restrict buf, int mode, size_t size);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fprintf
int fprintf(FILE * __restrict stream, const char * __restrict format, ...);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fscanf
int fscanf(FILE * __restrict stream, const char * __restrict format, ...);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef printf
int printf(const char * __restrict format, ...);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef scanf
int scanf(const char * __restrict format, ...);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef vfprintf
int vfprintf(FILE * __restrict stream, const char * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef vfscanf
int vfscanf(FILE * __restrict stream, const char * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef vprintf
int vprintf(const char * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef vscanf
int vscanf(const char * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fgetc
int fgetc(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fgets
char * fgets(char * __restrict s, int n, FILE * __restrict stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fputc
int fputc(int c, FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fputs
int fputs(const char * __restrict s, FILE * __restrict stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef getchar
int getchar(void);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef gets
char * gets(char *s);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef putchar
int putchar(int c);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef puts
int puts(const char *s);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef ungetc
int ungetc(int c, FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fread
size_t fread(void * __restrict ptr, size_t size, size_t nmemb, FILE * __restrict stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fwrite
size_t fwrite(const void * __restrict ptr, size_t size, size_t nmemb, FILE * __restrict stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fgetpos
int fgetpos(FILE * __restrict stream, fpos_t * __restrict pos);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fseek
int fseek(FILE *stream, long int offset, int whence);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fsetpos
int fsetpos(FILE *stream, const fpos_t *pos);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef ftell
long int ftell(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef rewind
void rewind(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef clearerr
void clearerr(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef feof
int feof(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef ferror
int ferror(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef perror
void perror(const char *s);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef getenv
char * getenv(const char *name);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef system
int system(const char *string);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fwprintf
int fwprintf(FILE *, const wchar_t *, ...);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fwscanf
int fwscanf(FILE *, const wchar_t *, ...);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef wprintf
int wprintf(const wchar_t *, ...);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fgetwc
wint_t fgetwc(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fgetws
wchar_t * fgetws(wchar_t *ws, int n, FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fputwc
wint_t fputwc(wint_t wc, FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fputws
wint_t fputws(const wchar_t *ws, FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef fwide
int fwide(FILE *stream, int mode);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef vwprintf
int vwprintf(const wchar_t *, va_list);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef vwscanf
int vwscanf(const wchar_t * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef wscanf
int wscanf(const wchar_t *, ...);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef getwc
wint_t getwc(FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef putwc
wint_t putwc(wchar_t c, FILE *stream);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef ungetwc
wint_t ungetwc(wint_t, FILE *);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef vfwprintf
int vfwprintf(FILE *, const wchar_t *, va_list);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef vfwscanf
int vfwscanf(FILE *__restrict stream, const wchar_t *__restrict format, va_list arg);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef getwchar
wint_t getwchar(void);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

#if !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__)
#ifndef putwchar
wint_t putwchar(wchar_t wc);
#endif

#endif /* !defined(__STDCIO_LIBAPI__) || (0 <= __STDCIO_LIBAPI__) */

__END_DECLS

#endif /* CLIB_STDCIO_PROTOS_H */
