==========================
Veel gestelde vragen (FAQ)
==========================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright (C) 1995-2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::

Algemene vragen
===============

Mag ik een vraag stellen?
-------------------------
Natuurlijk kunt u dat. Er zijn verschillende plekken waar u vragen kunt stellen,
over AROS kunt discussiëren en hulp kunt vinden. De AROS ontwikkelaars
mailinglijsten en Slack kanalen staan vermeld op de `wiki van de AROS Git
repository <https://github.com/aros-development-team/AROS/wiki>`__. Daarnaast
zijn er community forums en discussies op diverse Amiga-gerelateerde forums,
waar u mensen kunt vinden met ervaring in het gebruik van AROS en andere
Amiga-achtige systemen.

Bovendien is er online een aanzienlijke hoeveelheid documentatie en literatuur
over AROS, AmigaOS en verwante Amiga-achtige systemen beschikbaar, die nuttige
achtergrond- en praktische informatie kan bieden.

Deze FAQ zal worden bijgewerkt zodra er nuttige vragen en antwoorden naar voren
komen, maar de community discussies en de ontwikkelkanalen bevatten
waarschijnlijk recentere informatie.


Waar gaat AROS over?
--------------------

Leest u a.u.b. de introductie_.

.. _introductie: ../../introduction/index


Wat is de legale status van AROS?
---------------------------------

De Europese wet verteld dat het legaal is om 'reverse engineering' technieken
te gebruiken om onderlinge compatibiliteit te bevorderen. Het zegt ook dat
het illegaal is om de zo verkregen kennis te verspreiden. Dit betekend dat het 
toegestaan is om alle software te disambleren om een programma te schrijven dat
compatibel is (ter voorbeeld: het is legaal om Word de disambleren om een programma
te schrijven dat Word documenten in ASCII teksten omvormt.)

Er zijn natuurlijk beperkingen: het is niet toegestaan om software te disambleren
als de te verkrijgen informatie ook via andere wegen verkregen kan worden. Ook mag
je anderen niet vertellen wat je geleerd hebt. Een boek getiteld "Windows van binnen"
is daarom illegaal en heeft op zijn minst een dubieuze legale status.  

Gezien we disambleer technieken vermijden en gewoon algemeen beschikbare kennis
gebruiken (waaronder programmeer handleidingen), welke onder geen NDA 
(geheimhoudingsverklaring) vallen, heeft het bovenstaande niet direct betrekking op AROS. 
Wat hier telt is de intentie van de wet: het is legaal om software te schrijven 
welke compatibel is met een ander stuk software. 
Daarom geloven we dat AROS beschermd is door de wet.

Patenten en header files zijn echter een ander geval. We kunnen gepatenteerde
algoritmes in Europa gebruiken sinds de Europese wet hierop geen patenten toestaat. 
Echter, code die algoritmen gebruikt die in de VS gepatenteerd zijn, mogen niet 
geïmporteerd worden in de VS. Voorbeelden van gepatenteerde algoritmes
in AmigaOS zijn het slepen van schermen en de manier waarop bepaald menu's werken.
We vermijden daarom deze functies op precies dezelfde manier te implementeren.
Header files zijn een uitzondering: deze moeten compatibel zijn, maar zoveel
mogelijk verschillen van het origineel. 

Om problemen te voorkomen hebben we een officieel OK gevraagd van Amiga Inc. Zij
zijn vrij positief over ons project, maar ook wel een beetje ongemakkelijk met 
de legale implicaties. We willen u suggereren dat het gegeven dat Amiga Inc ons 
geen "stop" brieven gestuurd heeft als een positief teken gezien mag worden.
Dan nog zijn er helaas geen rigide legale afspraken gemaakt, ondanks goede intenties
van beiden partijen.


Waarom doelen jullie alleen op compatibiliteit met 3.1?
-------------------------------------------------------

Er zijn discussies geweest over het schrijven van een geavanceerd
besturingssysteem met de mogelijkheden van AmigaOS. Dat is om een goede reden
losgelaten. Ten eerste was iedereen het erover eens dat het huidige AmigaOS
verbeterd zou moeten worden, maar niemand wist hoe, of was het er zelfs maar
over eens wat er verbeterd moest worden of wat belangrijk was. Sommigen wilden
bijvoorbeeld geheugenbescherming, maar hadden bezwaar tegen de prijs ervan
(een grote herschrijving van de beschikbare software en snelheidsverlies).

