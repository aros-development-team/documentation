=====================
Fr�gor och svar (FAQ)
=====================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright � 1995-2007, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::

Vanliga fr�gor
==============

F�r jag st�lla en fr�ga?
------------------------

Naturligtvis! G� till `AROS-Exec forum`__ och l�s tr�darna
och fr�ga allting som du vill. Den h�r FAQ �r uppdaterad med anv�ndarfr�gor,
men forumet �r alltid mest aktuellt.

__ https://ae.amigalife.org/modules/newbb/viewtopic.php?topic_id=1636&start=0


Vad handlar AROS om? 
--------------------

L�s g�rna denna introduktion_.

.. _introduktion: ../../introduction/index


Vad s�ger lagen om AROS?
------------------------

Europeisk lag s�ger att det �r lagligt att anv�nda omv�nd utvecklingsteknik 
(reverse engineering) f�r att f� kompabilitet. Den s�ger �ven att det �r
olagligt att distribuera kunskapen som man f�r av dessa tekniker. Det som
egentligen menas med detta �r att du f�r dissemblera eller studera vilken
mjukvara som helst f�r att skriva ett program som �r kompatibelt med detta
(till exempel s� skulle det vara lagligt att dissemblera Word f�r att skriva
ett program som kan konvertera Word-dokument till ASCII-text).

Det finns naturligtvis undantag: du f�r inte dissemblera mjukvaran om informationen
som du �r ute efter g�r att f� tag p� med andra s�tt. Du f�r heller inte informera
andra om vad du har l�rt dig. En bok med titeln "Windows inside" �r d�rf�r
olaglig eller �tminstone tvivelaktigt laglig.

Eftersom vi undviker dissembleringstekniker och ist�llet anv�nder den kunskap
som redan finns (vilket inkluderar programmeringsmanualer) vilka inte g�r under
n�gon liknande lag, s� kan man inte applicera detta med AROS. Det som r�knas h�r
�r intentionerna i lagen: det �r lagligt att skriva mjukvara som �r kompatibel
med annan mjukvara. D�rf�r �r v�ran �vertygelse att AROS �r skyddat av lagen.

Patent och header files �r ett annat �mne. Vi kan anv�nda patenterade algoritmer
i europa eftersom europeisk lag inte till�ter patent p� algoritmer.
Dock f�r kod som anv�nder algoritmer som �r patenterade i USA inte importeras
till USA. Exempel p� patenterade algoritmer i AmigaOS �r t.ex. sk�rmdragning
och hur t.ex. menyer fungerar. D�rf�r undviker vi att implementera dessa
funktioner p� exakt samma s�tt. Header files m�ste � andra sidan vara kompatibla
men s� olika orginalet som m�jligt.

F�r att undvika problem s� har vi fr�gat om ett officiellt OK fr�n Amiga Inc. De
�r ganska positiva till v�rat arbete men k�nner sig v�ldigt obekv�ma ang�ende den lagliga
inneb�rden. Vi vill uppm�rksamma dig p� det faktum att Amiga Inc inte har
skickat oss brev d�r de uppmanat oss att forts�tta eller upph�ra med utvecklingen.
Olyckligtvis s� har ingen �verenskommelse �nnu blivit gjord, f�rutom att b�da parter
har goda intentioner.


Varf�r siktar ni p� kompabilitet med AmigaOS 3.1?
-------------------------------------------------

Det har p�g�tt diskussioner om att skriva ett avancerat operativsystem med
funktioner fr�n AmigaOS. Dessa diskussioner har avslutats av en bra anledning.
F�rst och fr�mst s� �r alla �verens om att nuvarande AmigaOS kan bli b�ttre,
men ingen vet hur det ska g�ras eller kan komma �verens om vad som ska f�rb�ttras
eller vad som �r viktigt. Till exempel s� vill en del ha minnesskydd (memory
protection), men vill inte betala priset f�r detta (Stora omskrivningar av
tillg�nglig mjukvara och hastighetss�nkningar).

I slut�ndan s� har diskussionerna slutat i heta diskussioner eller �terg�ng till
samma argument om och om igen. S� vi beslutade att starta med n�gonting som
vi visste att vi kunde hantera. Sen n�r vi har erfarenheter f�r att se vad som
�r m�jligt eller inte, s� kan vi besluta om f�rb�ttringar.

