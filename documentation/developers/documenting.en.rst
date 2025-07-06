=========================
AROS Documentation Manual
=========================

:Authors:   Adam Chodorowski, Matthias Rustler
:Copyright: Copyright (C) 1995-2025, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Work in progress.

.. Warning::

   This document is not finished! It is highly likely that many parts are
   out-of-date, contain incorrect information, or are simply missing
   altogether. If you want to help rectify this, please contact us.

This manual describes the AROS documentation system. It is intended to be read
by documentation writers as well as developers wishing to extend, or tinker
with, the system itself. To this end, the manual is split into three parts:
a common introduction to the system, a description of how to use it for
writing documentation, and technical notes and specifications. Apart from
information about using the system itself, the second chapter also contains
some general guidelines to follow when writing documentation for AROS.


.. Contents::


Introduction
============

Documentation is vital for the any project, making it *useful*. Usually,
in a project with such a limited developer efforts as ours, documentation is
"significantly delayed". Also, most of programmers aren't that good at
writing documentation, thus that what is indeed written often isn't all that
readable. It's necessary to combine the efforts of developers and users in
documenting to reach the goal of an "AROS Ultimate Documentation".
So, if you happen to know a user who could help out ... now is the time! =)

*FIXME: Write more?*




Writing documentation
=====================

The documentation format we use is reStructuredText (or ReST for short) as
specified by the `Docutils Project`__. ReST is an easy to read and write,
what-you-see-is-what-you-get, extensible, plain-text mark-up syntax.

You can describe it as a hybrid between an implicit mark-up syntax and an
explicit mark-up syntax, which makes it easy to learn and highly readable
while still being powerful and extensible. The
`Introduction to reStructuredText`__ contains some good points about the goals
of the syntax.

Since the format is basically plain-text, it is very easy to learn by simply
inspecting existing documentation and using some common sense, but
nevertheless it is recommended to at least quickly read through the
`ReStructuredText Primer`__ before starting to work on AROS documentation.

For more information about the format, the following document is recommended
for reading:

+ `Quick reStructuredText Reference`__

__ https://docutils.sourceforge.io/
__ https://docutils.sourceforge.io/docs/ref/rst/introduction.html
__ https://docutils.sourceforge.io/docs/user/rst/quickstart.html
__ https://docutils.sourceforge.io/docs/user/rst/quickref.html



The documentation archive
-------------------------

In order to change or write documentation you need a clone of the
`Git repository <git>`_ 'documentation'. The archive contains:

+ some common documents, like contact.en, links.en, etc.
+ a directory 'db' with some database facts about the project
+ a directory 'documentation' with user and developer documentation
+ a directory 'images' with images used on our pages, like banners and logos.
  This directory must be in place, because the scripts look for images here.
+ a directory 'introduction' with an introduction to the project, found in
  the relevant menu of a website
+ a 'misc' directory with some additional stuff
+ a directory 'news' with the news updates which you see on the main page.
  Filenames in news/data have format of YYYYMMDD.<suffix>
+ a directory 'pictures' with some images related to developers' photos and
  a screenshot gallery
+ a directory 'scripts' with the scripts used to build the HTML and WWW
  targets
+ a directory 'targets' with additional files needed to build targets
+ ...

.. Note::

    Both the Subversion archive and the included directory with the user and
    developer manuals have the name 'documentation'. Don't mix them up.



Subdirectories
--------------

It's possible to create additional directories in 'documentation/users' and
'documentation/developers'. The build system recursively scans the
subdirectories. It is recommended that you create a file 'index.en' in
any new directory.



Internationalization
--------------------

The build system supports internationalization for the 'www' target. To make
this possible, every document filename should have a language suffix appended
(e.g. commands.en). Currently there is support for English (.en),
German (.de), Finnish (.fi), Italian (.it), Russian (.ru), Swedish (.sv)
and Dutch (.nl). If you wish to translate documentation into more languages
then please contact us via the `website mailing list`__.

