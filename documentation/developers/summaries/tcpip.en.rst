===============
Summary: TCP/IP
===============

:Authors:   Sven Drieling
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Finished.

.. Contents::


Abstract
========

This is a summary of the TCP/IP discussion on aros-dev from December 2001.
It covers pro and con points to the bsdsocket API and some ideas to do
TCP/IP inside AROS.

This summary contains comments from:

+ Peter Eriksson
+ Marco Fanciulli <marco.fanciulli@shs.it>
+ Phill Wooller <phillwooller@noelite.freeserve.co.uk>
+ Adam Chodorowski <adam.chodorowski@home.se>
+ Staf Verhaegen <staf.verhaegen@skynet.be>
+ Iain Templeton <iaint@starbug.ugh.net.au>




How to add TCP/IP to AROS?
==========================

1. bsdsocket.library as wrapper for the TCP/IP stack of the underlying OS.
2. Porting AmiTCP 3.0b2
3. Porting the BSD TCP/IP stack
4. Writing own stack.



AmiTCP 3.0b2
------------

+ is stable
+ more or less the same as 4.0
+ for the time being it suits our needs
+ SLIP and CSLIP
+ PPP (from third parties)

I've used this package myself over the last seven years or so. From what I
understand of the AmiTCP boys, release 3.0b2 is more or less the same as 4.0
(the infamous "demo" release).

By my own, personal experience, I can tell for a fact that 3.0b2 is stable.
Over the years, I can't think of one single incident involving AmiTCP 3 (There
are, however, a few known issues concerning the "fingerd" service and the
"telnet" tool. These have been dealt with and solutions should be accessible
from ftp.geekgadgets.org)

No, AmiTCP and the "bsdsocket.library" API isn't an ideal solution for AROS
(nor for AmigaOS), but for the time being it suits our needs which is why I'd
say you're doing the right thing, Henrik.



BSD socket API
--------------