Vi vill �ven ha bin�r kompabilitet med AmigaOS. Anledningen till
detta �r just att ett nytt operativsystem utan program inte har n�gon chans att
�verleva. D�rf�r f�rs�ker vi att f� �verg�ngen fr�n AmigaOS till det nya att g�
s� sm�rtfritt som m�jligt (men inte till den grad att vi inte kan f�rb�ttra AROS
i efterhand). Som vanligt, allting har sitt pris och vi f�rs�ker att g�ra genomt�nkta
beslut om vilket pris som det kostar och om alla andra �r villiga att betala det.

Kan ni inte implementera funktionen XYZ?
----------------------------------------

Nej, d�rf�r: 

a) Om det verkligen �r s� viktigt s� borde det finnas i AmigaOS. :-) 
b) Varf�r inte g�ra det sj�lv och skicka patchen till oss?

Anledningen till denna attityd �r att det finns v�ldigt m�nga som tycker att deras
funktion �r viktigast och att AROS inte har n�gon framtid om inte funktionen 
omedelbart implementeras. V�r st�ndpunkt �r att AmigaOS, som AROS siktar p� att
implementera, kan g�ra allting som ett modernt operativsystem kan g�ra. Vi ser
att det finns omr�den d�r AmigaOS skulle beh�va f�rb�ttras inom, men om vi g�r det,
vem skulle skriva resten av operativsystemet? I slut�ndan s� skulle vi d� ha en massa
fina f�rb�ttringar j�mf�rt med AmigaOS som skulle g�ra det mycket sv�rare att anv�nda
redan existerande mjukvara, eftersom resten av operativystemet skulle saknas.

D�rf�r har vi beslutat att v�nta med varje f�rs�k till att implementera stora
nya funktioner i operatisystemet tills att operativsystemet �r mer eller mindre
klart. Vi har kommit ganska s� n�ra m�let nu och det har faktisktutvecklats en del funktioner
i AROS som inte finns tillg�ngligt i AmigaOS.


Hur kompatibelt �r AROS med AmigaOS?
------------------------------------

V�ldigt kompatibelt. Vi f�rv�ntar oss att AROS kommer att kunna k�ra existerande
mjukvara p� Amigan utan problem. P� annan h�rdvara s� m�ste mjukvaran
rekompileras. Vi kommer att erbjuda en preprocessor som du kan anv�nda p� din
kod som kommer �ndra eventuell kod som eventuellt krashar med AROS och/eller
varna om s�dan kod.

Portning av program fr�n AmigaOS till AROS handlar mestandels om en enkel
rekompilering, med vissa f�r�ndringar. Det finns naturligtvis program med
undantag, men det st�mmer f�r de flesta moderna program.


F�r vilka h�rdvaruplattformar finns AROS tillg�ngligt? 
------------------------------------------------------

F�r tillf�llet s� finns AROS tillg�ngligt i en ganska anv�ndbar version som
native och hosted (I Linux och FreeBSD) f�r i386 arkitekturen (IBM PC AT
kompatibla kloner). Det finns portningar under utveckling till SUN SPARC
(Som g�r under Solaris) och Palm-kompatibla handdatorer (native).

Kommer det att finnas en portning av AROS till PPC?
---------------------------------------------------

F�r n�rvarande s� f�rs�ker vi utveckla en portning av AROS till PPC,
initialt hostat under Linux.

Varf�r anv�nder ni Linux och X11?
---------------------------------

Vi anv�nder Linux och X11 f�r att snabba upp utvecklingen. Som exempel, om du
implementerar en ny funktion f�r att �ppna ett f�nster s� kan du enkelt skriva den
funktionen och inte beh�va skriva hundratals andra funktioner i layers.library,
graphics.library, en bunt device driver och �vriga som den funktionen kan t�nkas beh�va.

M�let med AROS �r naturligtvis att bli oberoende av Linux och X11 (Men det skulle
fortfarande vara m�jligt att k�ra p� dessa om anv�ndare verkligen ville), det b�rjar
l�ngsamt bli verklighet med native-verisonerna av AROS. Vi m�ste dock fortfarande 
anv�nda Linux f�r utveckling, eftersom utvecklingsverktygen inte har blivit portade
till AROS �nnu.

Hur ska ni lyckas med att g�ra AROS portabelt?
----------------------------------------------

