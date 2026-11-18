#ifndef CLIB_STDC_PROTOS_H
#define CLIB_STDC_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/compiler/crt/stdc/stdc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/stdc.h>
#include <setjmp.h>
#include <complex.h>
#include <fenv.h>
#include <math.h>
#include <signal.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>

#ifdef __GNUC__
#undef cimag
#undef cimagf
#undef cimagl
#undef creal
#undef crealf
#undef creall
#endif

/* Avoid warning for redefinition of isinf()/isnan() */
#define STDC_NOLIBINLINE
#define STDC_NOLIBDEFINES
#define STDC_NOINLINE_WCTYPE

#include <wchar.h>
#include <wctype.h>
#include <uchar.h>


__BEGIN_DECLS


#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_gmtoffset
int __stdc_gmtoffset(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_program_startup
void __stdc_program_startup(jmp_buf exitjmp, int *errorptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_program_end
void __stdc_program_end(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_set_errorptr
int * __stdc_set_errorptr(int *errorptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_get_errorptr
int * __stdc_get_errorptr(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_set_exitjmp
void __stdc_set_exitjmp(jmp_buf exitjmp, jmp_buf previousjmp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_jmp2exit
void __stdc_jmp2exit(int normal, int returncode);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_set_fpuprivate
void * __stdc_set_fpuprivate(void *fpuprivate);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_get_fpuprivate
void * __stdc_get_fpuprivate(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_get_fe_dfl
void * __stdc_get_fe_dfl(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_get_fe_nom
void * __stdc_get_fe_nom(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_get_fe_round
int __stdc_get_fe_round(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_sig_getfuncdata
struct signal_func_data * __stdc_sig_getfuncdata(int signum);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
AROS_LP1(void, __stdc_inherit_mempool,
         AROS_LPA(int, inherit, D0),
         LIBBASETYPEPTR, StdCBase, 22, StdC
);

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_set_taskexit
void __stdc_set_taskexit(void (*taskexit)(int returncode));
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __assert
void __assert(const char * expr, const char * file, unsigned int line);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cacos
double complex cacos(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cacosf
float complex cacosf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cacosl
long double complex cacosl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef casin
double complex casin(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef casinf
float complex casinf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef casinl
long double complex casinl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef catan
double complex catan(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef catanf
float complex catanf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef catanl
long double complex catanl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ccos
double complex ccos(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ccosf
float complex ccosf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ccosl
long double complex ccosl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csin
double complex csin(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csinf
float complex csinf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csinl
long double complex csinl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ctan
double complex ctan(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ctanf
float complex ctanf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ctanl
long double complex ctanl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cacosh
double complex cacosh(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cacoshf
float complex cacoshf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cacoshl
long double complex cacoshl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef casinh
double complex casinh(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef casinhf
float complex casinhf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef casinhl
long double complex casinhl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef catanh
double complex catanh(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef catanhf
float complex catanhf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef catanhl
long double complex catanhl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ccosh
double complex ccosh(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ccoshf
float complex ccoshf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ccoshl
long double complex ccoshl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csinh
double complex csinh(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csinhf
float complex csinhf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csinhl
long double complex csinhl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ctanh
double complex ctanh(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ctanhf
float complex ctanhf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ctanhl
long double complex ctanhl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cexp
double complex cexp(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cexpf
float complex cexpf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cexpl
long double complex cexpl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef clog
double complex clog(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef clogf
float complex clogf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef clogl
long double complex clogl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cabs
double cabs(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cabsf
float cabsf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cabsl
long double cabsl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cpow
double complex cpow(double complex x, double complex y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cpowf
float complex cpowf(float complex x, float complex y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cpowl
long double complex cpowl(long double complex x, long double complex y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csqrt
double complex csqrt(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csqrtf
float complex csqrtf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef csqrtl
long double complex csqrtl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef carg
double carg(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cargf
float cargf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cargl
long double cargl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cimag
double cimag(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cimagf
float cimagf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cimagl
long double cimagl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef conj
double complex conj(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef conjf
float complex conjf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef conjl
long double complex conjl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cproj
double complex cproj(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cprojf
float complex cprojf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cprojl
long double complex cprojl(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef creal
double creal(double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef crealf
float crealf(float complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef creall
long double creall(long double complex z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ioerr2errno
int ioerr2errno(int ioerr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef feclearexcept
int feclearexcept(int excepts);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fegetexceptflag
int fegetexceptflag(fexcept_t *flagp, int excepts);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef feraiseexcept
int feraiseexcept(int excepts);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fesetexceptflag
int fesetexceptflag(const fexcept_t *flagp, int excepts);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fetestexcept
int fetestexcept(int excepts);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fegetround
int fegetround(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fesetround
int fesetround(int round);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fegetenv
int fegetenv(fenv_t *envp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef feholdexcept
int feholdexcept(fenv_t *envp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fesetenv
int fesetenv(const fenv_t *envp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef feupdateenv
int feupdateenv(const fenv_t *envp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef imaxabs
intmax_t imaxabs(intmax_t j);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef imaxdiv
imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtoimax
intmax_t strtoimax(const char * __restrict nptr, char ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtoumax
uintmax_t strtoumax(const char * __restrict nptr, char ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstoimax
intmax_t wcstoimax(const wchar_t * __restrict nptr, wchar_t ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstoumax
uintmax_t wcstoumax(const wchar_t * __restrict nptr, wchar_t ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef setlocale
char * setlocale(int category, const char *locale);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef localeconv
struct lconv * localeconv(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __fpclassifyd
int __fpclassifyd(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __fpclassifyf
int __fpclassifyf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __fpclassifyl
int __fpclassifyl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isfinite
int __isfinite(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isfinitef
int __isfinitef(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isfinitel
int __isfinitel(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isinf
int __isinf(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isinff
int __isinff(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isinfl
int __isinfl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isnan
int __isnan(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isnanf
int __isnanf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isnanl
int __isnanl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isnormal
int __isnormal(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isnormalf
int __isnormalf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __isnormall
int __isnormall(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __signbit
int __signbit(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __signbitf
int __signbitf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __signbitl
int __signbitl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef acos
double acos(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef asin
double asin(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atan
double atan(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atan2
double atan2(double y, double x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cos
double cos(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sin
double sin(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tan
double tan(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef acosh
double acosh(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef asinh
double asinh(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atanh
double atanh(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cosh
double cosh(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sinh
double sinh(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tanh
double tanh(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef exp
double exp(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef exp2
double exp2(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef expm1
double expm1(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef frexp
double frexp(double x, int *eptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ilogb
int ilogb(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ldexp
double ldexp(double x, int expt);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log
double log(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log10
double log10(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log1p
double log1p(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log2
double log2(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef logb
double logb(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef modf
double modf(double x, double *iptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef scalbn
double scalbn(double x, int n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef scalbln
double scalbln(double x, long n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cbrt
double cbrt(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fabs
double fabs(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef hypot
double hypot(double x, double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef pow
double pow(double x, double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sqrt
double sqrt(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef erf
double erf(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef erfc
double erfc(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lgamma
double lgamma(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tgamma
double tgamma(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ceil
double ceil(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef floor
double floor(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nearbyint
double nearbyint(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef rint
double rint(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lrint
long lrint(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef llrint
long long llrint(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef round
double round(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lround
long lround(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef llround
long long llround(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef trunc
double trunc(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmod
double fmod(double x, double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef remainder
double remainder(double x, double p);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef remquo
double remquo(double x, double y, int *quo);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef copysign
double copysign(double x, double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nan
double nan(const char *tagp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nextafter
double nextafter(double x, double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nexttoward
double nexttoward(double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fdim
double fdim(double x, double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmax
double fmax(double x, double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmin
double fmin(double x, double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fma
double fma(double x, double y, double z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef acosf
float acosf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef asinf
float asinf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atanf
float atanf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atan2f
float atan2f(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cosf
float cosf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sinf
float sinf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tanf
float tanf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef acoshf
float acoshf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef asinhf
float asinhf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atanhf
float atanhf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef coshf
float coshf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sinhf
float sinhf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tanhf
float tanhf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef expf
float expf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef exp2f
float exp2f(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef expm1f
float expm1f(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef frexpf
float frexpf(float x, int *eptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ilogbf
int ilogbf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ldexpf
float ldexpf(float x, int n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef logf
float logf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log10f
float log10f(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log1pf
float log1pf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log2f
float log2f(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef logbf
float logbf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef modff
float modff(float x, float *iptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef scalbnf
float scalbnf(float x, int n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef scalblnf
float scalblnf(float x, long n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cbrtf
float cbrtf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fabsf
float fabsf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef hypotf
float hypotf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef powf
float powf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sqrtf
float sqrtf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef erff
float erff(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef erfcf
float erfcf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lgammaf
float lgammaf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tgammaf
float tgammaf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ceilf
float ceilf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef floorf
float floorf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nearbyintf
float nearbyintf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef rintf
float rintf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lrintf
long lrintf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef llrintf
long long llrintf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef roundf
float roundf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lroundf
long lroundf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef llroundf
long long llroundf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef truncf
float truncf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmodf
float fmodf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef remainderf
float remainderf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef remquof
float remquof(float x, float y, int *quo);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef copysignf
float copysignf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nanf
float nanf(const char *tagp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nextafterf
float nextafterf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nexttowardf
float nexttowardf(float x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fdimf
float fdimf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmaxf
float fmaxf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fminf
float fminf(float y, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmaf
float fmaf(float x, float y, float z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef acosl
long double acosl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef asinl
long double asinl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atanl
long double atanl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atan2l
long double atan2l(long double y, long double x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cosl
long double cosl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sinl
long double sinl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tanl
long double tanl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef acoshl
long double acoshl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef asinhl
long double asinhl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atanhl
long double atanhl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef coshl
long double coshl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sinhl
long double sinhl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tanhl
long double tanhl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef expl
long double expl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef exp2l
long double exp2l(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef expm1l
long double expm1l(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef frexpl
long double frexpl(long double x, int *ex);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ilogbl
int ilogbl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ldexpl
long double ldexpl(long double x, int n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef logl
long double logl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log10l
long double log10l(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log1pl
long double log1pl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef log2l
long double log2l(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef logbl
long double logbl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef modfl
long double modfl(long double x, long double *iptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef scalbnl
long double scalbnl(long double x, int n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef scalblnl
long double scalblnl(long double x, long n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef cbrtl
long double cbrtl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fabsl
long double fabsl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef hypotl
long double hypotl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef powl
long double powl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sqrtl
long double sqrtl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef erfl
long double erfl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef erfcl
long double erfcl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lgammal
long double lgammal(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef tgammal
long double tgammal(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ceill
long double ceill(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef floorl
long double floorl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nearbyintl
long double nearbyintl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef rintl
long double rintl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lrintl
long lrintl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef llrintl
long long llrintl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef roundl
long double roundl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lroundl
long lroundl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef llroundl
long long llroundl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef truncl
long double truncl(long double e);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmodl
long double fmodl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef remainderl
long double remainderl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef remquol
long double remquol(long double x, long double y, int *quo);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef copysignl
long double copysignl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nanl
long double nanl(const char *tagp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nextafterl
long double nextafterl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef nexttowardl
long double nexttowardl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fdiml
long double fdiml(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmaxl
long double fmaxl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fminl
long double fminl(long double x, long double y);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef fmal
long double fmal(long double x, long double y, long double z);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef setjmp
int setjmp(jmp_buf env);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef longjmp
void longjmp(jmp_buf env, int val);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef signal
__sighandler_t * signal(int signum, __sighandler_t *handler);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef raise
int raise(int signum);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef snprintf
int snprintf(char * __restrict s, size_t n, const char * __restrict format, ...);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sprintf
int sprintf(char * __restrict s, const char * __restrict format, ...);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sscanf
int sscanf(const char * __restrict s, const char * __restrict format, ...);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef vsnprintf
int vsnprintf(char * __restrict s, size_t n, const char * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef vsprintf
int vsprintf(char * __restrict s, const char * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef vsscanf
int vsscanf(const char * __restrict s, const char * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atof
double atof(const char *nptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atoi
int atoi(const char *nptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atol
long int atol(const char *nptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atoll
long long int atoll(const char *nptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtod
double strtod(const char * __restrict nptr, char ** __restrict endptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtof
float strtof(const char * __restrict nptr, char ** __restrict endptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtold
long double strtold(const char * __restrict nptr, char ** __restrict endptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtol
long int strtol(const char * __restrict nptr, char ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtoll
long long int strtoll(const char * __restrict nptr, char ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtoul
unsigned long int strtoul(const char * __restrict nptr, char ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtoull
unsigned long long int strtoull(const char * __restrict nptr, char ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef rand
int rand(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef srand
void srand(unsigned int seed);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef calloc
void * calloc(size_t count, size_t size);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef free
void free(void *memory);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef malloc
void * malloc(size_t size);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef aligned_alloc
void * aligned_alloc(size_t alignment, size_t size);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef realloc
void * realloc(void *oldmem, size_t newsize);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef realloc_nocopy
void * realloc_nocopy(void *oldmem, size_t newsize);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef abort
void abort(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef atexit
int atexit(void (*func)(void));
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef on_exit
int on_exit(void (*func)(int, void *), void *arg);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __cxa_atexit
int __cxa_atexit(void (*func)(int, void *), void *arg, void *d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __cxa_finalize
void __cxa_finalize(void *d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef exit
void exit(int code);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef _Exit
void _Exit(int code);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef bsearch
void * bsearch(const void * key, const void * base, size_t count, size_t size, int (*comparefunction)(const void *, const void *));
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef qsort
void qsort(void * array, size_t count, size_t elementsize, int (*comparefunction)(const void * element1, const void * element2));
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef abs
int abs(int j);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef labs
long labs(long j);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef llabs
long long llabs(long long j);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef div
div_t div(int numer, int denom);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ldiv
ldiv_t ldiv(long int numer, long int denom);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lldiv
lldiv_t lldiv(long long int numer, long long int denom);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mblen
int mblen(const char *s, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mbtowc
int mbtowc(wchar_t * __restrict pwc, const char * __restrict s, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wctomb
int wctomb(char *s, wchar_t wc);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mbstowcs
size_t mbstowcs(wchar_t * __restrict pwcs, const char * __restrict s, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstombs
size_t wcstombs(char * __restrict s, const wchar_t * __restrict pwcs, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef memmove
void * memmove(void * dest, const void * src, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strcpy
char * strcpy(char * __restrict dest, const char * __restrict src);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strncpy
char * strncpy(char * __restrict dest, const char * __restrict src, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strcat
char * strcat(char * __restrict dest, const char * __restrict src);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strncat
char * strncat(char * __restrict dest, const char * __restrict src, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef memcmp
int memcmp(const void * s1, const void * s2, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strcmp
int strcmp(const char * s1, const char * s2);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strcoll
int strcoll(const char *s1, const char *s2);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strncmp
int strncmp(const char * s1, const char * s2, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strxfrm
size_t strxfrm(char * __restrict s1, const char * __restrict s2, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef memchr
void * memchr(const void * dest, int c, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strchr
char * strchr(const char * s, int c);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strcspn
size_t strcspn(const char *s1, const char *s2);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strpbrk
char * strpbrk(const char * s1, const char * s2);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strrchr
char * strrchr(const char * s, int c);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strspn
size_t strspn(const char * s1, const char * s2);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strstr
char * strstr(const char * buf, const char * str);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strtok
char * strtok(char * str, const char * sep);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef memset
void * memset(void * dest, int c, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strerror
char * strerror(int n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strlen
size_t strlen(const char * str);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef clock
clock_t clock(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef difftime
double difftime(time_t time2, time_t time1);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mktime
time_t mktime(struct tm *utim);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef time
time_t time(time_t *tloc);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef asctime
char * asctime(const struct tm *tm);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ctime
char * ctime(const time_t *tt);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef gmtime
struct tm * gmtime(const time_t *tt);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef localtime
struct tm * localtime(const time_t *tt);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strftime
size_t strftime(char *s, size_t maxsize, const char *format, const struct tm *timeptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef btowc
wint_t btowc(int);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mbrlen
size_t mbrlen(const char *, size_t, mbstate_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mbrtowc
size_t mbrtowc(wchar_t *, const char *, size_t, mbstate_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mbsrtowcs
size_t mbsrtowcs(wchar_t *, const char **, size_t, mbstate_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef swprintf
int swprintf(wchar_t *, size_t, const wchar_t *, ...);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef swscanf
int swscanf(const wchar_t *, const wchar_t *, ...);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef vswscanf
int vswscanf(const wchar_t * __restrict s, const wchar_t * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef vswprintf
int vswprintf(wchar_t *, size_t, const wchar_t *, va_list);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcrtomb
size_t wcrtomb(char * __restrict s, wchar_t wc, mbstate_t * __restrict ps);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcscat
wchar_t * wcscat(wchar_t *wcdst, const wchar_t *wcsrc);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcschr
wchar_t * wcschr(const wchar_t *, wchar_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcscmp
int wcscmp(const wchar_t *, const wchar_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcscpy
wchar_t * wcscpy(wchar_t *wcdst, const wchar_t *wcsrc);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcscspn
size_t wcscspn(const wchar_t *, const wchar_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsftime
size_t wcsftime(wchar_t *, size_t, const wchar_t *, const struct tm *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcslen
size_t wcslen(const wchar_t *wcstr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsncat
wchar_t * wcsncat(wchar_t *, const wchar_t *, size_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsncmp
int wcsncmp(const wchar_t *wcstra, const wchar_t *wcstrb, size_t cnt);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsncpy
wchar_t * wcsncpy(wchar_t *wcdst, const wchar_t *wcsrc, size_t cnt);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcspbrk
wchar_t * wcspbrk(const wchar_t *, const wchar_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsrchr
wchar_t * wcsrchr(const wchar_t *, wchar_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsrtombs
size_t wcsrtombs(char *, const wchar_t **, size_t, mbstate_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsspn
size_t wcsspn(const wchar_t *, const wchar_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsstr
wchar_t * wcsstr(const wchar_t *, const wchar_t *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstod
double wcstod(const wchar_t *, wchar_t **);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstof
float wcstof(const wchar_t * __restrict nptr, wchar_t ** __restrict endptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstok
wchar_t * wcstok(wchar_t *, const wchar_t *, wchar_t **);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstol
long int wcstol(const wchar_t *, wchar_t **, int);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstoul
unsigned long int wcstoul(const wchar_t *, wchar_t **, int);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstold
long double wcstold(const wchar_t *nptr, wchar_t **endptr);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstoll
long long int wcstoll(const wchar_t * __restrict nptr, wchar_t ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcstoull
unsigned long long int wcstoull(const wchar_t * __restrict nptr, wchar_t ** __restrict endptr, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcscoll
int wcscoll(const wchar_t *s1, const wchar_t *s2);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wcsxfrm
size_t wcsxfrm(wchar_t *, const wchar_t *, size_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wctob
int wctob(wint_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wmemchr
wchar_t * wmemchr(const wchar_t *, wchar_t, size_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wmemcmp
int wmemcmp(const wchar_t *, const wchar_t *, size_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wmemcpy
wchar_t * wmemcpy(wchar_t *, const wchar_t *, size_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wmemmove
wchar_t * wmemmove(wchar_t *, const wchar_t *, size_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wmemset
wchar_t * wmemset(wchar_t *, wchar_t, size_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef iswctype
int iswctype(wint_t, wctype_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef towctrans
wint_t towctrans(wint_t, wctrans_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef towlower
wint_t towlower(wint_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef towupper
wint_t towupper(wint_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef wctrans
wctrans_t wctrans(const char *);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef j0
double j0(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef j1
double j1(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef jn
double jn(int n, double x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef scalb
double scalb(double x, double fn);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef y0
double y0(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef y1
double y1(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef yn
double yn(int n, double x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef gamma_r
double gamma_r(double x, int *signgamp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lgamma_r
double lgamma_r(double x, int *signgamp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sincos
void sincos(double x, double *sn, double *cs);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef significand
double significand(double d);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef j0f
float j0f(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef j1f
float j1f(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef jnf
float jnf(int n, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef scalbf
float scalbf(float y, float fn);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef y0f
float y0f(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef y1f
float y1f(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef ynf
float ynf(int n, float x);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef gammaf_r
float gammaf_r(float x, int *signgamp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lgammaf_r
float lgammaf_r(float x, int *signgamp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sincosf
void sincosf(float x, float *sn, float *cs);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef significandf
float significandf(float f);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef lgammal_r
long double lgammal_r(long double x, int *signgamp);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef sincosl
void sincosl(long double x, long double *sn, long double *cs);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __vcformat
int __vcformat(void * data, int (*outc)(int, void *), const char * format, va_list args);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __vcscan
int __vcscan(void * data, int (*getc)(void *), int (*ungetc)(int, void *), const char * format, va_list args);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef memccpy
void * memccpy(void *__restrict, const void *__restrict, int, size_t);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stpcpy
char * stpcpy(char * __restrict dst, const char * __restrict src);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strdup
char * strdup(const char *orig);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strndup
char * strndup(const char *s, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strnlen
size_t strnlen(const char *s, size_t maxlen);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strlcpy
size_t strlcpy(char *dst, const char *src, size_t size);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strlcat
size_t strlcat(char *dst, const char *src, size_t size);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strsep
char * strsep(char ** strptr, const char * sep);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strlwr
char * strlwr(char *str);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strupr
char * strupr(char *str);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strrev
char * strrev(char * s);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stch_l
int stch_l(const char * in, long * lvalue);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stcd_l
int stcd_l(const char * in, long * lvalue);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stco_l
int stco_l(const char * in, long * lvalue);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stcl_d
int stcl_d(char * out, long lvalue);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stcl_h
int stcl_h(char * out, long lvalue);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stcl_o
int stcl_o(char * out, long lvalue);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stcu_d
int stcu_d(char * out, unsigned uivalue);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stccpy
size_t stccpy(char *str1_ptr, const char *str2_ptr, size_t max);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stpsym
char * stpsym(char *str_ptr, char *dest_ptr, int dest_size);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef stpblk
char * stpblk(const char * str);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strcasecmp
int strcasecmp(const char * s1, const char * s2);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef strncasecmp
int strncasecmp(const char *s1, const char *s2, size_t n);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef asprintf
int asprintf(char **__restrict str, const char *__restrict format, ...);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef vasprintf
int vasprintf(char **__restrict s, const char * __restrict format, va_list arg);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __vwformat
int __vwformat(void * data, wint_t (*outwc)(wchar_t, void *), const wchar_t * format, va_list args);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __vwscanf
int __vwscanf(void * data, wint_t (*getc)(void *), int (*ungetc)(wint_t, void *), const wchar_t * format, va_list args);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef quick_exit
void quick_exit(int status);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef at_quick_exit
int at_quick_exit(void (*func)(void));
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef timespec_get
int timespec_get(struct timespec *ts, int base);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mbrtoc16
size_t mbrtoc16(char16_t * pc16, const char * s, size_t n, mbstate_t * ps);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef c16rtomb
size_t c16rtomb(char * s, char16_t c16, mbstate_t * ps);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef mbrtoc32
size_t mbrtoc32(char32_t * pc32, const char * s, size_t n, mbstate_t * ps);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef c32rtomb
size_t c32rtomb(char * s, char32_t c32, mbstate_t * ps);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef qsort_r
void qsort_r(void * array, size_t count, size_t elementsize, int (*comparefunction)(const void * element1, const void * element2, void * arg), void * arg);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef arc4random
uint32_t arc4random(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef arc4random_buf
void arc4random_buf(void * buf, size_t nbytes);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef arc4random_uniform
uint32_t arc4random_uniform(uint32_t upper_bound);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

#if !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__)
#ifndef __stdc_threaderrnoptr
int * __stdc_threaderrnoptr(void);
#endif

#endif /* !defined(__STDC_LIBAPI__) || (0 <= __STDC_LIBAPI__) */

__END_DECLS

#endif /* CLIB_STDC_PROTOS_H */
