==================
AROS Debuggausopas
==================

:Authors:   David Le Corfec
:Copyright: Copyright © 2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Work in progress.

Tämä manuaali selvittää AROS:in debuggaukselle oleelliset optiot.


.. Contents::


--------
Esittely
--------

Suurimmalle osalle kehittäjistä on helpointa koodata ja debugata käyttämällä
AROS:ia joka toimii Linux:issa (mikä onkin suosituin ympäristö) tai BSD:ssä.
Tällä tavoin voit käyttää GDB:tä AROS:in debuggaamiseen. Ennen AROS:in
kääntämistä täytyy configure skripti ajaa parametrilla ``--enable-debug``.
Huomaa että debuggauksessa tarvittava tieto voi moninkertaistaa AROS:in
vaatiman levytilan.

Matalan tason raudalle vääntäjät todennäköisesti mieluummin käyttävät
sarjaportin välityksellä toimivaa debuggausta natiiviporttaukseen.

Ohjelmistosuunnittelijoiden täytyy varmistaa että heidän ohjelmansa
vapauttavat kaikki varaamansa resurssit. AROS:in mukana tulee muutama työkalu
tähän tarkoitukseen.

---------------
Debug tulosteet
---------------

::

    #define DEBUG 1
    #include <aros/debug.h>
    ...
    D(bug("value1=%ld, path=%s", value, path));

``D()`` makro laajeneen ei-miksikään jos ``DEBUG`` on 0 tai jätetty
määrittämättä. Käytä ``bug()`` makroa/funktiota jos sinun tarvitsee pakottaa
jotain tulostetta näkyviin riippumatta ``DEBUG``:in arvosta. Käyttö on
samanlainen kuin ``printf()`` funktiolla. Isännöidyssä versiossa tuloste näkyy
siinä konsolissa josta AROS käynnistettiin.

----------------------------
Isännöity AROS: GDB:n käyttö
----------------------------

Voit ajaa AROS:in joko GDB:n alaisuudessa taikka käyttää GDB:tä AROS:in
kaatumisen jättämälle core dump:ille. Älä unohda kääntää AROS:ia debug
moodissa (``./configure --enable-debug; make``).


Ajon aikainen debuggaus
=======================

Käynnistä GDB::

    > cd /AROS/bin/linux-i386/AROS/
    > gdb aros
    GNU gdb 6.0-debian
    Copyright 2003 Free Software Foundation, Inc.
    GDB is free software, covered by the GNU General Public License, and you are
    welcome to change it and/or distribute copies of it under certain conditions.
    Type "show copying" to see the conditions.
    There is absolutely no warranty for GDB.  Type "show warranty" for details.
    This GDB was configured as "i386-linux"...
    (gdb) 

Käynnistä sitten AROS::

    (gdb) r
    Starting program: /AROS/bin/linux-i386/AROS/aros 
    (... lots of debug output follow ...)

Voit antaa AROS:ille argumentteja kirjoittamalla ne ``r`` komennon perään.
Keskeytä AROS:in ajo CTRL-C:llä, joka palauttaa sinut takaisin GDB:n
promptiin. Käytä komentoa ``help`` apua varten ja ``q`` poistuaksesi GDB:stä
:-)


Kaatumisen jälkeinen debuggaus
==============================

Ensinnäkin on sinun sallittava code dump tiedostojen luonti, esim. käyttäen
``ulimit`` komentoa Bash shellissä. Sen jälkeen aja AROS luodaksesi code
dump:in::

    > cd /AROS/bin/linux-i386/AROS/
    > ulimit -c unlimited # see your shell manual to enable core dumps
    > ./aros
    Quit (core dumped)