En av de stora nya funktionerna i AROS j�mf�rt med AmigaOS �r HIDD (Hardware
Independent Device Drivers), som till�ter oss att porta AROS till olika
typer av h�rdvara relativt enkelt. I princip s� pratar libraries till 
operativsystemets k�rna inte direkt med h�rdvaran, utan g�r via HIDD. vilket �r
kodat med hj�lp av ett objektorienterat system som g�r det enkelt att byta ut
HIDD och �teranv�nda koden.

Varf�r tror ni att AROS kommer att lyckas?
------------------------------------------

Varje dag h�r vi fr�n massor av m�nniskor som tror att AROS inte kommer att lyckas.
De flesta vet inte vad vi egentligen h�ller p� med eller att de tror att Amigan
redan �r d�d. Efter att vi har f�rklarat vad vi sysslat med s� h�ller de flesta med
om att det �r m�jligt, men det sistn�mnda �r sv�rare att f�rklara. �r Amigan d�d?
Dom som fortfarande anv�nder Amigan kommer troligen s�ga att den inte �r d�d.
Slutade din A500 eller A4000 att fungera n�r Commodore gick i konkurs? Gick den
s�nder n�r Amiga Technologies konkursade?

Faktum �r att det idag inte utvecklas s� mycket ny mjukvara f�r Amiga (�ven om
Aminet fortfarande tuffar och g�r r�tt s� fint) och att ny h�rdvara �ven utvecklas
mycket l�ngsammare (men de coolaste pryttlarna verkar dyka upp nu).  Amigas Community
(Som fortfarande existerar) verkar sitta och v�nta och om n�gon sl�pper en produkt som
liknar Amigan fr�n 1984, d� kommer den datorn att f� en revival. Vem vet, kanske f�r du en
CD med din nya dator m�rkt med "AROS". :-)


Vad g�r jag om AROS inte vill kompileras?
-----------------------------------------

Skicka ett meddelande med detaljer (Till exempel, felmeddelandena som du f�r)
i hj�lpforumet p� `AROSWorld`__ eller bli en utvecklare och prenumerera
p� "AROS Developer list" och skicka meddelandet d�r, s� f�r du hj�lp.

__ https://www.arosworld.org/


Kommer AROS ha minnesskydd (memory protection), SVM, RT, ...?
-------------------------------------------------------------

Flera hundra Amigaexperter (det �r iallafall vad de s�ger om sig sj�lva) f�rs�kte
f�r tre �r sedan att finna en l�sning f�r att implementera minnesskydd (MP) f�r
AmigaOS. Dom misslyckades. Faktum �r att AmigaOS aldrig kommer att ha MP som
Unix eller Windows NT.

Men man ska inte hoppa �ver �n f�rrens man sagt hej. Det finns planer att
integrera en variant av MP i AROS, som kommer till�ta minnesskydd f�r �tminstone nya
program med st�d f�r detta. En del f�rs�k med detta ser verkligen lovande ut. �r det �ven
ett stort problem om din dator krashar? L�t mig f�rklara innan du spikar upp mig
p� ett tr�d. :-) Problemet �r inte att datorn krashar, utan snarare:

1. Du har ingen aning om varf�r den krashade, egentligen s� slutar det med att
du f�rs�ker peta med en 30 meter l�ng p�le i ett tr�sk med tjock dimma.
2. Du tappar allt du jobbat med, omstart av datorn �r inte n�got stort problem.

N�got som vi kunde f�rs�ka konstruera �r ett system som �tminstone varnar om
n�got suspekt h�nder och som kan s�ga dig i detalj om vad som h�nde n�r datorn
kraschade, som till�ter dig att spara ditt arbete och *sen* krascha. Det kommer
�ven finnas funktioner f�r att kontrollera vad som har sparats s� att du kan vara
s�ker p� att du inte f�r korrupt data.

Samma sak g�ller f�r SVM (swappable virtual memory), RT (resource tracking)
och SMP (symmetric multiprocessing). Vi planerar f�r tillf�llet om hur vi ska
implementera dom, s� vi �r s�kra p� att l�gga till dessa processer kommer att
bli relativt sm�rtfritt. Men, dom har inte h�gsta prioritet just nu, dock har 
en v�ldigt enkel RT utvecklats.


Kan jag bli betatestare?
------------------------

Absolut, inga problem. Faktiskt vill vi ha s� m�nga betatestare som m�jligt,
s� alla �r v�lkomna! Vi f�r dock ingen lista �ver betatestare, s� allt du
beh�ver g�ra �r att tanka hem AROS, testa precis vad du vill och skicka 
en rapport till oss.

