=============================
Summary: Miscellaneous topics
=============================

:Authors:   Sven Drieling
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Finished.

.. Contents::



Abstract
========

Summary of miscellaneous topics discussed on the aros-dev mailinglist during
January 2002.



Webspace, Download, CVS
=======================

Sebastian Heutling <sheutlin@mail.cs.uni-magdeburg.de>:

If we don't get into sourceforge we could try savannah:
http://savannah.gnu.org/



Datatypes
=========

netpbm.datatype
---------------

I have laying around a netpbm.datatype here.

It uses NetPBM to load any picture, so we just need to port NetPBM (very
portable) to AROS to have access to every human known pictureformat on the
planet.

(Joerg Dietrich <Dietrich_Joerg@t-online.de>)



Cygwin
======

License
-------

> > Please be aware that cygwin is GPL and everything that is linked with
> > the cygwin DLL has to made GPL also.

> AFAIK it's only if you link against the cygwin dll, which if you're building
> native or a straight win32 application you don't need to do this anyway.
> The advantage cygwin has over mingw is that cygwin comes complete with a
> POSIX-compliant gnu tool chain which IIRC is necessary for building.

Oh, but you can link with libcygwin.a and avoid this restriction.
Please see the note at https://cygwin.com/licensing.html

(Phill Wooller, Johan Grip <ogun@smaug.moranet.se>)