Uiteindelijk liepen de discussies uit op ruzies of op het herhalen van steeds
dezelfde argumenten. Dus besloten we te beginnen met iets dat we wisten aan te
kunnen. Als we dan de ervaring hebben om te zien wat mogelijk is en wat niet,
kunnen we over verbeteringen beslissen.

We willen ook binair compatibel zijn met het originele AmigaOS op
Amiga-computers. De reden daarvoor is simpelweg dat een nieuw OS zonder
programma's die erop draaien weinig kans heeft om te overleven. Daarom
proberen we de overstap van het originele OS naar ons nieuwe OS zo pijnloos
mogelijk te maken (maar niet zover dat we AROS daarna niet meer kunnen
verbeteren). Zoals gewoonlijk heeft alles zijn prijs en proberen we zorgvuldig
te bepalen wat die prijs zou kunnen zijn en of wij en alle anderen bereid
zouden zijn die te betalen.


Kunnen jullie feature XYX implementeren?
----------------------------------------

Nee, omdat:

a) Als het echt belangrijk was, had het ook in het originele OS gezeten. :-)
b) Waarom doet u dit zelf niet en stuurt u de patch naar ons?

De reden voor deze attitude is dat er veel mensen zijn die denken dat hun 
toepassing de meest belangrijke is en dat AROS zonder het inbouwen daarvan 
geen toekomst zou hebben. Onze houding is dat het AmigaOS, 
dat AROS probeert te implementeren, alles
kan doen wat een modern OS kan doen. We weten dat er gebieden zijn waar het AmigaOS
verbeterd kan worden, maar als we die eerst zouden maken, wie schrijft dan de rest van 
het OS? Uiteindelijk zouden we een hoop mooie verbeteringen hebben in het originele
AmigaOS, die vervolgens de ondersteuning van alle beschikbare software zouden breken 
en deze waardeloos maken, gezien de rest van het OS ontbreekt.

Daarom hebben we ervoor gekozen alle pogingen te blokkeren om grote nieuwe features 
in het OS te bouwen, tot het tijdstip waarop deze min of meer compleet zal zijn. 
We zijn nu bijna bij dat punt, terwijl er inmiddels ook alweer een paar nieuwe 
innovaties in AROS zijn ingebouwd waarover het originele OS niet beschikte.


Hoe compatibel is AROS met AmigaOS?
-----------------------------------

Zeer compatibel. We verwachten dat AROS zonder problemen bestaande software op 
een Amiga zal draaien. Voor andere hardware zal de bestaande software echter 
gehercompileerd moeten worden. We zullen een pre-processor aanbieden die je kan
gebruiken met je eigen code, welke code zal veranderen die AROS kan laten
vastlopen of op zijn minst waarschuwt voor deze code.

Overzetten van programma's van AmigaOS naar AROS is op moment vooral een kwestie
van simpel hercompileren, met een enkele aanpassing aan de code. Er zijn 
natuurlijk programma's waarvoor dit niet opgaat, maar het geld wel voor de 
meeste moderne software. 


Voor welke hardware architecturen is AROS op moment beschikbaar?
----------------------------------------------------------------

Momenteel is AROS in een redelijk bruikbare staat beschikbaar als native en
gehoste versie (onder Linux) voor de i386 architectuur (d.w.z. IBM PC AT
compatibele klonen) en voor X86_64. Er zijn ports in uiteenlopende stadia van
voltooiing onderweg naar 68k Amiga's en de Raspberry Pi.


Zal er een AROS port komen voor de PowerPC?
-------------------------------------------

Die is er al. De onderhouden AROS ports voor PowerPC zijn sam440-ppc en
darwin-ppc.


Waarom gebruiken jullie Linux en X11?
-------------------------------------

We gebruiken Linux en X11 om de ontwikkeling te versnellen. Ter voorbeeld: het 
implementeren van een nieuwe functie om een venster te openen kan simpelweg via
één enkele functie worden gedaan, zonder het moeten schrijven van honderden functies 
in de layers.library, graphics.library en een reeks van
andere device drivers die deze functie misschien zou aanroepen. 