Pro
""""

+ Allow software porting  from other platforms (read as: Unix programs)

+ A brand new, clean TCP/IP service would still have to provide
  some "bsd" wrapper.

+ I think you are all afraid of the Unix code, despite the fact that the BSD
  implementations are considered to be the premier implementations of the
  whole thing, at least by some people.

+ The BSD API is unpopular with whom? AT&T tried to reinvent the API, and
  nobody took that up, so what is wrong with it.

+ Most of the example code in the world uses sockets, all the network
  programming books.

+ If we don't have POSIX compatibility at some level it'll make porting TCP/IP
  applications from any other platform a pain.

+ Personally I don't like the ANDI approach... but maybe I'm too used to
  programming with the BSD socket library. I recently implemented multicast
  support on a set top box over BSDsockets and without any problem whatsoever.
  There are many issues that depend on TCP itself rather than on
  implementations and BSD offer just the instruments useful to avoid or limit
  those issues. Nobody's perfect, but Cisco IOS stack derived from BSD (it's
  different in many ways, but it's a direct BSD derivative) and this has a lot
  of sense and implications for me.

  ... In the document you've indicated I saw
  several "unique features" and "common problem solutions" that are the same
  applied on BSD... I think that we should approach this matter without
  looking beyond the horizon when we have a definitely not so bad solution in
  front of us.

+ You can argue that "we don't need those stinking applications" & I'd agree,
  if there was enough interest to write a web server etc.

+ A lot of Amiga applications uses the BSD API.

+ The problem is AFAIK the fact that you cannot wait for AmigaOS signals
  at the same time you're doing an select(). Say for example you wanted
  to (all at the same time):

  - Wait for event's from the GUI
  - Wait for timer events
  - Do async file IO
  - Do async network IO

  That why you have SelectSignal() (or what it's called) in AmiTCP
  (i.e., select() with a time-out + waiting for signals; which in itself
  suggests that AmiTCP uses them internally somehow).


Contra
""""""

+ I think the Amiga "connectivity" would have been a lot better if
  they would have gone for a more elegant, "Amiga-ish" solution instead.

+ Because it uses the 'everything is a file' philosophy of Unix and not the
  device philosophy of Amiga. It's not the use of sockets that is a problem
  it is the way you access them.

+ Part of the "problem" is that the API is linked into the POSIX way of doing
  things, if you then have a separate POSIX layer for read()/write() calls
  etc., you get a problem. The only one I can quote from the top of my head is
  ioctl().  There are workarounds for the problem: winsock uses ioctlsocket()
  instead, for instance. Having to create another process for blocking calls
  is also a tad painful at times.

+ > OK, what is the difference between say, ioctl(), or setsockopt() and an
  > Amiga-like call such as SetObjectA()?

  Not much, really. The real problem comes when trying to be POSIX-compliant,
  you need an ioctl that can work on files TCP/IP etc. So, you have to avoid
  using those functions for native support unless you go the whole hog and
  move ioctl into dos.library somewhere.

+ A brand new API for network services is something that should look and
  feel like any other OS component. Dealing with network I/O should't be
  much different from dealing with exec messages (or anything similar).

+ I'm just saying that I think everyone should be aware of the danger relying
  on some Unix-style API could mean. "Why even bother developing a webserver
  when there's Apache?" "Why waste time writing a 'finger' utility when I can
  compile some GNU flavor right out of the box?". If I want to run stuff taken
  from the Unix world, then I run Linux. If I want to run stuff taken from the
  AmigaOS world, then I run AROS.

  - The alternative is nobody writing a web server AND we can't use Apache.
    It's a tough call, but I think we ought to have POSIX compatibility.

+ I don't think we should settle for some simple "bsd" API wrapper; it should
  rather be the other way around; a network service acting as an integrated
  piece of the OS core, just like any other runtime component (with an optional
  "POSIX" wrapper).

+ Functions can be stored within devices. However, as long as the architecture
  permits it I/O should be done on an asynchronous basis.

+ Now, as I stated in my last e-mail on this thread my standpoint is that
  whatever solution we go for - no matter what you choose to call it - is
  that the programming interface should be clean, easy to understand and
  in cohesion with the rest of the programming environment. "bsd" is
  anything but this.




Driver
======

A generic "NE2000" network driver should be sufficient for a start (with
PPP for the bandwidth impaired).




Library / Device
================

+ Library for synchronous calls
+ Device for asynchronous calls
+ An other option would be to implement the library in an asynchronous way.
  Each opener would get an own task allocated for it (that the library
  starts up), which handles the asynchronous operations. You would use the
  library in a similar way as Intuition windows, i.e. creating an
  messageport / signal that you pass to the library when initializing.




ANDI
====

*(dead link removed)*

+ > IIRC, ANDI was designed to replace the SANA-II specifications, nothing
    else.

  Not really. ANDI acts as a protocol independent way of dealing with network
  I/O using standard Exec asynchronous device processing. Here's a small
  excerpt from the ANDI technical paper:

+ ANDI was written a few years ago. From what I understand of it, its a draft
  and work in progress.



ANDI is supposed to...
----------------------

+ ...follow "typical Amiga programming paradigms" more closely than
  the existing BSD socket APIs, making it easier for Amiga
  programmers without previous experience in Unix network programming
  to develop Amiga network applications.

+ ...be protocol-independent and extensible to support new protocol
  features in the future.

+ ...not repeat some of the design problems in the BSD socket API, in
  particular problems related to non-blocking I/O, "half closed
  connections" in TCP, and problems in the transition to T/TCP, IPV6,
  SSL, Multicasting and several other new concepts.

+ ...hide as many protocol-specific details as possible from
  high-level network applications, to allow changes or additions to
  protocols without requiring changes to applications.

+ ...be implemented and offered for Amiga protocol stacks *in
  addition* to the existing BSD socket APIs. The old BSD socket APIs
  will remain in place for older applications and for future
  applications ported from Unix, but it is recommended that new Amiga
  applications use ANDI instead.




Writing own TCP/IP stack
========================

+ UDP/ICMP
+ Hardware drivers
+ UDP client
+ BSD or own API
+ Roll Your Own Intranet *(dead link removed)*

You'd probably ignore TCP to start with and implement some UDP/ICMP features
first. To get something that "did something"tm on a network wouldn't be so
hard. (Maybe a day, if you had all the RFC's, source code from linux/wattcp
etc.)

Hardware drivers would be the major problem, if you can write
something that talks to an ne2000 then it's pretty easy to generate the
packet headers necessary for something like a ping. However I haven't seen
an ne2000 in years & PPP can be used over a null modem cable, but then again
PPP is quite complex on the software side.

Once you've got ping working, the next step would be to get a UDP client
working ( not sure what client/servers use UDP though ).

Most emulators seem to support NE2000, although if they use NAT to give the
emulated machine another IP address you may have troubles with ICMP/UDP.

Then of course you've got the political problem as BSD sockets are
unpopular, but as an API it's hard to implement it differently anyway. If
all you're going to do is make an API with different names then has the new
design been worthwhile? Especially as we'd need a POSIX compatibility layer
too.

I do think even implementing our own BSD API would be worthwhile as it's
much easier to test something that you're putting together than something
you've just managed to recompile, especially as the hardware interface is
likely to be completely different & some or all of the AmiTCP code would
have been written to run on big-endian hardware. It would be nice if someone
understood it all as well.




Miscellaneous
=============

Off-topic & I'll probably be a bit unpopular here too, but it would also be
nice if we had support for http://www.rdesktop.org/ (both client and later
a server).