Nyt voit käynnistää GDB:n antaen sille argumentteina ajettavan aros tiedoston
sekä core tiedoston::

    > gdb aros core
    GNU gdb 6.0-debian
    Copyright 2003 Free Software Foundation, Inc.
    GDB is free software, covered by the GNU General Public License, and you are
    welcome to change it and/or distribute copies of it under certain conditions.
    Type "show copying" to see the conditions.
    There is absolutely no warranty for GDB.  Type "show warranty" for details.
    This GDB was configured as "i386-linux"...
    Core was generated by `aros'.
    Program terminated with signal 3, Quit.
    Reading symbols from /usr/X11R6/lib/libX11.so.6...done.
    Loaded symbols for /usr/X11R6/lib/libX11.so.6
    Reading symbols from /usr/X11R6/lib/libXext.so.6...done.
    Loaded symbols for /usr/X11R6/lib/libXext.so.6
    Reading symbols from /lib/libc.so.6...done.
    Loaded symbols for /lib/libc.so.6
    Reading symbols from /lib/libdl.so.2...done.
    Loaded symbols for /lib/libdl.so.2
    Reading symbols from /lib/ld-linux.so.2...done.
    Loaded symbols for /lib/ld-linux.so.2
    #0  0x40125607 in sigsuspend () from /lib/libc.so.6
    (gdb)


GDB (peruskomennot)
===================

Komento ``help`` antaa apua kaikista GDB:n komennoista. Voit kutsua sitä jojo
suoraan saadaksesi listan tunnetuista aiheista, taikka antaen sille aiheen
taikka komennon nimen (tai sen lyhenteen) josta olet tietoa kaipailemassa.
Suosittelen lukemaan kaikkien seuraavaksi läpi käymiemme komentojen avusteet.

Komento ``bt`` (backtrace) tulostaa jälkiseurannan pinossa olevista
"kehyksistä" (frames). Tässä esimerkkiseuranta CTRL-C:llä tapahtuneen
keskeytyksen jälkeen::

    Program received signal SIGINT, Interrupt.
    0x40125607 in sigsuspend () from /lib/libc.so.6
    (gdb) bt
    #0  0x40125607 in sigsuspend () from /lib/libc.so.6
    #1  0x080531d5 in idleTask (sysBase=0x40231290) at idletask.c:23
    #2  0x08052ba7 in Exec_NewAddTask (task=Cannot access memory at address 0x8
    ) at newaddtask.c:280
    Previous frame inner to this frame (corrupt stack?)
    (gdb) 

Sisin kehys on #0.

Tulostaaksesi tämän hetkisestä kehyksestä saatavilla olevan lauseen arvon
käytä ``p`` (print) komentoa::

    (gdb) p SysBase
    $1 = (struct ExecBase *) 0x40231290

GDB:n ``print`` komento on erittäin tehokas. Se ymmärtää C syntaksia joten voit
tulostaa minkä tahansa kelvollisen lauseen::

    (gdb) p SysBase->IntVects[2]
    $2 = {iv_Data = 0x0, iv_Code = 0x8052f30 <SoftIntDispatch>, iv_Node = 0x4023c528}

Voit käyttää ``print`` komentoa vaikka hex laskimena::

    (gdb) p 0x42 + 0xc0de
    $1 = 49440

Näyttääksesi tuloksen samassa hex muodossa, käytä ``p/x`` komentoa (huomaa
kuinka kutsumme aiemman lauseen uudelleen)::

    (gdb) p/x $1
    $2 = 0xc120

Siirtyäksesi kehyksestä toiseen, käytä ``f`` (frame) komentoa::

    (gdb) f 1
    #1  0x080531d5 in idleTask (sysBase=0x40231290) at idletask.c:23
    23              sigsuspend(&sigs);

Näyttääksesi tämän hetkisen kohdan ympäriltä 10 lähdekoodiriviä, käytä ``l``
(list) komentoa, jota voi käyttää myös jonkin täsmennetyn rivin näyttöön.

Jos olet tekemässä ajon aikaista debuggausta:

+ Ajaaksesi ohjelman (tai käynnistääksesi sen alusta) kunnes keskeytät sen,
  taikka ajo törmää asetettuun keskeytyspisteeseen tai se kaatuu, käytä
  komentoa ``r`` (run), joko ilman vapaaehtoisia parametreja (jotka annetaan
  ajettavalle ohjelmalle) taikka sitten niiden kera;

+ Askeltaaksesi käskyjä käytä komentoja ``s`` ja ``n`` (joista jälkimmäinen
  käsittelee alirutiinien kutsut yhdellä kertaa);

+ Asettaaksesi keskeytyspisteen (breakpoint), käytä komentoa ``b`` rivinumeron
  tai funktion kera.

+ Jatkaaksesi keskeytettyä ajoa, käytä komentoa ``c``.

Komennolla ``q`` poistut debuggerista::

    (gdb) q
    The program is running.  Exit anyway? (y or n) y
    >


GDB (AROS-spesifistä)
=====================

AROS-spesifiset GDB komennot löytyvät tiedostosta ``/AROS/_gdbinit`` joka
asentuu tiedostoksi ``/AROS/bin/linux-i386/AROS/.gdbinit``. GDB lataa tämän
käynnistyessään ja se sisältää seuraavat komennot::

    findaddr - Näyttää moduulin joka sisältää annetun osoitteen
    thistask - Tulostaa tällä hetkellä pyörivän tehtävän (task) tiedot
    liblist - Listaa tällä hetkellä muistissa olevat kirjastot
    devlist - Listaa tämän hetkiset laitteet
    resourcelist - Listaa tämän hetkiset resurssit
    residentlist - Listaa muistiin ladatut komennot, jne.
    taskready - Listaa ajovalmiit tehtävät
    taskwait - Listaa tapahtumaa odottelevat tehtävät
    modlist - Listaa kaikki muistiin ladatut moduulit
    printtaglist - Näyttää annetun taglist:in

Näistä ``findaddr`` on oleellinen debugattaessa ei-ROM koodia (jaettuja
kirjastoja, ohjelmia, ...).

findaddr komennon käyttö
------------------------

Useimmiten tahdot debugata kirjastoja taikka ohjelmia, mutta backtrace antaa
sinulle yhden taikka useampia selvittämättömiä osoitteita::

    Core was generated by `aros'.
    Program terminated with signal 11, Segmentation fault.
    Reading symbols from /usr/X11R6/lib/libX11.so.6...done.
    Loaded symbols for /usr/X11R6/lib/libX11.so.6
    Reading symbols from /usr/X11R6/lib/libXext.so.6...done.
    Loaded symbols for /usr/X11R6/lib/libXext.so.6
    Reading symbols from /lib/libc.so.6...done.
    Loaded symbols for /lib/libc.so.6
    Reading symbols from /lib/libdl.so.2...done.
    Loaded symbols for /lib/libdl.so.2
    Reading symbols from /lib/ld-linux.so.2...done.
    Loaded symbols for /lib/ld-linux.so.2
    #0  0x080c8830 in Intuition_SetAttrsA (object=0x317ceb, tagList=0x402f7504, 
    	IntuitionBase=0x40289dfc) at setattrsa.c:84
    84          result = DoMethodA (object, (Msg)&ops);
    (gdb) bt
    #0  0x080c8830 in Intuition_SetAttrsA (object=0x317ceb, tagList=0x402f7504, 
    	IntuitionBase=0x40289dfc) at setattrsa.c:84
    #1  0x402bd919 in ?? ()
    #2  0x00317ceb in ?? ()
    #3  0x402f7504 in ?? ()
    #4  0x40289dfc in ?? ()
    #5  0x8042bfe0 in ?? ()
    #6  0x404ca36c in ?? ()