Vad har AROS och UAE f�r relation till varandra?
------------------------------------------------

UAE �r en Amiga-emulator, och har d�rf�r lite andra m�l �n vad AROS har.
UAE vill bli bin�r-kompatibel �ven f�r spel och kod med direkt�tkomst till h�rdvaran,
medans AROS vill ha native-applikationer. D�rf�r �r AROS mycket snabbare �n
UAE, men du kan k�ra mer mjukvara i UAE.

Vi har viss kontakt med utvecklaren av UAE och d�rf�r finns det stora
m�jligheter att koden f�r UAE kommer att finnas i AROS och vice versa. Till exempel,
UAE-utvecklarna �r intresserade av k�llkoden i AROS eftersom UAE skulle kunna k�ra
applikationer mycket snabbare om en del OS-funktioner kunde ers�ttas med
native kod. � andra sidan, AROS kan dra f�rdel av att ha en integrerad Amiga-emulator.

Eftersom de flesta program inte kommer att vara tillg�ngliga p� AROS i b�rjan s�
har Fabio Alemagna portat UAE till AROS s� att du �tminstone kan k�ra gamla program i en
emuleringsbox.

�ven `E-UAE`__ finns tillg�ngligt, vilket �r UAE som �r f�rb�ttrat med n�gra
funktioner fr�n `WinUAE`__.

__ http://www.rcdrummond.net/uae/
__ http://www.winuae.net/


Vad har AROS och Haage & Partner f�r relation till varandra?
------------------------------------------------------------

Haage & Partner har anv�nt delar i AROS i AmigaOS 3.5 och 3.9, till exempel
Colorwheel och Gradientslider gadgets samt SetEnv-kommandot. I princip betyder
detta att AROS har blivit en del av det officiella AmigaOS. Detta betyder dock
inte att det finns en formell �verenskommelse mellan AROS och Haage & Partner.
AROS �r ett open source-projekt, d�rf�r kan vem som helst anv�nda v�ran kod
i sina egna projekt f�rutsatt att de efterf�ljer licensavtalet.


Vad har AROS och MorphOS f�r relation till varandra?
----------------------------------------------------

Relationen mellan AROS och MorphOS �r i princip densamma som mellan AROS
och Haage & Partner. MorphOS anv�nder delar i AROS f�r att snabba upp deras
utveckling; enligt licensvillkoren. Precis som med Haage & Partner s� �r detta
bra f�r b�da parter eftersom MorphOS kan snabba upp deras utveckling fr�n AROS
och AROS i sin tur f�r f�rb�ttringar till v�r k�llkod fr�n MorphOS. Det finns
ingen formell �verenskommelse mellan AROS och MorphOS; detta �r hur 
open source-utveckling fungerar.


Vilka programmeringsspr�k finns tillg�ngliga?
---------------------------------------------

Mest utveckling i AROS sker med hj�lp av ANSI C genom att crosskompila
k�llkoderna i ett annat operativsystem, som till exempel Linux eller FreeBSD.
Fabio Alemagna har gjort klart en initial portning av GCC till i386 native. Men den
finns f�r tillf�llet inte i ISO:n eller integrerad i build-systemet.

De spr�k som finns tillg�ngliga i native �r Python_, Regina_, Lua_, Hollywood: och False_:

+ Python �r ett skriptspr�k som har blivit ganska s� popul�rt, pga designen
  och funktionerna (objektorienterad programmering, modult system, m�nga
  anv�ndbara moduler inkluderade, ren syntax, ...) Ett separat projekt har
  startat f�r AROS-portning och kan hittas p�
  http://pyaros.sourceforge.net/.

+ Regina �r en portabel ANSI compilant REXX interpreter. M�let f�r AROS-portningen
  �r att bli kompatibel med ARexx interpreter i AmigaOS.

+ Lua �r en kraftfull, snabb, liten, embedded skriptspr�k. AROS-portningen
  har blivit f�rb�ttrad med tv� moduler: Siamiga och Zulu. Siamiga har n�gra enkla
  grafik-kommandon, Zulu �r ett interface till Zune.

+ Hollywood �r ett kommersiellt programmeringsspr�k f�r multimediaapplikationer
  som inkluderar spel. CD-ROM:en inneh�ller en version f�r i386-AROS.

