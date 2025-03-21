======================================================
AROS Application Development Manual -- Localizing AROS
======================================================

:Authors:   Olivier Adam, Matthias Rustler
:Copyright: Copyright (C) 1995-2008, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Work in progress.

.. Contents::


Introduction
''''''''''''

The *locale.library* provides us with tools to localize applications.
Localized strings are stored in separate language catalog files. A user can
enable one or more languages in the preferences editor "Locale". When a
localized application is started, it first tries to open a catalog for one of
the selected languages. If this fails it falls back on the application's
built-in language, which is usually English.

An important support tool for localization is *FlexCat*. It performs the
following tasks:

+ Create new catalog translation files
+ Update catalog translation files
+ Create catalog files

The AROS build system has a macro which translates all catalog translation
files in a particular directory into catalog files.

Currently, AROS supports only the ISO-8859-1 character set, which means you
are limited to Western European languages. (Well, there is a workaround, but
this requires that you additionally select a font with a fitting encoding.)

This document gives you a work-flow for localizing applications, adding
localization to existing applications, or creating catalog files for existing
localized applications.



Prepare your application for localization
'''''''''''''''''''''''''''''''''''''''''

Locale.library
~~~~~~~~~~~~~~

The most important functions of locale.library for localizing are
`OpenCatalog()`_, `GetCatalogStr()`_, and `CloseCatalog()`_. AROS
applications often have the files `locale.c` and `locale.h` with some wrapper
functions. The function "_" (yes, the underline is the function name) returns
the string for a given message ID. It is written in such a way that it falls
back to the built-in language when a catalog can't be opened. The function
"__" additionally casts the string to an IPTR. This is useful for many Zune
applications.

Note that a version number of 0 means that any version of the catalog can be
opened, while any positive number means: open the catalog with the given
version number.

locale.c::

    #include <exec/types.h>
    #include <proto/locale.h>

    #define CATCOMP_ARRAY
    #include "strings.h"

    #define CATALOG_NAME     "myapp.catalog"
    #define CATALOG_VERSION  3

    struct Catalog *catalog;


    CONST_STRPTR _(ULONG id)
    {
        if (LocaleBase != NULL && catalog != NULL)
        {
            return GetCatalogStr(catalog, id, CatCompArray[id].cca_Str);
        }
        else
        {
            return CatCompArray[id].cca_Str;
        }
    }

    VOID Locale_Initialize(VOID)
    {
        if (LocaleBase != NULL)
        {
            catalog = OpenCatalog(NULL, CATALOG_NAME, OC_Version, CATALOG_VERSION, TAG_DONE);
        }
        else
        {
            catalog = NULL;
        }
    }

    VOID Locale_Deinitialize(VOID)
    {
        if(LocaleBase != NULL && catalog != NULL) CloseCatalog(catalog);
    }


locale.h::

    #ifndef _LOCALE_H_
    #define _LOCALE_H_

    #include <exec/types.h>

    #define CATCOMP_NUMBERS
    #include "strings.h"

    CONST_STRPTR _(ULONG ID);       /* Get a message, as a STRPTR */
    #define __(id) ((IPTR) _(id))   /* Get a message, as an IPTR */

    VOID Locale_Initialize(VOID);
    VOID Locale_Deinitialize(VOID);

    #endif /* _LOCALE_H_ */


Modify the code of you application
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Replace all strings which should be translate-able by a call of the "_"
function with a message identifier as the parameter.

E.g. ``puts("Hello world");`` becomes ``puts(_(MSG_HelloWorld));``

These IDs must be unique and should give the translator a hint about the usage
of the strings.

E.g.: MSG_ERR_Application, MSG_MEN_Open, MSG_GAD_Cancel

Include `locale.h` with ``#include "locale.h"`` in all source files which now
contain message identifiers.

Call the functions `Locale_Initialize` at the init stage of your application,
and call `Locale_Deinitialize` during its clean-up.


Catalog description file
~~~~~~~~~~~~~~~~~~~~~~~~

The next step, is to create a catalog description file. Create a subdirectory
with the name `catalogs`. Put a file with the name `myapp`.cd in this
directory.

The format of this file is::

    message ID (ID number/min. string length/max. string length)
    native string

In most cases, you won't need the attributes within the round brackets and
will simply write `(//)`. No empty lines are allowed in the file, and comments
start with ";".

Example::

    MSG_HelloWorld (//)
    Hello World
    ;
    MSG_ERR_Application (//)
    Can't create application
    ;
    MSG_GAD_Cancel (//)
    Cancel

If you want to split a string over several lines you have to append ``\`` to
the lines.


Build system
~~~~~~~~~~~~

The *locale.library* searches for the catalogs in two places:
`PROGDIR:Catalogs` and `LOCALE:Catalogs`, of which the latter should be used
for AROS system applications only. A location should be decided upon, and
a MetaMake file (mmakefile.src) should be created in the appropriate
`catalogs` directory.

An example of a MetaMake file for catalogs in `LOCALE:Catalogs`, when you're
localising an AROS system application::

    include $(TOP)/config/make.cfg

    %build_catalogs mmake=workbench-utilities-myapp \
                name=myapp subdir=System/Utilities


An example of a MetaMake file for catalogs in `PROGDIR:Catalogs`. The
directory should be a subdirectory of your application's directory::

    include $(TOP)/config/make.cfg

    CATDIR := $(CONTRIBDIR)/Utilities/myapp/Catalogs

    #MM contrib-utilities-myapp-catalogs

    %build_catalogs mmake=contrib-utilities-myapp-catalogs \
                name=myapp subdir= dir=$(CATDIR)


The MetaMake file for the application has to take the MetaMake target
for the catalogs as prerequisite. This ensures that the header with
the strings is rebuild when the catalog description has changed.

If you have followed the instruction above, it would be a good idea to test
whether the application still builds. Call `make` in the AROS directory.

If everything works well you should now have the file ``strings.h`` in the
directory with the source code of your application.



Localizing
''''''''''