Käytä ``findaddr``:ia mille tahansa selvittämättömälle osoitteelle
(luultavasti sisimmälle)::

    (gdb) findaddr 0x402bd919
    Searching in the loaded modules...
    Address found in System:Tests/Zune/list1, which is loaded at 0x402bd454.
    If this is an executable, its .text section starts at 0x402bd460

Seuraavaksi käytä ``add-symbol-file`` komentoa ladataksesi annetun tiedoston
annettuun osoitteeseen::

    (gdb) add-symbol-file Tests/Zune/list1 0x402bd460
    add symbol table from file "Tests/Zune/list1" at
    	    .text_addr = 0x402bd460
    (y or n) y
    Reading symbols from Tests/Zune/list1...done.

Toivottavasti tämä selvitti osoitteet::

    (gdb) bt
    #0  0x080c8830 in Intuition_SetAttrsA (object=0x317ceb, tagList=0x402f7504, 
    	IntuitionBase=0x40289dfc) at setattrsa.c:84
    #1  0x402bd919 in main () at list1.c:107
    #2  0x402bd5d1 in __startup_entry (argstr=0x402bcd24 "\n", argsize=1, 
    	sysbase=0x40232290) at startup.c:102
    #3  0x080580a7 in Dos_RunProcess (proc=0x403f76f0, sss=0x403daac4, 
    	argptr=0x402bcd24 "\n", argsize=1, entry=0x402bd458, DOSBase=0x402a6888)
    	at runprocess.c:123
    #4  0x0806a1c7 in Dos_RunCommand (segList=0x402bd454, stacksize=40960, 
    	argptr=0x402bcd24 "\n", argsize=1, DOSBase=0x402a6888) at runcommand.c:107
    #5  0x40400461 in ?? ()
    #6  0x402bd454 in ?? ()
    #7  0x0000a000 in ?? ()
    #8  0x402bcd24 in ?? ()
    #9  0x00000001 in ?? ()
    #10 0x402a6888 in ?? ()