+ False kan klassifieras som ett exotiskt spr�k och kommer mest troligt att
  inte anv�ndas f�r seri�s utveckling, men det �r ganska kul. :-)

.. _Python: https://www.python.org/
.. _Regina: http://regina-rexx.sourceforge.net/
.. _Lua: http://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/
.. _False:  http://strlen.com/false-language


Varf�r finns det ingen m68k-emulator i AROS?
--------------------------------------------

F�r att kunna f� gamla program att k�ras i AROS s� har vi portat UAE: till AROS.
AROS version av UAE kommer troligtvis att vara lite snabbare �n �ldre versioner
av UAE eftersom AROS beh�ver f�rre resurser �n andra operativsystem. (vilket betyder
att UAE kommer att f� mer CPU-tid). Vi kommer �ven att f�rs�ka att patcha Kickstart ROM
i UAE f�r att ropa p� AROS funktioner som ger en liten f�rb�ttring. Naturligtvis
s� g�ller detta endast native-versionerna av AROS och inte hosted.

Men varf�r implementerar vi inte en virtuell m68k CPU vilket g�r att vi kan k�ra
mjukvaran direkt i AROS? Problemet �r att m68k-mjukvaran f�rv�ntar att datan ska
vara i "big endian format" n�r AROS �ven k�r "little endian CPU". Problemet �r att
"little endian"-rutiner i AROS k�rna skulle beh�va arbeta med "big endian"-data i
emuleringen. Automatisk konvertering verkar i princip vara om�jligt (Till exempel:
Det finns ett f�lt i strukturen i AmigaOS vilket ibland inneh�ller ULONG och ibland
tv� WORD) eftersom vi inte kan s�ga hur ett par bytes i RAM �r enkodade.

.. _UAE: http://www.amigaemulator.org/


Kommer det att finnas en AROS Kickstart ROM?
--------------------------------------------

Eventuellt om n�gon skapar en native Amiga-portning av AROS och g�r allt det andra
jobbet som beh�vs f�r att skapa en Kickstart ROM. F�r tillf�llet s� �r det ingen
som har ans�kt om jobbet.

Mjukvarufr�gor
==============

Hur accessar jag AROS disk-images fr�n UAE?
-------------------------------------------

Diskett-imagen kan mountas som en fil p� h�rddisken och sen anv�ndas som en
1.4 MB h�rddisk i UAE. Efter att du har lagt i filerna i disk-imagen 
(Eller vad du nu vill g�ra), s� kan du skriva den till en diskett.

Geometrin i disk-imagen �r enligt nedan::

    Sectors    = 32
    Surfaces   = 1
    Reserved   = 2
    Block Size = 90


Hur accessar jag AROS disk images fr�n hosted-versioner av AROS?
----------------------------------------------------------------

Kopiera disk-imagen till Diskimages-mappen i AROS (SYS:DiskImages, 
bin/linux-i386/AROS/DiskImages) och d�p om den till "Unit0". Efter att ha
startat AROS s� kan du mounta imagen med::

    > mount AFD0: 


Vad �r Zune?
------------

Om det �r p� denna hemsida som du l�st om Zune, s� �r det egentligen bara
en open-source �terimplementation av MUI, vilket �r ett kraftfullt
(som i anv�ndar- och -utvecklingsv�nligt) objektorienterad shareware
GUI toolkit f�r att utveckla native AROS-applikationer med. Ang�ende
namnet i fr�ga, s� betyder det ingenting, det l�ter bara bra.


Hur kan jag �terst�lla mina inst�llningar (Prefs) till default?
---------------------------------------------------------------

I AROS, �ppna ett CLI-f�nster, g� till Envarc: och ta bort relevanta filer
f�r den inst�llning (pref) som du vill f� tillbaka till default.

Vad �r Graphical(Grafiskt) och other(annat) memory(minne) i Wanderer?
---------------------------------------------------------------------

Denna minnesupdelning �r mest en relik fr�n Amigans ursprung, n�r grafiskt minne
var applikationsminne innan du lade till mer minne, FAST RAM, ett minne d�r applikationerna
hamnade, medans grafiken, ljudet och en del system-strukturer fortfarande residerade
i grafikminnet.

I AROS-hosted s� finns det inte n�got minne som Other (FAST), endast GFX, medans
det finns p� Native AROS, GFX kan ha max 16MB, men detta �terspeglar ej minnesstorleken p�
grafikkortet... Det har ingen koppling till hur stort minnet �r p� ditt grafikkort.