Catalog translation file
~~~~~~~~~~~~~~~~~~~~~~~~

Before starting a translation, *LOCALE:Languages/* should be checked to see
whether the intended language is indeed supported by AROS.

Once confirmed the application can finally be translated into another
language. Enter the `catalogs` subdirectory and create a language translation
file with the *FlexCat* tool. *FlexCat* must be in the search path. The file
name must be same name as in `LOCALE:Languages`, but with a `ct` suffix,
rather than `language`.

e.g.::

    FlexCat myapp.cd NEWCTFILE=deutsch.ct
    FlexCat myapp.cd NEWCTFILE=français.ct

The result file will look like this::

    ## version $VER: XX.catalog XX.XX ($TODAY)
    ## language X
    ## codeset 0
    ;
    ;
    MSG_HelloWorld

    ; Hello World
    ;
    MSG_ERR_Application

    ; Can't open application
    ;
    MSG_GAD_Cancel

    ; Cancel

Replace the 'X' with valid information and fill the empty lines with the
translated strings.

Sometimes the strings to be translated contain placeholders, like %d, %s, etc.
It's important that you keep these placeholders in the translated strings in
the same order.

*FlexCat* allows some control sequences, like \\n (newline) and \\f
(formfeed). See the *FlexCat* documentation for more possibilities.

Complete translation file::

    ## version $VER: myapp.catalog 3.1 (18.04.2006)
    ## language deutsch
    ## codeset 0
    ;
    ;
    MSG_HelloWorld
    Hallo Welt
    ; Hello World
    ;
    MSG_ERR_Application
    Kann Applikation nicht erzeugen
    ; Can't create application
    ;
    MSG_GAD_Cancel
    Abbrechen
    ; Cancel

Note that the version number (in this case "3"), should match the version
number used in `OpenCatalog()`_.

Now you can call `make` again to test if the catalogs are created.


Updating
~~~~~~~~

One of the strengths of *FlexCat* is that it can update catalogs without
deleting existing strings::

    FlexCat myapp.cd deutsch.ct NEWCTFILE=deutsch.ct



Directories
'''''''''''

Typical source layout of a localized application::

    myapp
        mmakefile.src
        main.c
        main.h
        ...
        locale.c
        locale.h
        strings.h
        Catalogs
            mmakefile.src
            myapp.cd
            deutsch.cd
            français.ct
            ...

Resulting binary layout::

    MyApp
    Catalogs
        deutsch
            MyApp.catalog
        français
            MyApp.catalog
        ...



Localization for non-developers
'''''''''''''''''''''''''''''''

You don't need to be a developer to create or update catalogs for
applications that have already been localized. You do need the AROS source
code, and the preferred method to get that is from the Subversion archive.
Using subversion will allow you to commit your changes yourself.
Alternatively you could get the source from the download page. In that case,
however, you would then need someone else to commit your work in the archive.

After obtaining the catalog translation files, you can update them or create
additional catalog translations as described above. A Windows port of the tool
*FlexCat* is available at https://archives.arosworld.org.

Some applications and Zune classes are maintained outside of AROS
(e.g. MUIbase, toolbar.mcc are available at https://sourceforge.net).
You can indirectly support localized AROS versions if you do the
translation in those repositories.


.. _OpenCatalog():   ../autodocs/locale#opencataloga
.. _GetCatalogStr(): ../autodocs/locale#getcatalogstr
.. _CloseCatalog():  ../autodocs/locale#closecatalog