Joten toivottavasti löydät sitten virheenkin::

    (gdb) f 1
    #1  0x402bd919 in main () at list1.c:107
    107             set(3243243, MUIA_Window_Open, TRUE);

Toista sama kaikille jäljellä oleville osoitteille jotka tahdot selvittää.

thistask komennon käyttö
------------------------

Komento näyttää monenlaista tietoa tällä hetkellä ajossa olevasta tehtävästä
(task). Ei pitäisi olla suuri yllätys että kyseinen informaatio löytyy
osoitteesta ``SysBase->ThisTask``::

    (gdb) thistask 
    Task     SigWait  SigRecvd StkSize   StkUsed Pri Type Name
    -----------------------------------------------------------------------------
    40231fb8 00000000 00000000    40960      872 -128    1 Idle Task


Vinkkejä ja trikkejä
====================

Ohjelman aiheuttama keskeytyspiste x86:lla
------------------------------------------

Jos lisäät rivin::

    asm("int $3");

C-koodiin, aiheuttaa se nk. "trace exception" poikkeuksen ajon aikana.
Kyseinen poikkeus voi olla erittäin hyödyllinen GDB:llä ajettaessa
päästäksemme interaktiiviseen tilaan kun jokin määrätty ehto täyttyy::

    if (byteSize == 112)
        asm("int $3");

-------------------
Resurssien seuranta
-------------------

Resurssien seurantaa (Resource Tracking, tai RT) sellaisena kuin se tunnetaan
useissa muissa käyttöjärjestelmissä ei ole tällä hetkellä AROS:issa
saatavilla, joten sinun täytyy pitää itse huoli resurssien vapauttamisesta.
Löydät täältä muutamia työkaluja jotka auttavat tarkistamaan että ohjelmasi on
siisti.

Muistin seuranta Mungwall:illa
==============================

Jos AROS on konfiguroitu ``--enable-debug``:illa, ``Mungwall`` saadaan
käyttöön. Se pitää kirjaa pienistä alueista muistia ennen ja jälkeen varaamaasi
muistia tarkistaakseen ettet kirjoita ohi rajojen. Tämä tarkistus tehdään
muistin varaus ja vapautus rutiineissa, tai kutsuttaessa
``AvailMem(MEMF_CLEAR)``.

``CheckMem`` komentorivityökalu kutsuu tätä funktiota ja raportoi debug
tulosteeseen (sarjaporttiin natiivissa ja konsoliin isännöidyssä versiossa).
Jos rajanrikkomis virheitä ei ole havaittu se raportoi tämän hetkisen varausten
lukumäärän ja niiden yhteiskoon.

    === MUNGWALL MEMORY CHECK ============
    
    Num allocations: 1579   Memory allocated 3333326

LeakWatch
=========

LeakWatch on tyhmä mutta avulias työkalu. Se pitää kirjaa kokonais muistista
ja Exec objekteista: kirjastoista, laitteista, fonteista, resursseista,
porteista ja semaforeista. Se aiheuttaa käyttämättömien objektien poiston
muistista raportoidakseen todellisen muistin määrän sen jälkeen kun joitain
resursseja on suljettu.

Käynnistä ``LeakWatch`` omassa shellissään käyttäen sitten seuraavia
näppäimiä sen kontrollointiin:

+ ``Ctrl-C`` poistumiseen :-)
+ ``Ctrl-D`` näyttämään resurssien tämän hetkisen tilan
+ ``Ctrl-E`` näyttämään resurssien eron käynnistyksestä asti
+ ``Ctrl-F`` näyttämään resurssien eron edelliseen ``Ctrl-F`` painallukseen
  verrattuna.

