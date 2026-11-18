#ifndef CLIB_POSIXC_PROTOS_H
#define CLIB_POSIXC_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/compiler/crt/posixc/posixc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


#include <aros/features.h>

#include <aros/types/mbstate_t.h>

#include <libraries/posixc.h>
#include <stdlib.h>
#include <grp.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/resource.h>
#include <sys/mount.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/statvfs.h>
#include <signal.h>
#include <regex.h>
#include <sys/utsname.h>
#include <termios.h>
#include <utime.h>
#include <sys/select.h>
#include <wchar.h>
#include <locale.h>
#include <langinfo.h>

#if !defined(__off64_t_defined)
#define off64_t UQUAD
#endif

#if !defined(__fpos64_t_defined)
#define fpos64_t UQUAD
#endif

#undef __assert /* We replace the aroscstddos __assert with our own */

__BEGIN_DECLS


#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef __posixc_nixmain
int __posixc_nixmain(int (*main)(int argc, char *argv[]), int argc, char *argv[]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef __posixc_assert
void __posixc_assert(const char *expr, const char *file, unsigned int line);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef alphasort
int alphasort(const struct dirent **a, const struct dirent **b);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef alphasort64
int alphasort64(const struct dirent64 **a, const struct dirent64 **b);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef closedir
int closedir(DIR *dir);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef dirfd
int dirfd(DIR *dir);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fdopendir
DIR * fdopendir(int);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef opendir
DIR * opendir(const char *filename);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef readdir
struct dirent * readdir(DIR *dir);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef readdir64
struct dirent64 * readdir64(DIR *dir);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef rewinddir
void rewinddir(DIR *dir);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef scandir
int scandir(const char *dir, struct dirent ***namelist, int (*select)(const struct dirent *), int (*compar)(const struct dirent **, const struct dirent **));
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef scandir64
int scandir64(const char *dir, struct dirent64 ***namelist, int (*select)(const struct dirent64 *), int (*compar)(const struct dirent64 **, const struct dirent64 **));
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef seekdir
void seekdir(DIR *dir, off_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef telldir
long telldir(DIR *dir);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef creat
int creat(const char * filename, int mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef creat64
int creat64(const char * filename, int mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fcntl
int fcntl(int fd, int cmd, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef open
int open(const char * filename, int flags, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef openat
int openat(int dirfd, const char *__restrict pathname, int flags, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef posix_fadvise
int posix_fadvise(int fd, off_t offset, off_t len, int advice);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef endgrent
void endgrent(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getgrent
struct group * getgrent(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getgrgid
struct group * getgrgid(gid_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getgrgid_r
int getgrgid_r(gid_t, struct group *, char *, size_t, struct group **);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getgrnam
struct group * getgrnam(const char *name);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getgrnam_r
int getgrnam_r(const char *, struct group *, char *, size_t, struct group **);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setgrent
void setgrent(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef nl_langinfo
char * nl_langinfo(nl_item);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef nl_langinfo_l
char * nl_langinfo_l(nl_item, locale_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef basename
char * basename(char *filename);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef dirname
char * dirname(char *filename);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef freelocale
void freelocale(locale_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef newlocale
locale_t newlocale(int, const char *, locale_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef uselocale
locale_t uselocale(locale_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef endpwent
void endpwent(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpwent
struct passwd * getpwent(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpwnam
struct passwd * getpwnam(const char *name);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpwnam_r
int getpwnam_r(const char *, struct passwd *, char *, size_t, struct passwd **);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpwuid
struct passwd * getpwuid(uid_t uid);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpwuid_r
int getpwuid_r(uid_t, struct passwd *, char *, size_t, struct passwd **);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setpwent
void setpwent(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef regcomp
int regcomp(regex_t *preg, const char *pattern, int cflags);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef regerror
size_t regerror(int errcode, const regex_t *preg, char *errbuf, size_t errbuf_size);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef regexec
int regexec(const regex_t *preg, const char *string, size_t nmatch, regmatch_t pmatch[], int eflags);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef regfree
void regfree(regex_t *preg);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef siglongjmp
void siglongjmp(sigjmp_buf env, int val);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigsetjmp
int sigsetjmp(sigjmp_buf env, int val);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef kill
int kill(pid_t pid, int sig);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigaction
int sigaction(int signum, const  struct  sigaction  *act, struct sigaction *oldact);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigaddset
int sigaddset(sigset_t * set, int signum);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigdelset
int sigdelset(sigset_t * set, int signum);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigemptyset
int sigemptyset(sigset_t * set);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigfillset
int sigfillset(sigset_t * set);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigismember
int sigismember(const sigset_t * set, int signum);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigpending
int sigpending(sigset_t * set);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigprocmask
int sigprocmask(int how, const sigset_t * set, sigset_t * oldset);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sigsuspend
int sigsuspend(const sigset_t * set);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef clearerr
void clearerr(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef dprintf
int dprintf(int, const char *__restrict, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fclose
int fclose(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fdopen
FILE * fdopen(int filedes, const char *mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef feof
int feof(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ferror
int ferror(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fflush
int fflush(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fgetc
int fgetc(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fgetpos
int fgetpos(FILE *__restrict stream, fpos_t *__restrict pos);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fgetpos64
int fgetpos64(FILE *__restrict stream, fpos64_t *__restrict pos);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fgets
char * fgets(char * buffer, int size, FILE * stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fileno
int fileno(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef flockfile
void flockfile(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fopen
FILE * fopen(const char * pathname, const char * mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fopen64
FILE * fopen64(const char *__restrict pathname, const char *__restrict mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fprintf
int fprintf(FILE * fh, const char * format, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fputc
int fputc(int c, FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fputs
int fputs(const char * str, FILE * stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fread
size_t fread(void * buf, size_t size, size_t nblocks, FILE * stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef freopen
FILE * freopen(const char * path, const char * mode, FILE * stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fscanf
int fscanf(FILE * fh, const char * format, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fseek
int fseek(FILE * stream, long offset, int whence);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fseeko
int fseeko(FILE * stream, off_t  offset, int    whence);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fseeko64
int fseeko64(FILE * stream, off64_t offset, int whence);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fsetpos
int fsetpos(FILE * stream, const fpos_t * pos);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fsetpos64
int fsetpos64(FILE * stream, const fpos64_t * pos);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ftell
long ftell(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ftello
off_t ftello(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ftello64
off64_t ftello64(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef funlockfile
void funlockfile(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fwrite
size_t fwrite(const void * __restrict buf, size_t size, size_t nblocks, FILE * __restrict stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getchar
int getchar(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getc_unlocked
int getc_unlocked(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getdelim
ssize_t getdelim(char **__restrict, size_t *__restrict, int, FILE *__restrict);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getline
ssize_t getline(char **__restrict, size_t *__restrict, FILE *__restrict);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpass
char * getpass(const char *prompt);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef gets
char * gets(char *buffer);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef pclose
int pclose(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef perror
void perror(const char *string);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef popen
FILE * popen(const char * command, const char * mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef printf
int printf(const char * format, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef putchar
int putchar(int c);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef puts
int puts(const char *str);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef remove
int remove(const char * pathname);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef rename
int rename(const char *oldpath, const char *newpath);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef rewind
void rewind(FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef scanf
int scanf(const char *__restrict format, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setbuf
void setbuf(FILE *stream, char *buf);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setvbuf
int setvbuf(FILE *stream, char *buf, int mode, size_t size);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef tempnam
char * tempnam(const char *dir, const char *pfx);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef tmpfile
FILE * tmpfile(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef tmpnam
char * tmpnam(char *s);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ungetc
int ungetc(int c, FILE *stream);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef vdprintf
int vdprintf(int, const char *__restrict, va_list args);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef vfprintf
int vfprintf(FILE * stream, const char * format, va_list args);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef vfscanf
int vfscanf(FILE * stream, const char * format, va_list args);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef vprintf
int vprintf(const char *__restrict format, va_list args);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef vscanf
int vscanf(const char *__restrict format, va_list args);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef drand48
double drand48(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef erand48
double erand48(unsigned short xseed[3]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getenv
char * getenv(const char *name);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef initstate
char * initstate(unsigned seed, char * arg_state, int n);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef jrand48
long int jrand48(unsigned short xseed[3]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef lcong48
void lcong48(unsigned short p[7]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef lrand48
long int lrand48(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef mkstemp
int mkstemp(char *template);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef mktemp
char * mktemp(char *template);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef mrand48
long int mrand48(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef nrand48
long int nrand48(unsigned short xseed[3]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef posix_memalign
int posix_memalign(void **memptr, size_t alignment, size_t size);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef putenv
int putenv(const char *string);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef rand_r
int rand_r(unsigned int *);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef random
long random(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef realpath
char * realpath(const char *path, char *resolved_path);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef seed48
unsigned short int * seed48(unsigned short xseed[3]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setenv
int setenv(const char *name, const char *value, int overwrite);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setstate
char * setstate(char *arg_state);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef srand48
void srand48(long seed);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef srandom
void srandom(unsigned x);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef system
int system(const char *string);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef unsetenv
int unsetenv(const char *name);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getloadavg
int getloadavg(double loadavg[], int n);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strerror
char * strerror(int n);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strerror_r
int strerror_r(int errnum, char *buf, size_t buflen);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strcoll_l
int strcoll_l(const char *s1, const char *s2, locale_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strxfrm_l
size_t strxfrm_l(char *dest, const char *src, size_t n, locale_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strcoll
int strcoll(const char *s1, const char *s2);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strtok_r
char * strtok_r(char *__restrict str, const char *__restrict sep, char **__restrict saveptr);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ioctl
int ioctl(int fd, int request, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getrlimit
int getrlimit(int resource, struct rlimit *rlp);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getrusage
int getrusage(int who, struct rusage *usage);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setrlimit
int setrlimit(int resource, const struct rlimit *rlp);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef pselect
int pselect(int nfds, fd_set *__restrict readfds, fd_set *__restrict writefds, fd_set *__restrict exceptfds, const struct timespec *__restrict timeout, const sigset_t *__restrict sigmask);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef select
int select(int nfds, fd_set *__restrict readfds, fd_set *__restrict writefds, fd_set *__restrict exceptfds, struct timeval *__restrict timeout);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef chmod
int chmod(const char *path, mode_t mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fchmod
int fchmod(int fildes, mode_t mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fchmodat
int fchmodat(int dirfd, const char *__restrict pathname, mode_t mode, int flags);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fstat
int fstat(int fd, struct stat *sb);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fstat64
int fstat64(int fd, struct stat64 *sb);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fstatat
int fstatat(int dirfd, const char *path, struct stat *buf, int flags);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef lstat
int lstat(const char * __restrict path, struct stat * __restrict sb);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef lstat64
int lstat64(const char * __restrict path, struct stat64 * __restrict sb);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef mkdir
int mkdir(const char *path, mode_t mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef mknod
int mknod(const char *path, mode_t mode, dev_t dev);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef stat
int stat(const char * __restrict path, struct stat * __restrict sb);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef stat64
int stat64(const char * __restrict path, struct stat64 * __restrict sb);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef umask
mode_t umask(mode_t numask);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fstatvfs
int fstatvfs(int fd, struct statvfs *buf);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef statvfs
int statvfs(const char *__restrict path, struct statvfs *__restrict buf);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef gettimeofday
int gettimeofday(struct timeval * __restrict tv, struct timezone * __restrict tz);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef utimes
int utimes(const char * file, const struct timeval tvp[2]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef times
clock_t times(struct tms *tms);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef uname
int uname(struct utsname *name);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef wait
pid_t wait(int *status);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef waitpid
pid_t waitpid(pid_t pid, int *status, int options);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef cfgetispeed
speed_t cfgetispeed(const struct termios *__termios_p);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef cfgetospeed
speed_t cfgetospeed(const struct termios *__termios_p);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef cfsetispeed
int cfsetispeed(struct termios *__termios_p, speed_t speed);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef cfsetospeed
int cfsetospeed(struct termios *__termios_p, speed_t speed);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef tcgetattr
int tcgetattr(int fd, struct termios * t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef tcsetattr
int tcsetattr(int fd, int opt, const struct termios * t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef asctime_r
char * asctime_r(const struct tm * tm, char * buf);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ctime_r
char * ctime_r(const time_t * tt, char * buf);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef gmtime_r
struct tm * gmtime_r(const time_t * tt, struct tm * tm);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef clock_gettime
int clock_gettime(clockid_t clk_id, struct timespec *tp);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef localtime_r
struct tm * localtime_r(const time_t * tt, struct tm * tm);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef nanosleep
int nanosleep(const struct timespec * req, struct timespec *rem);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strftime_l
size_t strftime_l(char *__restrict, size_t, const char *__restrict, const struct tm *__restrict, locale_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strptime
char * strptime(const char *s, const char *format, struct tm *tm);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef access
int access(const char *path, int mode);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef chdir
int chdir(const char *path);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef chown
int chown(const char *path, uid_t owner, gid_t group);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef close
int close(int fd);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef dup
int dup(int oldfd);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef dup2
int dup2(int oldfd, int newfd);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef execl
int execl(const char *path, const char *arg, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef execlp
int execlp(const char *path, const char *arg, ...);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef execv
int execv(const char *path, char *const argv[]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef execve
int execve(const char *path, char *const argv[], char *const envp[]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef execvp
int execvp(const char *path, char *const argv[]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fchdir
int fchdir(int fd);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fchown
int fchown(int fd, uid_t owner, gid_t group);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef fsync
int fsync(int fd);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ftruncate
int ftruncate(int fd, off_t length);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getcwd
char * getcwd(char *buf, size_t size);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getegid
gid_t getegid(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef geteuid
uid_t geteuid(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getgid
gid_t getgid(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getgroups
int getgroups(int gidsetlen, gid_t *gidset);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getlogin
char * getlogin(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpgid
pid_t getpgid(pid_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpgrp
pid_t getpgrp(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getpid
pid_t getpid(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getppid
pid_t getppid(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getuid
uid_t getuid(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef isatty
int isatty(int fd);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef link
int link(const char *name1, const char *name2);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef lseek
off_t lseek(int filedes, off_t offset, int whence);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef lseek64
off64_t lseek64(int filedes, off64_t offset, int whence);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef pathconf
long pathconf(const char *path, int name);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef pipe
int pipe(int filedes[2]);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef pread
ssize_t pread(int d, void *buf, size_t nbytes, off_t offset);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef pread64
ssize_t pread64(int d, void *buf, size_t nbytes, off64_t offset);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef read
ssize_t read(int d, void *buf, size_t nbytes);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef readlink
ssize_t readlink(const char * __restrict path, char * __restrict buf, size_t bufsize);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef rmdir
int rmdir(const char *path);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setegid
int setegid(gid_t egid);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef seteuid
int seteuid(uid_t euid);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setgid
int setgid(gid_t gid);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setsid
pid_t setsid(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef setuid
int setuid(uid_t uid);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sleep
unsigned sleep(unsigned);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef swab
void swab(const void * __restrict src, void * __restrict dst, size_t len);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef symlink
int symlink(const char *name1, const char *name2);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sync
void sync(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef sysconf
long sysconf(int name);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef tcgetpgrp
pid_t tcgetpgrp(int fd);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef truncate
int truncate(const char *path, off_t length);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ttyname
char * ttyname(int fd);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef unlinkat
int unlinkat(int, const char *, int);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef write
ssize_t write(int fd, const void *buf, size_t nbytes);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef utime
int utime(const char *filename, const struct utimbuf *buf);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef mbsnrtowcs
size_t mbsnrtowcs(wchar_t *__restrict, const char **__restrict, size_t, size_t, mbstate_t *__restrict);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef wcscoll_l
int wcscoll_l(const wchar_t *, const wchar_t *, locale_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef wcsnrtombs
size_t wcsnrtombs(char *__restrict, const wchar_t **__restrict, size_t, size_t, mbstate_t *__restrict);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef wcswidth
int wcswidth(const wchar_t *pwcs, size_t n);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef wcsxfrm_l
size_t wcsxfrm_l(wchar_t *__restrict, const wchar_t *__restrict, size_t, locale_t);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef wcwidth
int wcwidth(wchar_t wc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswalnum_l
int iswalnum_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswalpha_l
int iswalpha_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswblank_l
int iswblank_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswcntrl_l
int iswcntrl_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswdigit_l
int iswdigit_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswgraph_l
int iswgraph_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswlower_l
int iswlower_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswprint_l
int iswprint_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswpunct_l
int iswpunct_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswspace_l
int iswspace_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswupper_l
int iswupper_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef iswxdigit_l
int iswxdigit_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef towlower_l
wint_t towlower_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef towupper_l
wint_t towupper_l(wint_t wc, locale_t locale);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef wcswcs
wchar_t * wcswcs(const wchar_t *, const wchar_t *);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef updatestdio
void updatestdio(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef __get_default_file
int __get_default_file(int file_descriptor, long * file_handle);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef flock
int flock(int fd, int operation);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getfsstat
int getfsstat(struct statfs *buf, long bufsize, int flags);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef statfs
int statfs(const char *path, struct statfs *buf);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef usleep
int usleep(useconds_t microseconds);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef vfork
pid_t vfork(void);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef localeconv_l
struct lconv * localeconv_l(locale_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strtof_l
float strtof_l(const char * __restrict nptr, char ** __restrict endptr, locale_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strtod_l
double strtod_l(const char * __restrict nptr, char ** __restrict endptr, locale_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strtold_l
long double strtold_l(const char * __restrict nptr, char ** __restrict endptr, locale_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strtoll_l
long long strtoll_l(const char * __restrict nptr, char ** __restrict endptr, int base, locale_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef strtoull_l
unsigned long long strtoull_l(const char * __restrict nptr, char ** __restrict endptr, int base, locale_t loc);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef getentropy
int getentropy(void *buffer, size_t length);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef _exit
void _exit(int code);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

#if !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__)
#ifndef ftruncate64
int ftruncate64(int fd, off64_t length);
#endif

#endif /* !defined(__POSIXC_LIBAPI__) || (0 <= __POSIXC_LIBAPI__) */

__END_DECLS

#endif /* CLIB_POSIXC_PROTOS_H */
