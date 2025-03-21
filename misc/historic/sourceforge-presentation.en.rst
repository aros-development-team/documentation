:Author: Adam Chodorowski
:Copyright: Copyright © 2001, The AROS Development Team
:Version: $Revision$
:Date: $Date$

The AROS Research OS (AROS, http://www.aros.org/) is an effort to implement an
Open Source and portable operating system that is API compatible (and binary
compatible on Amiga computers) with AmigaOS 3.1. Originally, it was meant as
a direct reimplementation, but Open Source projects being what they are there
has also been improvements made over the existing AmigaOS in several areas. This
has been quite successful, and some parts of our code has been used in never
versions of the official AmigaOS (versions 3.5 and 3.9).

The relation between us and Amiga, Inc. (the company that owns the original
AmigaOS) are quite friendly, so we are not concerned that they will suddenly sue
us or something like that. We do however make sure that we don't infringe on any
patens. Also, the project (ie. the CVS and web server) is located in Germany,
where it is perfectly legal to reimplement and reverse engineer to gain
interoperability.  

The project is currently 7 years old and can be regarded as quite mature. As of
writing, 76.83% of the AmigaOS API has been implemented, and a lot of third
party sources ported. The OS is not fully usable totally standalone yet (well,
it depends on what you want to do I guess), but we're getting quite close... 

There are two different 'flavors' of AROS; one that runs hosted on top of some
other OS (Linux/i386, Linux/m68k, FreeBSD/i386, NetBSD/i386) and the other that
runs natively on 'bare hardware' (currently, the i386 native port is most
complete, but there are work being done on ports to palm and amiga hardware).

The SourceForge resources we intend to use are primarily for distributing
snapshots and releases and mirroring of the web server content. We already have
mailing lists and CVS set up on a server using bandwidth donated by a private
company (Trustec, http://www.trustec.de/). We have until recently also had an
FTP server for the distribution there, but unfortunately (well, kind of :-)) the
project has become to popular and generates too much traffic for them, so they
asked us to reduce it. At this time we were generating 10 GB/month of traffic,
but hopefully this will not be an problem for SourceForge. In the future we
might want to use more of SourceForge's services, for example auxiliary mailing
lists for specific topics or the excellent Compile Farm. 

[Note: The project's coordinator and founder is Aaron Digulla (he has contacted
SourceForge sometime earlier), but since he seems to be very busy at the moment,
I have taken this liberty of contacting SourceForget myself. I'm sure he doesn't
mind. :-)]