``Ctrl-F`` on kaikkein hyödyllisin näppäin komento: käytä sitä ennen
ohjelmasi ajoa ja sen ajon jälkeen. Yhtään resurssia ei tulisi raportoida.
Mutta jos tilanne on toinen:

+ Tarkista että mikään toinen ohjelma ei ole varaamassa resursseja tällä
  hetkellä.
+ Toista ajot. Tarkista ovatko vuodot vakioita.
+ Rajaa paikat joissa vuoto voi tapahtua vähentämällä ominaisuuksia joita
  käytät ja sen jälkeen pois kommentoimalla koodia.

Jos oletat että ohjelmasi aiheutti vuodon AROS kirjastossa, etsi olemassa
oleva testiohjelma tai kirjoita sellainen joka käyttää vuotavia kutsuja
tarkistaaksesi että tilanne on juuri sellainen kuin oletat.


Sekalaisia CLI työkaluja
========================

``C:`` hakemistossa on joitan simppeleitä debuggaus työkaluja.


AROS Shell
----------

Käskytä ``set __debug_mem`` Shellissä kytkeäksesi vapaan muistin raportoinnin
ennen ja jälkeen komentojen ajon, sekä muistin määrän erot. Pääasiassa kuten
``LeakWatch`` pelkälle muistille.

Avail
-----

Käytä komentoa ``Avail`` näyttämään tietoa muistista. FLUSH parametri pakottaa
käyttämättömät objektit siivottavaksi muistista.

Liblist
-------

Liblist näyttää listan tällä hetkellä avoinna olevista kirjastoista sekä
sellaista tietoa kuin versio ja avausten lukumäärä.

Devlist
-------

Kuten ``Liblist``, mutta Exec laitteille.

Vinkkejä ja trikkejä
====================

Mungwall tarkistukset ajoittimessa
----------------------------------

Näppärä ``Mungwall`` trikki on muokata ajoitin (scheduler) kutsumaan
``AvailMem(MEMF_CLEAR)`` jokaisen tehtävän vaihdon yhteydessä jos törmäät
sellaiseen muistin korruptioon jota et saa muuten paikannettua. Tällä tavoin
pakotat muistin tarkistettavaksi aina kun tehtävä on käyttänyt aikalohkonsa.
Hidasta, mutta ei ole keinoa jolla syyllinen karkaisi.


Muistivuodot
------------

+ Totea kuinka paljon muistia on vuotanut ja montako varausta on tehty:
  saadaksesi selville vuodon koon sekä varausten määrän, aja komento
  ``checkmem`` ennen ja jälkeen epäilyttävän ohjelman ajon (älä unohda huuhtoa
  muistia ennen jokaista ``checkmem``:in käyttöä; jos ``__debug_mem`` on
  asetettu, tapahtuu se automaattisesti).

+ Huomioi ``Mungwall``:in sivuefektit:
  96 tavua lisätään jokaiseen varaukseen. Ainoastaan ``checkmem`` antaa
  sinulle todelliset varausten koot.

+ Varattiinko muisti ``AllocVec()`` vai ``AllocMem()`` funktiolla? Lisää
  joitain tavuja määrään jonka ``AllocVec`` varaa ``rom/exec/allocvec.c``:n
  alussa ja tarkista muuttuuko vuodon koko vastaavasti.

+ Koeta identifioida vuotava ohjelma lähettämällä trace exception
  (``asm("int $3)`` x86:ssa) määrätyn varauskoon yhteydessä
  ``rom/exec/allocvec.c``:ssä tai ``rom/exec/allocmem.c``:ssä. Ohjelma on
  tottakai ajettava GDB:ssä jotta tästä olisi jotain hyötyä. Käytä ``bt``
  ja muita GDB:n komentoja määrittääksesi syyn jokaiselle epäilyttävälle
  varaukselle.

+ Kun huomaat mahdollisen vuotokohdan, muuta varauksen kokoa (esim. lisäämällä
  char taulukon varatun struktuurin loppuun) ja tarkista muuttuuko vuodon koko
  vastaavasti.