*Det utf�rligare svaret*
Grafikminnet i i386-native visar det undre 16MB minnet i systemet. De undre 16MB �r
i omr�det d�r ISA-kort kan utf�ra DMA. Allokering av minne med MEMF_DMA eller MEF_CHIP
kommer att hamna d�r, resterande hamnar i other (fast) -minnet.

Anv�nd C:Avail HUMAN -kommandot f�r minnes-info.


Vad g�r egentligen Wanderer Snapshot <all/window>? 
--------------------------------------------------

Detta kommando sparar ikonernas placering av alla (eller ett) f�nster.


Hur �ndrar jag sk�rmsl�ckare/bakgrundsbild?
-------------------------------------------

F�r tillf�llet �r det enda s�ttet att �ndra sk�rmsl�ckare att skriva din egen.
Blanker commodity kan �ndras med Exchange, men den finns endast till f�r
att �ndra "starfield" med hur m�nga stj�rnor man vill ha.
Bakgrundsbilden i Wanderer st�lls in med Pref-verktyget Prefs/Wanderer.
Bakgrundsbilden i Zune Windows st�lls in med Zune-verktyget Prefs/Zune

Jag har startat AROS-hosted med den h�nger sig
----------------------------------------------

Om du �r root och AROS krashar vid uppstart, k�r "xhost +" innan
du k�r "sudo && ./aros -m 20". Du m�ste �ven ge programmet minne med -m
optinen enl. instruktion. Mellanslaget mellan "-m" och v�rdet �r viktigt.
Gl�m �ven inte BackingStore-valen i sektionen Device i din xorg.conf.


Vad finns det f�r command line options f�r AROS-hosted exekverbara filer?
-------------------------------------------------------------------------

Du kan f� en lista p� dessa genom att k�ra ./aros -h kommandot.


Hur kan jag f� f�nsterna att uppdateras fr�n svart p� AROS-hosted?
------------------------------------------------------------------

Du m�ste skriva nedanst�ende str�ng (precis som den �r!) till "Device"-delen
av din /etc/X11/xorg.conf (eller Xfree.conf)::
    
    Option  "BackingStore"

L�s Installation__ f�r detaljer.

__ installation#running


Vad finns det f�r optioner till AROS-native kernel i GRUB line?
---------------------------------------------------------------

H�r �r n�gra::

    nofdc           - Avaktiverar floppy driver fullst�ndigt.
    noclick         - Avaktiverar floppy disk change detection (och klickande)
    ATA=32bit       - Aktiverar 32-bit I/O i hdd driver (s�kert)
    forcedma        - Tvingar DMA att vara aktivt i hdd driver (borde vara s�kert, men inte 100%)
    gfx=<hidd name> - Anv�nder namngiven HIDD som gfx-drivrutin
    lib=<name>      - Laddar och initierar namngett library/HIDD

Kom ih�g att kommandona �r skiftl�gesk�nsliga (case-sensitive)


Hur �verf�r jag filer till en virtuell dator med AROS?
------------------------------------------------------

Det f�rsta och enklaste s�ttat �r att l�gga i filer i ISO-imagen och ansluta den
till VM. Det finns massvis med program som man kan anv�nda f�r att skapa/editera
ISO som t.ex. UltraISO, WinImage, eller mkisofs. Nummer tv� �r att s�tta upp ett
n�tverk i AROS och en ftp-server p� din lokala dator.  D� kan du anv�nda
ftp-klienten i AROS f�r att �verf�ra filer (leta efter MarranoFTP). Det kan vara
ganska s� kr�ngligt. Anv�ndardokumentationen inneh�ller ett kapitel om n�tverk,
kolla i denna. Nu finns det �ven ett lovande verktyg (AFS Util) som g�r det 
m�jligt att l�sa (g�r inte att skriva �nnu) filer fr�n AROS AFFS/OFS h�rddiskar och
disketter.


Kompileringsfel
---------------

Q: Jag har kompilat AROS med gcc4 men sett kompilerade AROS-hosted segfaults 
med -m > 20, och om jag kompilerar AROS-native s� startar den inte (svart sk�rm)

A: L�gg till -fni-strict-aliasing till scripts/aros-gcc.in och f�rs�k kompila igen.


�r det m�jligt att g�ra ett DOS-skript som automatiskt k�rs n�r ett paket(package) �r installerat?
--------------------------------------------------------------------------------------------------