Het doel van AROS is natuurlijk om onafhankelijk te draaien van Linux en X11 
(maar het zou er nog steeds op kunnen draaien als mensen dit echt wilden), wat
nu langzaam realiteit wordt met de native versies van AROS. Voorlopig is 
Linux nog wel nodig voor de ontwikkeling, gezien sommige ontwikkelaars
tools nog niet geport zijn naar AROS.


Hoe willen jullie AROS overdraagbaar maken?
-------------------------------------------

Een van de grote nieuwe features in AROS in vergelijking met AmigaOS is de
HIDD (Hardware Onafhankelijke Device Drivers) systeem, dat ons toestaat AROS
vrij makkelijk naar andere hardware over te zetten. In essentie roepen de kern
OS libraries niet meer rechtstreeks de hardware aan, maar doen dit via de
HIDDs. Deze zijn geprogrammeerd volgens een object georiënteerd systeem dat het 
makkelijk maakt HIDDs te vervangen en code te hergebruiken.


Waarom denken jullie dat AROS het zal maken?
--------------------------------------------

We horen bijna dagelijks van mensen dat AROS het niet zal maken. De meeste
van hen weten om te beginnen al niet wat we doen, of denken dat de Amiga al 'dood' is. 
Nadat we eerstgenoemde verduidelijken denken de meesten dat ons werk toch nog haalbaar 
is. Maar het laatstgenoemde is lastiger uit te leggen: is de Amiga nu dood? 
Degenen die hun Amiga nog gebruiken zullen je waarschijnlijk vertellen van niet. 
En kritisch gezegd: ging je A500 of A4000 kapot toen Commodore bankroet ging? 
Gebeurde dit toen Amiga Technologies ten onder ging?

Het feit dat er nog altijd een klein beetje nieuwe software ontwikkeld wordt 
voor de Amiga (al weet Aminet nog altijd zeer veel te zien) en dat de hardware
nog altijd met een vertraagd tempo ontwikkeld word (de meest indrukwekkende dingen 
verschijnen deze dagen).
De Amiga gemeenschap (die nog altijd levend is) lijkt af te wachten. En als iemand
een product uit zou geven dat een beetje is zoals de Amiga was terug in 1984, dan 
zal die machine ongetwijfeld weer populariteit genieten. En wie weet: 
misschien krijgt u bij die machine ook wel een CD gelabeld "AROS". :-)


Wat te doen als het compileren van AROS niet lukt?
--------------------------------------------------

Geeft u a.u.b. details over het probleem, inclusief het commando waarmee u AROS
heeft gebouwd en eventuele foutmeldingen die u heeft ontvangen, en vraag om hulp
op de `AROS ontwikkelaars mailinglijst`__ of in het AROS Slack kanaal. Dit zijn
de aangewezen plekken om bouwproblemen en andere zaken rond de ontwikkeling van
AROS te bespreken, en daar kunnen ontwikkelaars en andere mensen die bekend zijn
met het bouwsysteem helpen het probleem te diagnosticeren.

U hoeft geen gevestigde AROS ontwikkelaar te zijn om hulp te vragen bij een
bouwprobleem. Als u AROS vanuit de broncode bouwt, werkt u al met de
ontwikkelomgeving.

__ https://www.aros.org/


Krijgt AROS geheugen bescherming, SVM, RT, ...?
-----------------------------------------------

Enkele honderden Amiga-experts (en mensen die zichzelf als zodanig
beschouwden) hebben drie jaar lang geprobeerd een manier te vinden om
geheugenbescherming (MP) voor AmigaOS te implementeren. Dat is niet gelukt.
Dit geeft aan dat het vrij onwaarschijnlijk is dat het normale AmigaOS ooit MP
zal hebben zoals Unix of Windows NT.

Maar niet alles is verloren. Er zijn plannen om een variant van MP in AROS te
integreren, die in ieder geval nieuwe programma's die ervan weten kan
beschermen. Sommige inspanningen op dit gebied zien er echt veelbelovend uit.
Bovendien is het niet echt een probleem als uw machine crasht. Het probleem
is eerder dat:

1. U geen goed idee heeft waarom hij crashte. In feite moet u dan met een
   stok van dertig meter in een moeras vol dichte mist gaan porren.
2. U uw werk kwijt bent.

De machine opnieuw opstarten is echt geen probleem.