When you create a link to a document, you have to omit the suffix
(e.g \`Commands <user/commands>\`_). But if you use the 'include' directive
for translated documents, you must keep the suffix.

The build system uses the English version when no translated page is
available.

__ ../../contact#mailing-lists



Sample code
-----------

The directory '{{ devdocpath }}samplecode' is for source code
examples. The content is copied unmodified to the targets.



Pictures
--------

The names and paths of the pictures are hard-coded in the python script
'buildit.py'. If you want to add pictures you have to change the script.
Feel free to make a feature request in the developer mailing list if
you want this to be changed.



Autodocs
--------

Autodocs are a method to embed documentation in source code. It is mainly used
for Shell commands and functions of runtime and linker libraries.

The rules for an autodoc block are:

+ Block must start with a slash and at least 6 stars. (it's usually a line
  with 77 stars.)

+ Block ends with at least 7 stars. (again usually 77 stars.)

+ You can find the rules for documenting library functions in the document
  about `system development`__.

+ Autodocs for Shell functions are similar. Here is an example for the
  function "Alias"::

    /*****************************************************************************

        NAME

            Alias

        SYNOPSIS

            NAME,STRING/F

        LOCATION

            Sys:c

        FUNCTION

            Alias allows you to create an alternate name for other DOS commands.
            If Alias is used with no parameters, it will display the current
            list of Aliases defined within the current shell.

            Using a pair of square brackets within an alias allows you to
            provide the 'new' dos command with parameters.

            If no parameters are specified, the current list of aliases are
            displayed.

        INPUTS

            NAME    - The name of the alias to set.

            STRING  - The value of the alias NAME.

        RESULT

            Standard DOS error codes.

        NOTES

        EXAMPLE

            Alias DF "Type [] number"

                By typing "DF S:Shell-Startup" in the shell, you are actually
                executing the command "Type S:Shell-Startup number". This will
                display the contents of the S:Shell-Startup file in the shell
                with line numbers on the left hand side.

        BUGS

        SEE ALSO

            Unalias

        INTERNALS

    ******************************************************************************/

+ The titles (NAME, SYNOPSIS, etc.) must be written in upper case and must
  start at column 5.

+ The text blocks should start at column 9.

+ If you want to mark a function as internal put the letter "i" somewhere
  within the first 6 stars in the initial comment line. This way the autodoc
  is ignored by the build script.

+ The "SEE ALSO" chapter is parsed and hyperlinks are created. The rules are:

  - The entries must be separated by comma or newline.

  - A solitary name is interpreted as Shell command.

  - A name with round brackets (e.g. "Draw()") is interpreted as function
    which exists in the same library.

  - An entry like "exec.library/FreeMem()" causes a link to the document of
    the given library.

  - A path which ends with ".h" (e.g. "graphics/bitmap.h") is turned into a
    link to a header file.

  - Anything else is just interpreted as plain text.


The autodocs are translated to the ReST format by the script "autodoc.py".
This script can be called from the main build script like this::

    ./build alldocs

The script must have access to the AROS source code. Thus the AROS sources
and the documentation archive must be checked out like this::

    AROS
        ...
        workbench
        ...
        documentation
            scripts

__ sys-dev/system-development



Commit
-------

Before you commit the new or modified documents you should `build`__ both the
HTML and WWW targets locally. Look for error messages and fix them. Check the
result in a web browser. Normally, the changes are applied to
http://www.aros.org within one day after a commit.

__ building_



Style guide
-----------

+ Be consistent.

+ Enable 8 bit character sets like ISO8859-1 in your text editor.

+ Don't use slang abbreviations, like "apps", "docs".

+ For apostrophes use only ``'`` (decimal ASCII code 39).
  Don't use accent characters for this.

+ Insert line breaks. Don't make lines longer than 80 characters.




Technical notes
===============

Databases
---------

There are several small databases, which you can find in the ``db`` directory,
all of which are plain text files but using a couple of slightly different
formats. This is mostly a historical artefact and should perhaps be rectified
in the future, but for now it's easiest to keep them as-is.



credits
~~~~~~~

This is a list of people which have contributed to AROS. The build system
first creates the file 'credits.en'. This file is used for both WWW and HTML
targets. Please note that you also have to change the file
workbench/system/AboutAROS/db/credits in the AROS repository.



quotes
~~~~~~

Remarkable quotes of AROS celebrities. The format is spell;author. The build
system copies this file to the WWW target.



mirrors
~~~~~~~

Since AROS is hosted on Sourceforge there aren't any mirrors. This file
is ignored by the build system.



tasks
~~~~~

TO-DO database. This file hasn't been maintained for a long time and isn't
used for the targets.



Sizes
~~~~~

The files ``aros.size`` and ``contrib.size`` aren't used any more and will
probably be deleted.



Building
--------

Requirements
~~~~~~~~~~~~

You will need the following to build the AROS documentation from scratch:

+ Python__ 2.2.1

To build the website you will additionally need:

+ The `Python Imaging Library`__ 1.1.3

MacOS X comes with Python pre-installed, but to build the website
you will need:

+ The `MacPorts`__ package

+ The `MacPorts Python Imaging Library`__ 1.1.3

__ https://www.python.org/
__ https://pypi.org/project/pillow/
__ https://www.macports.org/
__ https://trac.macports.org/browser/trunk/dports/python/py-pil/


Setting up
~~~~~~~~~~

Before you can start building the documentation, there might be some set-up
required if the needed version of the Python interpreter is not named "python"
on your system. If it is, you can simply skip this section.

First, copy the default settings::

    % cd AROS/documentation/scripts/config
    % cp defaults user

Next, edit the ``user`` file and make sure that the variables are correct for
your system. An example configuration file might look like this::

    PYTHON=python

``PYTHON`` indicates the name of the Python interpreter; it may also be an
absolute path if you don't have it in the search path. You might need to set
it to ``python2`` or ``python2.2`` on some systems.


Targets
~~~~~~~

Two targets are currently supported:

+ ``www``

  This target generates the AROS website which includes all documentation, the
  news, picture galleries with thumbnails and status information. The
  documentation will integrate nicely with the rest of the site.

+ ``html``

  This target generates standalone HTML from the documentation, suitable for
  offline viewing and inclusion into documentation packages.


Procedure
~~~~~~~~~

To build a specific target, simply invoke the build script with the target
name as the first argument. The current directory needs to be the root of the
documentation tree. For example, to build the website do::

    > cd AROS/documentation
    > ./build www

If you want to build the standalone HTML documentation::

    > cd AROS/documentation
    > ./build html

Tip: adding a language suffix (e.g. en, fi or it) after the target name
generates only pages for that given language. All missing or non-translated
pages are off course still substituted with their English counterparts. This
results in strongly decreased compile times. ::

    > cd AROS/documentation
    > ./build www fi


The generated files will be put in ``../bin/documentation/<target-name>``,
e.g. ``../bin/documentation/www`` for the ``www`` target. Specific language
files are put into ``../bin/documentation/<target-name>/<language-name>``.

Additionally, there is a ``clean`` target, which will delete the entire
``../bin/documentation`` directory.

.. Note::

    Currently, you can't use a read-only file system for the source
    directories, as quite many intermediate files are generated there. If
    you've checked out the sources from Git there's no need to worry: the
    generated files are ignored as appropriate.

