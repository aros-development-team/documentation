=====
WaitX
=====
.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <waitforport>`_ `Next <which>`_ 

---------------

Name
~~~~
::


     WaitX


Synopsis
~~~~~~~~
::


     D=DATE/K,T=TIME/K,YR=YEARS/K/N,MN=MONTHS/K/N,DY=DAYS/K/N,H=HOURS/K/N,
     M=MINS/K/N,S=SECS/K/N,L=LOOP/K/N,A=ALWAYS/S,V=VERBOSE/S,HELP/S,CMDLINE/F


Location
~~~~~~~~
::


     C:


Function
~~~~~~~~
::


     WaitX will wait for a given amount of time and then it
     will execute the given command.


Inputs
~~~~~~
::


     D=DATE     -- Waits until DATE has been reached
     T=TIME     -- Waits until TIME has been reached
     YR=YEARS   -- How many years to wait
     MN=MONTHS  -- How many months to wait
     DY=DAYS    -- How many days to wait
     H=HOURS    -- How many hours to wait
     M=MINS     -- How many minutes to wait
     S=SECS     -- How many seconds to wait
     L=LOOP     -- How many times to execute CMDLINE
     A=ALWAYS   -- Execute CMDLINE every set interval/time/date
     V=VERBOSE  -- Print extra info on what waitx is doing


Notes
~~~~~
::


     Based on Public Domain WaitX:
         http://aminet.net/package/util/cli/waitx
         Programming: Sigbjørn Skjæret <cisc@c2i.net>
         Idea & Docs: Nicholas Stallard <snowy@netphile.de>


Bugs
~~~~
::


     Will not return  to prompt while waiting. This is intended.