Wat we zouden kunnen proberen te bouwen is een systeem dat in ieder geval
waarschuwt als er iets verdachts gebeurt, dat u in detail kan vertellen wat er
gebeurde toen de machine crashte, en dat u de kans geeft uw werk op te slaan
en *dan* pas te crashen. Het zou ook een manier moeten hebben om te
controleren wat er is opgeslagen, zodat u zeker weet dat u niet doorgaat met
beschadigde gegevens.

Hetzelfde geldt voor SVM (swappable virtual memory), RT (resource tracking)
en SMP (symmetric multiprocessing). We zijn momenteel aan het plannen hoe we
deze implementeren, waarbij we ervoor zorgen dat het toevoegen van deze
mogelijkheden pijnloos zal zijn. Ze hebben op dit moment echter niet de
hoogste prioriteit. Een zeer basale RT is wel al toegevoegd.


Kan ik een beta tester worden?
------------------------------

Natuurlijk, geen probleem. Beter nog, we willen zoveel mogelijk beta testers
als mogelijk, dus iedereen is welkom! We houden overigens geen lijst van beta
testers bij: u hoeft alleen AROS te downloaden, testen wat u wilt
en ons daarna een rapport sturen.


Wat is de relatie tussen AROS en UAE?
-------------------------------------

UAE is een Amiga-emulator en heeft als zodanig een wat ander doel dan AROS.
UAE wil binair compatibel zijn, zelfs voor spellen en code die de hardware
rechtstreeks aanspreekt, terwijl AROS native applicaties wil. Daarom is AROS
veel sneller dan UAE, maar onder UAE kunt u meer software draaien.

We hebben losjes contact met de auteur van UAE en er is een goede kans dat
code van UAE in AROS terechtkomt en omgekeerd. De UAE-ontwikkelaars zijn
bijvoorbeeld geïnteresseerd in de broncode van het OS, omdat UAE sommige
applicaties veel sneller zou kunnen draaien als sommige of alle OS-functies
door native code vervangen konden worden. Aan de andere kant zou AROS baat
kunnen hebben bij een geïntegreerde Amiga-emulatie.

Omdat de meeste programma's niet vanaf het begin op AROS beschikbaar zullen
zijn, heeft Fabio Alemagna UAE naar AROS geport, zodat u oude programma's in
ieder geval in een emulatie-omgeving kunt draaien.

In Contrib is ook `E-UAE`__ beschikbaar, een UAE dat is uitgebreid met enkele
mogelijkheden uit `WinUAE`__.

__ http://www.rcdrummond.net/uae/
__ https://www.winuae.net/


Wat is de relatie tussen AROS en Haage & Partner?
-------------------------------------------------

Haage & Partner hebben delen van AROS gebruikt in AmigaOS 3.5 en 3.9, waaronder
het kleurenwiel, de kleurverloop-slider gadgets en het SetENV commando. Dit betekend
dat AROS, op een manier, deel is geworden van het officiële AmigaOS. Het wil 
echter niet zeggen dat er een formele relatie is tussen AROS en Haage & Partner.
AROS is een open source project, waarvan iedereen de code in eigen projecten mag
gebruiken -indien- zij de de licentie volgen. 


Wat is de relatie tussen AROS en MorphOS?
-----------------------------------------

De relatie tussen AROS en Morphos is eigenlijk dezelfde als tussen AROS en 
Haage & Partner. MorphOS gebruikt delen van AROS om hun ontwikkeling te versnellen;
onder de regels van onze licentie. Zoals met Haage & Partner heeft dit
voordeel voor beide teams: het MorphOS team krijgt zo een versnelling in
hun ontwikkeling dankzij AROS, terwijl het AROS team de goede verbeteringen 
mag overnemen van het MorphOS team. Er is dus geen formele relatie tussen 
AROS en MorphOS; dit is simpelweg hoe open source ontwikkeling werkt.


Welke programmeer talen zijn beschikbaar?
-----------------------------------------

GCC (C, C++) is zowel als native als als cross-compiler beschikbaar.

De talen die native beschikbaar zijn, zijn Python_, Regina_, Lua_ en
Hollywood_:

+ Python is een scripttaal die behoorlijk populair is geworden vanwege het
  fraaie ontwerp en de mogelijkheden (objectgeoriënteerd programmeren,
  modulesysteem, veel nuttige meegeleverde modules, heldere syntaxis, ...).
  Voor de AROS port is een apart project gestart, te vinden op
  https://pyaros.sourceforge.net/.