Det h�r skriptet borde g�ra en del assigns, l�gg �ven till v�rderna i PATH.

1) Skapa ett underbibliotek S och l�gg till en fil med namnet 'Package-Startup med DOS
kommando till det.

2) Skapa en variabel i envarc:sys/packages -filen som inneh�ller s�kv�gen till S-biblioteket.

Exempel p� mappstruktur::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup
    
Variablen i envarc:sys/packages kan ha namnet 'myapp' (namn spelar ingen roll),
inneh�llet �r sedan 'sys:extras/myappdir'

Package-Startup-skriptet blir sedan anropat av startup-sequence.
    

Hur rensar jag shell-f�nstret? Hur g�r jag det permanent?
---------------------------------------------------------

Skriv detta kommandi i shell::

    Echo "*E[0;0H*E[J* "
    
Du kan editera ditt s:Shell-Startup och l�gga till denna rad n�gonstans, s�
att du har ett nytt "Cls" kommand::

    Alias Cls "Echo *"*E[0;0H*E[J*" "

H�r �r f�rresten mitt egen s:Shell-Startup modifierat f�r att starta shell i svart
och med en modifierad prompt::

    Alias Edit SYS:Tools/Editor
    Alias Cls "Echo *"*E[0;0H*E[J*" "
    Echo "*e[>1m*e[32;41m*e[0;0H*e[J"
    Prompt "*n*e[>1m*e[33;41m*e[1m%N/%R - *e[30;41m%S>*e[0m*e[32;41m "
    date

Lite om printer escape sequences::

    Esc[0m
    Standard Set

    Esc[1m and Esc[22m
    Fetstil

    Esc[3m and Esc[23m
    Kursiv

    Esc[4m and Esc[24m
    Understruket

    Esc[30m to Esc[39m
    V�lj front-f�rg

    Esc[40m to Esc[49m
    V�lj bakgrundsf�rg

Med v�rderna menas::

    30 gr� tecken    -- 40 gr� cell   -- >0 gr� bakgrund   ---- 0 alla attribut av
    31 svarta tecken  - 41 svart cell  - >1 svart bakgrund  --- 1 fetstil
    32 vita tecken    - 42 vit cell    - >2 vit bakgrund    --- 2 faint
    33 bl� tecken    -- 43 bl� cell   -- >3 bl� bakgrund   ---- 3 kursiv
    34 gr� tecken    -- 44 gr� cell   -- >4 gr� bakgrund   ---- 4 underscore
    35 svarta tecken  - 45 svart cell  - >5 svart bakgrund  --- 7 reverse video
    36 vita tecken    - 46 vit cell    - >6 vit bakgrund    --- 8 osynlig
    37 bl� tecken    -- 47 bl� cell   -- >7 bl� bakgrund

Koderna kan kombineras genom att separera dom med semikolon.


Hur startar jag AROS-hosted i helsk�rm?
---------------------------------------

Anropa "export AROS_X11_FULLSCREEN=1" i ett shell. Starta AROS och �ndra
sk�rmuppl�sningen i screenmode preferenses. Avsluta AROS och starta igen.


Hur g�r jag 2-status AROS ikoner?
---------------------------------

AROS-ikoner �r faktiskt omd�pta PNG-filer. Men om du vill ha ikoner i 2-status
(normal/vald) anv�nd detta kommando::

    join img_1.png img_2.png TO img.info
    

Hur mountar jag en ISO-image i AROS? Kan jag uppdatera nightly build p� detta s�tt?
-----------------------------------------------------------------------------------

+ L�gg in ISO:n i AROS (med hj�lp av wget eller annat)
+ Kopiera ISO:n till sys:DiskImages (mappen m�ste bli skapad om den inte finns).
+ D�p om ISO:n till Unit0 i den mappen.
+ Du m�ste l�gga till detta till din Devs:Mountlist ::

    ISO:
    FileSystem = cdrom.handler
    Device = fdsk.device
    Unit = 0

+ Mounta sedan ISO:n:
  Du kan kopiera allting fr�n ISO:. Du kan �ven skapa ett skript f�r att uppdatera dina
  nightly builds::

        copy ISO:boot/aros-pc-i386.gz sys:boot/
        copy ISO:C sys:C all quiet
        copy ISO:Classes sys:Classes all quiet
        copy ISO:Demos sys:Demos all quiet

Och s� vidare f�r varje mapp f�rutom Prefs, Extras:Networking/Stacks, och
devs:mountlist. Prefs m�ste beh�llas om du vill ha det. Du kan �ven st�lla in
AROSTcp att spara inst�llningarna i en separat mapp.

Om du vill skriva �ver allting::

    copy ISO:C sys:C all quiet newer  
    
Hur g�r jag en unmount p� en volym?
-----------------------------------

K�r dessa tv� kommandon i CLI::
    
    assign DOSVOLUME: dismount
    assign DOSVOLUME: remove

d�r DOSVOLUME �r DH0:, DF0:, etc.


Hur mountar jag en FAT floppy med FAT.handler?
----------------------------------------------

Skapa en mountfile (textfil) med de 3 magiska raderna::

    device = trackdisk.device
    filesystem = fat.handler
    unit = 0

+ Anropa med t.ex. PCO. S�tt denna fils default tool till c:mount i properties
  (eller l�gg mountfile i devs:dosdrivers eller sys:storage/dosdrivers)
+ Dubbelklicka p� filen
+ S�tt i en FAT-floppy.
+ Se ikonen framtr�da p� Wanderer skrivbordet.


Hur mountar jag en HD FAT partition med FAT.handler?
----------------------------------------------------

F�rst s� m�ste du l�sa h�rddiskens geometri och skriva ner v�rdena.
Du kan anv�nda HDToolbox eller Linux fdisk. BlocksPerTrack-v�rdet tas fr�n
sectors/track-v�rdet. Notera att det inte har n�gonting att g�ra med den fysiska
diskens geometri -  Fat anv�nder endast detta som en multiplier.
Om du kan f� v�rderna f�r antal cylindrar fr�n HDToolbox eller med hj�lp av
Linux fdisk::

    sudo fdisk -u -l /dev/hda, 
    
Sen s� m�ste du ange v�rderna BlocksPerTrack=63
F�r att vara s�ker p� v�rderna om cylindrar, leta efter Units=Cylinders. Om 
du har f�tt fdisk att visa resultatet i sektorer (sectors)(Units=sectors), ange
v�rdet BlocksPerTrack=1.

LowCyl och HighCyl �r partitionens cylindrar::

    mark@ubuntu:~$ sudo fdisk -l -u /dev/hda
    ...
    /dev/hda1 * 63 20980889 10490413+ c W95 FAT32 (LBA)

Sammanfattningsvis, LowCyl �r 63 och HighCyl �r 20980889, blockspertrack=1

Skapa en mountfile (textfil) med dessa rader::

    
    device = ata.device
    filesystem = fat.handler,
    Unit = 0

    BlocksPerTrack = 1
    LowCyl = 63
    HighCyl = 20980889
    Blocksize=512

+ Anropa den p� valfritt s�tt, FAT0 till exempel
+ S�tt v�rderna p� filens defautl toll till c:mount i properties
  (eller l�gg mountfile i devs:dosdrivers eller sys:storage/dosdrivers)
+ Dubbelklicka p� filen
+ Se ikonen framtr�da p� Wanderers skrivbord

Notering: Formel f�r att r�kna antal blocks:
block = ((highcyl - lowcyl) x surfaces + head) x blockspertrack + sec


H�rdvarufr�gor
==============

Var kan jag hitta en AROS Hardware Compability List?                   
----------------------------------------------------

Du kan finna en p� `AROS Wiki <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__ .
Det kan �ven finnas andra listor av AROS-anv�ndare.

Varf�r kan inte AROS boota fr�n h�rddisken om h�rddisken �r satt som SLAVE?
---------------------------------------------------------------------------

AROS kan boota om h�rddisken sitter p� SLAVE med ENDAST om det �ven sitter en
h�rddisk p� MASTER. Detta �r en korrekt anslutning vilket efterf�ljer IDE-specifikationerna,
och AROS efterf�ljer dessa.

Min dator h�nger sig med en r�d mark�r p� sk�rmen eller en svart sk�rm
----------------------------------------------------------------------

En anledning till detta kan vara att man anv�nder en seriell mus (dessa �r inte supportade
�nnu). Du m�ste anv�nda PS/2-mus med AROS f�r tillf�llet. En annan anledning kan vara
att du valt en uppl�sning i boot-menyn som inte �r st�ds av din h�rdvara. Starta om
och testa med en annan.
