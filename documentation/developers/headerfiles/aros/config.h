#ifndef AROS_CONFIG_H
#define AROS_CONFIG_H
/*
    This is an automatically generated file.
    DO NOT EDIT!

    Edit $(SRCDIR)/configure.in and $(SRCDIR)/config/config.h.in and rerun configure.
*/

#define AROS_FLAVOUR_NATIVE             1
#define AROS_FLAVOUR_STANDALONE         2
#define AROS_FLAVOUR_EMULATION          4
#define AROS_FLAVOUR_LINKLIB            8
#define AROS_FLAVOUR_BINCOMPAT          16

// Always enabled for ABIv1
#define AROS_DOS_PACKETS                1

#define AROS_AMIGAOS_COMPLIANCE         0

#define AROS_FLAVOUR                    AROS_FLAVOUR_EMULATION

#define AROS_NOMINAL_WIDTH              800
#define AROS_NOMINAL_HEIGHT             600
#define AROS_NOMINAL_DEPTH              8

#define AROS_NESTING_SUPERVISOR         0


#define __AROSPLATFORM_SMP__


/* Defined when the host enforces W^X memory protection: executable
   seglists must then be allocated as dedicated pages via
   kernel.resource instead of from the general memory pool.          */


/* DEBUG options                                                        */

// use atomic's to lock access when outputting debug
#if defined(__AROSEXEC_SMP__)
#define DEBUG_USEATOMIC
#endif

// prefix debug output with the kernel timestamp and calling task
#define DEBUG_TIMESTAMP

#define AROS_SERIAL_DEBUG               0
#define AROS_MUNGWALL_DEBUG             1
#define AROS_STACK_DEBUG                1
#define AROS_MODULES_DEBUG              1

#define AROS_PALM_DEBUG_HACK            0

/* Misc options                                                         */

#define USE_MMU                         1

#define USE_XSHM                        1
#define USE_VIDMODE                     1
#define ENABLE_DBUS                     @ENABLE_DBUS@
#define ENABLE_X11                      1

#endif /* AROS_CONFIG_H */