+ Regina is een portable, ANSI-conforme REXX-interpreter. Het doel van de
  AROS port is compatibiliteit met de ARexx-interpreter van het klassieke
  AmigaOS.

+ Lua is een krachtige, snelle, lichtgewicht en inbedbare scripttaal. De
  AROS port is uitgebreid met twee modules: siamiga en zulu. De eerste bevat
  enkele eenvoudige grafische commando's, de tweede is een interface naar
  Zune.

+ Hollywood is een commerciële programmeertaal voor multimedia-applicaties,
  inclusief spellen. U kunt een versie voor i386-aros (ABI v0) kopen.

.. _Python: https://www.python.org/
.. _Regina: https://regina-rexx.sourceforge.io/
.. _Lua: https://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/


Waarom zit er geen m68k emulator in AROS?
-----------------------------------------

Er is al een poging om de emulator janus-uae te integreren.

Maar waarom implementeren we niet gewoon een virtuele m68k CPU om software
rechtstreeks op AROS te draaien? Het probleem is dat m68k-software verwacht dat
de gegevens in big-endian formaat staan, terwijl AROS ook op little-endian
CPU's draait. De little-endian routines in de AROS-kern zouden dan met de
big-endian gegevens in de emulatie moeten werken. Automatische conversie lijkt
onmogelijk (één voorbeeld: er is een veld in een structuur in AmigaOS dat soms
één ULONG en soms twee WORDs bevat), omdat we niet kunnen zien hoe een paar
bytes in het RAM gecodeerd zijn.

.. _UAE: http://www.amigaemulator.org/


Zal er een AROS Kickstart ROM komen?
------------------------------------

Die zijn al beschikbaar in het amiga-m68k-boot-iso pakket, in de map
boot/amiga.


Nightly builds
==============

Wat zijn de nightly builds?
---------------------------

De AROS nightly builds zijn ontwikkelversies die worden gemaakt vanuit de huidige
staat van de AROS broncode. Ze zijn in de eerste plaats bedoeld voor
ontwikkelaars, testers en mensen die de laatste ontwikkelingen in AROS willen
volgen en ermee willen experimenteren. Ze moeten dan ook worden gezien als een
voortdurend veranderende ontwikkel-snapshot en niet als een afgewerkte, op
eindgebruikers gerichte release. Hun configuratie is daarom bedoeld om een
consistente omgeving te bieden voor het testen van de huidige AROS ontwikkeling,
en niet om een definitieve keuze voor het uiterlijk van het bureaublad of de
gebruikerservaring te vertegenwoordigen.

Waarom gebruiken de nightly builds geen "mooie" thema's?
--------------------------------------------------------

Het probleem is dat "mooi" subjectief is. Er is geen standaardthema dat iedereen
tevreden stelt, en de upstream standaard aanpassen telkens wanneer iemand het
niet mooi vindt, maakt van esthetiek slechts een eindeloze cyclus van "zet het
maar weer terug".

Daarom is het onderscheid tussen AROS zelf en de afzonderlijke distributies van
belang. Beheerders van distributies zijn vrij om te bepalen hoe hun distributie
eruitziet en met welke standaardinstellingen deze wordt geleverd.

De nightly builds zijn niet bedoeld als een afgewerkt desktopproduct met een
uitgesproken smaak; ze zijn een consistente omgeving voor ontwikkeling en
testen. Als u een ander uiterlijk verkiest, pas het dan aan of bouw een
distributie rond die voorkeur.

Persoonlijke voorkeur is een volkomen legitieme reden om uw eigen systeem aan
te passen, maar het is geen bijzonder goede basis om de standaardinstellingen
van het upstream project te veranderen.


Software vragen
===============

Wat is Zune?
------------

In geval je op deze site de naam Zune gelezen hebt: het is een open source
implementatie van MUI, wat een krachtige (als in gebruikers- en ontwikkelaars-
vriendelijk) object-georiënteerd shareware GUI toolkit is, tevens de-facto standaard
onder AmigaOS. Zune is de geprefereerde GUI toolkit voor de ontwikkeling van 
native AROS applicaties. En betreft de naam zelf, het betekend niets, maar klinkt
goed.


Wat is Grafisch en ander geheugen in Wanderer?
----------------------------------------------

Deze geheugen verdeling is vooral een reliek uit het Amiga verleden, toen
grafisch geheugen het primaire geheugen was totdat je ander geheugen toevoegde,
dat als FAST RAM werd betiteld. Het FAST RAM was daarna het geheugen dat de 
applicaties gebruikten, terwijl grafische objecten, geluiden en enkele systeem 
structuren in het grafisch geheugen bleven.

In AROS-hosted bestaat er geen ander geheugen dan Anders (FAST), maar alleen GFX,
terwijl AROS-native een GFX maximum hanteert van 16MB. Weet wel dat dit geen 
enkele reflectie bevat op de geheugenstaat van uw grafische adapter, laat staan
de hoeveel geheugen die uw video adapter heeft. 

*Het langdradige antwoord*

Grafisch geheugen in i386-native duid de lagere 16MB van het systeemgeheugen aan.
Deze 'lagere' 16MB is de ruimte waar ISA kaarten hun DMA regelen. Het alloceren
van geheugen met MEMF_DMA of MEMF_CHIP zal hierbij gevoegd worden, de rest bij
het overige (FAST) geheugen.

Gebruik het C:Avail HUMAN CLI commando voor meer geheugen informatie. 

Wat doet de Wanderer Snapshot <all/window> actie eigenlijk?
-----------------------------------------------------------

Dit commando onthoudt de plaatsing van de iconen van alle vensters (of van één
venster).


Wat zijn de command line opties voor de AROS-hosted executable?
---------------------------------------------------------------

U kunt hiervan een lijst krijgen door het runnen van ./aros -h command.

Wat zijn de AROS-native kernel opties voor de GRUB CLI?
-------------------------------------------------------

Dit zijn er enkele::

    floppy=<disabled/nomount>   Stelt de opties van het trackdisk device in
        disabled                - schakelt de initialisatie van trackdisk.device
                                  volledig uit
        nomount                 - initialiseert trackdisk.device maar maakt geen
                                  DOS devices aan

    ATA=32bit           - Schakelt 32-bit I/O aan in de hdd driver (veilig)
    forcedma            - Forceert DMA om actief te zijn in de hdd driver (zou
                          veilig moeten zijn, maar niet gegarandeerd)
    gfx=<hidd name>     - Gebruik de genoemde hidd als gfx driver
    lib=<name>          - Laad en initialiseer de genoemde library/hidd

Deze zijn hoofdlettergevoelig.


Hoe maak ik een DOS script dat automatisch wordt uitgevoerd voor een geïnstalleerd pakket?
------------------------------------------------------------------------------------------

1) Maak een submap S aan en zet daarin een bestand met de naam 'Package-Startup'
   met het DOS script voor dat pakket dat u bij elke start wilt uitvoeren.

2) Maak in het bestand envarc:sys/packages een variabele aan die het pad naar
   de submap S van uw pakket bevat.

Voorbeeld van de mapindeling::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup

De variabele in envarc:sys/packages zou de naam 'myapp' kunnen hebben (de naam
is slechts een voorbeeld); de inhoud is dan 'sys:extras/myappdir'.

Het Package-Startup script wordt dan aangeroepen door de startup-sequence.


Hardware vragen
===============

Waar kan ik een AROS Hardware Compatibiliteit lijst vinden?
-----------------------------------------------------------

U kunt er één vinden op de `AROS Wiki <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__ 
pagina. Er kunnen ook andere lijsten zijn gemaakt door AROS gebruikers (meer informatie volgt).

Waarom kan AROS niet van een IDE harddrive in SLAVE mode starten? 
-----------------------------------------------------------------

Wel, AROS zou moeten booten als de drive in SLAVE mode draait MITS er ook
een drive als MASTER aangesloten is. Dit blijkt de correctie verbindingsmethode 
te zijn volgens de IDE specificatie, welke AROS volgt.

Mijn systeem hangt met een rode cursor op een (leeg) scherm
-----------------------------------------------------------

Eén reden hiervoor kan het gebruik van een seriële muis zijn (die wordt nog
niet ondersteund). U moet op dit moment een PS/2 muis met AROS gebruiken. Een
andere oorzaak kan zijn dat u in het opstartmenu een videomodus heeft gekozen
die uw hardware niet ondersteunt. Start opnieuw op en probeer een andere.
