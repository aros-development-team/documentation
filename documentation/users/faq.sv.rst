=====================
Frågor och svar (FAQ)
=====================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright (C) 1995-2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::

Vanliga frågor
==============

Får jag ställa en fråga?
------------------------

Naturligtvis! Det finns flera ställen där du kan ställa frågor, diskutera AROS
och få hjälp. AROS utvecklares e-postlistor och Slack-kanaler finns listade på
`AROS Git-arkivets wiki`__. Det finns även community-forum och diskussioner på
olika Amiga-relaterade forum, där du kan hitta personer med erfarenhet av att
använda AROS och andra Amiga-liknande system.

Dessutom finns en ansenlig mängd dokumentation och litteratur om AROS, AmigaOS
och relaterade Amiga-liknande system tillgänglig på nätet, som kan ge användbar
bakgrunds- och praktisk information.

Den här FAQ:n kommer att uppdateras allteftersom användbara frågor och svar
dyker upp, men community-diskussionerna och utvecklingskanalerna innehåller
sannolikt mer aktuell information.

__ https://github.com/aros-development-team/AROS/wiki


Vad handlar AROS om? 
--------------------

Läs gärna denna introduktion_.

.. _introduktion: ../../introduction/index


Vad säger lagen om AROS?
------------------------

Europeisk lag säger att det är lagligt att använda omvänd utvecklingsteknik 
(reverse engineering) för att få kompabilitet. Den säger även att det är
olagligt att distribuera kunskapen som man får av dessa tekniker. Det som
egentligen menas med detta är att du får dissemblera eller studera vilken
mjukvara som helst för att skriva ett program som är kompatibelt med detta
(till exempel så skulle det vara lagligt att dissemblera Word för att skriva
ett program som kan konvertera Word-dokument till ASCII-text).

Det finns naturligtvis undantag: du får inte dissemblera mjukvaran om informationen
som du är ute efter går att få tag på med andra sätt. Du får heller inte informera
andra om vad du har lärt dig. En bok med titeln "Windows inside" är därför
olaglig eller åtminstone tvivelaktigt laglig.

Eftersom vi undviker dissembleringstekniker och istället använder den kunskap
som redan finns (vilket inkluderar programmeringsmanualer) vilka inte går under
någon liknande lag, så kan man inte applicera detta med AROS. Det som räknas här
är intentionerna i lagen: det är lagligt att skriva mjukvara som är kompatibel
med annan mjukvara. Därför är våran övertygelse att AROS är skyddat av lagen.

Patent och header files är ett annat ämne. Vi kan använda patenterade algoritmer
i europa eftersom europeisk lag inte tillåter patent på algoritmer.
Dock får kod som använder algoritmer som är patenterade i USA inte importeras
till USA. Exempel på patenterade algoritmer i AmigaOS är t.ex. skärmdragning
och hur t.ex. menyer fungerar. Därför undviker vi att implementera dessa
funktioner på exakt samma sätt. Header files måste å andra sidan vara kompatibla
men så olika orginalet som möjligt.

För att undvika problem så har vi frågat om ett officiellt OK från Amiga Inc. De
är ganska positiva till vårat arbete men känner sig väldigt obekväma angående den lagliga
innebörden. Vi vill uppmärksamma dig på det faktum att Amiga Inc inte har
skickat oss brev där de uppmanat oss att fortsätta eller upphöra med utvecklingen.
Olyckligtvis så har ingen överenskommelse ännu blivit gjord, förutom att båda parter
har goda intentioner.


Varför siktar ni på kompabilitet med AmigaOS 3.1?
-------------------------------------------------

Det har förts diskussioner om att skriva ett avancerat operativsystem med
AmigaOS funktioner. Det har lagts ned av en god anledning. För det första var
alla överens om att det nuvarande AmigaOS skulle behöva förbättras, men ingen
visste hur det skulle göras eller var ens överens om vad som behövde
förbättras eller vad som var viktigt. Vissa ville till exempel ha minnesskydd,
men ogillade priset (en omfattande omskrivning av tillgänglig programvara och
lägre hastighet).

Till slut slutade diskussionerna antingen i gräl eller i att samma argument
upprepades. Så vi bestämde oss för att börja med något vi visste hur vi
skulle hantera. När vi sedan har erfarenheten att se vad som är möjligt och
inte, kan vi besluta om förbättringar.

Vi vill också vara binärkompatibla med det ursprungliga AmigaOS på
Amiga-datorer. Anledningen är helt enkelt att ett nytt OS utan program att
köra har små chanser att överleva. Därför försöker vi göra övergången från
det ursprungliga OS:et till vårt nya så smärtfri som möjligt (men inte så
långt att vi inte kan förbättra AROS efteråt). Som vanligt har allt sitt pris,
och vi försöker noga avgöra vad det priset kan vara och om vi och alla andra
skulle vara villiga att betala det.


Kan ni inte implementera funktionen XYZ?
----------------------------------------

Nej, därför: 

a) Om det verkligen är så viktigt så borde det finnas i AmigaOS. :-) 
b) Varför inte göra det själv och skicka patchen till oss?

Anledningen till denna attityd är att det finns väldigt många som tycker att deras
funktion är viktigast och att AROS inte har någon framtid om inte funktionen 
omedelbart implementeras. Vår ståndpunkt är att AmigaOS, som AROS siktar på att
implementera, kan göra allting som ett modernt operativsystem kan göra. Vi ser
att det finns områden där AmigaOS skulle behöva förbättras inom, men om vi gör det,
vem skulle skriva resten av operativsystemet? I slutändan så skulle vi då ha en massa
fina förbättringar jämfört med AmigaOS som skulle göra det mycket svårare att använda
redan existerande mjukvara, eftersom resten av operativystemet skulle saknas.

Därför har vi beslutat att vänta med varje försök till att implementera stora
nya funktioner i operatisystemet tills att operativsystemet är mer eller mindre
klart. Vi har kommit ganska så nära målet nu och det har faktisktutvecklats en del funktioner
i AROS som inte finns tillgängligt i AmigaOS.


Hur kompatibelt är AROS med AmigaOS?
------------------------------------

Väldigt kompatibelt. Vi förväntar oss att AROS kommer att kunna köra existerande
mjukvara på Amigan utan problem. På annan hårdvara så måste mjukvaran
rekompileras. Vi kommer att erbjuda en preprocessor som du kan använda på din
kod som kommer ändra eventuell kod som eventuellt krashar med AROS och/eller
varna om sådan kod.

Portning av program från AmigaOS till AROS handlar mestandels om en enkel
rekompilering, med vissa förändringar. Det finns naturligtvis program med
undantag, men det stämmer för de flesta moderna program.


För vilka hårdvaruplattformar finns AROS tillgängligt?
------------------------------------------------------

För närvarande finns AROS i ett ganska användbart skick som native och hostad
(under Linux) för i386-arkitekturen (dvs. IBM PC AT-kompatibla kloner) och för
X86_64. Portningar till 68k-Amigor och Raspberry Pi pågår i varierande grad
av färdigställande.


Kommer det att finnas en portning av AROS till PowerPC?
-------------------------------------------------------

Den finns redan. De underhållna portningarna av AROS till PowerPC är
sam440-ppc och darwin-ppc.


Varför använder ni Linux och X11?
---------------------------------

Vi använder Linux och X11 för att snabba upp utvecklingen. Som exempel, om du
implementerar en ny funktion för att öppna ett fönster så kan du enkelt skriva den
funktionen och inte behöva skriva hundratals andra funktioner i layers.library,
graphics.library, en bunt device driver och övriga som den funktionen kan tänkas behöva.

Målet med AROS är naturligtvis att bli oberoende av Linux och X11 (Men det skulle
fortfarande vara möjligt att köra på dessa om användare verkligen ville), det börjar
långsamt bli verklighet med native-verisonerna av AROS. Vi måste dock fortfarande 
använda Linux för utveckling, eftersom utvecklingsverktygen inte har blivit portade
till AROS ännu.

Hur ska ni lyckas med att göra AROS portabelt?
----------------------------------------------

En av de stora nya funktionerna i AROS jämfört med AmigaOS är HIDD (Hardware
Independent Device Drivers), som tillåter oss att porta AROS till olika
typer av hårdvara relativt enkelt. I princip så pratar libraries till 
operativsystemets kärna inte direkt med hårdvaran, utan går via HIDD. vilket är
kodat med hjälp av ett objektorienterat system som gör det enkelt att byta ut
HIDD och återanvända koden.

Varför tror ni att AROS kommer att lyckas?
------------------------------------------

Varje dag hör vi från massor av människor som tror att AROS inte kommer att lyckas.
De flesta vet inte vad vi egentligen håller på med eller att de tror att Amigan
redan är död. Efter att vi har förklarat vad vi sysslat med så håller de flesta med
om att det är möjligt, men det sistnämnda är svårare att förklara. Är Amigan död?
Dom som fortfarande använder Amigan kommer troligen säga att den inte är död.
Slutade din A500 eller A4000 att fungera när Commodore gick i konkurs? Gick den
sönder när Amiga Technologies konkursade?

Faktum är att det idag inte utvecklas så mycket ny mjukvara för Amiga (även om
Aminet fortfarande tuffar och går rätt så fint) och att ny hårdvara även utvecklas
mycket långsammare (men de coolaste pryttlarna verkar dyka upp nu).  Amigas Community
(Som fortfarande existerar) verkar sitta och vänta och om någon släpper en produkt som
liknar Amigan från 1984, då kommer den datorn att få en revival. Vem vet, kanske får du en
CD med din nya dator märkt med "AROS". :-)


Vad gör jag om AROS inte vill kompileras?
-----------------------------------------

Ange detaljer om problemet, inklusive kommandot du använde för att bygga AROS
och eventuella felmeddelanden du fick, och be om hjälp på `AROS utvecklares
e-postlista`__ eller i AROS Slack-kanal. Det är rätt ställen att diskutera
byggproblem och andra frågor som rör AROS-utvecklingen, och det är där
utvecklare och andra som känner till byggsystemet kan hjälpa till att
diagnostisera problemet.

Du behöver inte vara en etablerad AROS-utvecklare för att be om hjälp med ett
byggproblem. Om du bygger AROS från källkoden arbetar du redan med
utvecklingsmiljön.

__ https://www.aros.org/


Kommer AROS ha minnesskydd (memory protection), SVM, RT, ...?
-------------------------------------------------------------

Flera hundra Amiga-experter (och folk som ansåg sig vara det) försökte i tre
år hitta ett sätt att implementera minnesskydd (MP) för AmigaOS. De lyckades
inte. Det tyder på att det är ganska osannolikt att det vanliga AmigaOS
någonsin får MP som Unix eller Windows NT.

Men allt är inte förlorat. Det finns planer på att integrera en variant av MP
i AROS som åtminstone skyddar nya program som känner till det. Vissa insatser
på det området ser riktigt lovande ut. Dessutom är det egentligen inget
problem om din dator kraschar. Problemet är snarare att:

1. Du har ingen bra uppfattning om varför den kraschade. I princip får du
   peta med en trettio meter lång stång i ett träsk fullt av tjock dimma.
2. Du förlorar ditt arbete.

Att starta om datorn är egentligen inget problem.

Vad vi skulle kunna försöka bygga är ett system som åtminstone varnar om
något skumt händer, som i detalj kan berätta vad som pågick när datorn
kraschade och som låter dig spara ditt arbete och *sedan* krascha. Det skulle
också behöva ett sätt att kontrollera vad som sparats, så att du kan vara
säker på att du inte fortsätter med skadade data.

Detsamma gäller SVM (växlingsbart virtuellt minne), RT (resursspårning) och
SMP (symmetrisk multiprocessing). Vi planerar just nu hur de ska
implementeras och ser till att det blir smärtfritt att lägga till dessa
funktioner. De har dock inte högsta prioritet just nu. En mycket enkel RT har
däremot lagts till.


Kan jag bli betatestare?
------------------------

Absolut, inga problem. Faktiskt vill vi ha så många betatestare som möjligt,
så alla är välkomna! Vi för dock ingen lista över betatestare, så allt du
behöver göra är att tanka hem AROS, testa precis vad du vill och skicka 
en rapport till oss.

Vad har AROS och UAE för relation till varandra?
------------------------------------------------

UAE är en Amiga-emulator och har som sådan ett något annat mål än AROS. UAE
vill vara binärkompatibelt även för spel och kod som går direkt på hårdvaran,
medan AROS vill ha native-applikationer. Därför är AROS mycket snabbare än
UAE, men du kan köra mer programvara under UAE.

Vi har lös kontakt med UAE:s upphovsman och det finns goda chanser att kod
från UAE dyker upp i AROS och vice versa. UAE-utvecklarna är till exempel
intresserade av källkoden till OS:et, eftersom UAE skulle kunna köra vissa
applikationer mycket snabbare om några eller alla OS-funktioner kunde ersättas
med native-kod. Å andra sidan skulle AROS kunna dra nytta av en integrerad
Amiga-emulering.

Eftersom de flesta program inte kommer att finnas för AROS från början har
Fabio Alemagna portat UAE till AROS, så att du åtminstone kan köra gamla
program i en emuleringsmiljö.

I Contrib finns även `E-UAE`__, som är UAE förbättrat med några funktioner
från `WinUAE`__.

__ http://www.rcdrummond.net/uae/
__ https://www.winuae.net/


Vad har AROS och Haage & Partner för relation till varandra?
------------------------------------------------------------

Haage & Partner har använt delar i AROS i AmigaOS 3.5 och 3.9, till exempel
Colorwheel och Gradientslider gadgets samt SetEnv-kommandot. I princip betyder
detta att AROS har blivit en del av det officiella AmigaOS. Detta betyder dock
inte att det finns en formell överenskommelse mellan AROS och Haage & Partner.
AROS är ett open source-projekt, därför kan vem som helst använda våran kod
i sina egna projekt förutsatt att de efterföljer licensavtalet.


Vad har AROS och MorphOS för relation till varandra?
----------------------------------------------------

Relationen mellan AROS och MorphOS är i princip densamma som mellan AROS
och Haage & Partner. MorphOS använder delar i AROS för att snabba upp deras
utveckling; enligt licensvillkoren. Precis som med Haage & Partner så är detta
bra för båda parter eftersom MorphOS kan snabba upp deras utveckling från AROS
och AROS i sin tur får förbättringar till vår källkod från MorphOS. Det finns
ingen formell överenskommelse mellan AROS och MorphOS; detta är hur 
open source-utveckling fungerar.


Vilka programmeringsspråk finns tillgängliga?
---------------------------------------------

GCC (C, C++) finns både som native- och korskompilator.

De språk som finns native är Python_, Regina_, Lua_ och Hollywood_:

+ Python är ett skriptspråk som blivit ganska populärt tack vare sin snygga
  design och sina funktioner (objektorienterad programmering, modulsystem,
  många användbara moduler inkluderade, ren syntax, ...). Ett separat projekt
  har startats för AROS-portningen och finns på
  https://pyaros.sourceforge.net/.

+ Regina är en portabel ANSI-kompatibel REXX-tolk. Målet för
  AROS-portningen är att vara kompatibel med ARexx-tolken i det klassiska
  AmigaOS.

+ Lua är ett kraftfullt, snabbt, lättviktigt och inbäddningsbart skriptspråk.
  AROS-portningen har utökats med två moduler: siamiga och zulu. Den första
  har några enkla grafikkommandon, den senare är ett gränssnitt mot Zune.

+ Hollywood är ett kommersiellt programmeringsspråk för
  multimediaapplikationer inklusive spel. Du kan köpa en version för
  i386-aros (ABI v0).

.. _Python: https://www.python.org/
.. _Regina: https://regina-rexx.sourceforge.io/
.. _Lua: https://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/


Varför finns det ingen m68k-emulator i AROS?
--------------------------------------------

Det finns redan ett försök att integrera emulatorn janus-uae.

Men varför implementerar vi inte bara en virtuell m68k-processor för att köra
programvara direkt på AROS? Problemet är att m68k-programvara förväntar sig
data i big-endian-format, medan AROS även körs på little-endian-processorer.
Little-endian-rutinerna i AROS kärna skulle behöva arbeta med
big-endian-data i emuleringen. Automatisk konvertering verkar omöjlig (bara
ett exempel: det finns ett fält i en struktur i AmigaOS som ibland innehåller
en ULONG och ibland två WORD) eftersom vi inte kan avgöra hur ett par byte i
RAM är kodade.

.. _UAE: http://www.amigaemulator.org/


Kommer det att finnas en AROS Kickstart ROM?
--------------------------------------------

De finns redan i paketet amiga-m68k-boot-iso i katalogen boot/amiga.


Nattliga byggen (nightly builds)
================================

Vad är de nattliga byggena?
---------------------------

AROS nattliga byggen är utvecklingsbyggen som skapas från det aktuella
tillståndet i AROS källkodsträd. De är i första hand avsedda för utvecklare,
testare och personer som vill följa och experimentera med den senaste
utvecklingen av AROS. De bör därför ses som en ständigt föränderlig
ögonblicksbild av utvecklingen snarare än en polerad utgåva riktad till
slutanvändare. Deras konfiguration är följaktligen avsedd att ge en konsekvent
miljö för att testa den pågående AROS-utvecklingen, inte att representera ett
slutgiltigt val av skrivbordets utseende eller användarupplevelse.

Varför använder de nattliga byggena inte "snygga" teman?
--------------------------------------------------------

Problemet är att "snyggt" är subjektivt. Det finns inget standardtema som
tillfredsställer alla, och att ändra projektets standardval varje gång någon
ogillar det gör bara estetik till en ändlös cykel av "ändra tillbaka".

Det är därför skillnaden mellan AROS i sig och enskilda distributioner spelar
roll. Distributionsansvariga är fria att bestämma hur just deras distribution
ser ut och vilka standardinställningar den levereras med.

De nattliga byggena är inte tänkta att vara en polerad skrivbordsprodukt med
bestämda åsikter; de är en konsekvent miljö för utveckling och testning. Om du
föredrar ett annat utseende, anpassa det eller bygg en distribution kring den
preferensen.

Personliga preferenser är ett fullt legitimt skäl att anpassa sitt eget
system, men inte någon särskilt bra grund för att ändra det överordnade
projektets standardinställningar.


Mjukvarufrågor
==============

Vad är Zune?
------------

Om det är på denna hemsida som du läst om Zune, så är det egentligen bara
en open-source återimplementation av MUI, vilket är ett kraftfullt
(som i användar- och -utvecklingsvänligt) objektorienterad shareware
GUI toolkit för att utveckla native AROS-applikationer med. Angående
namnet i fråga, så betyder det ingenting, det låter bara bra.


Vad är Graphical(Grafiskt) och other(annat) memory(minne) i Wanderer?
---------------------------------------------------------------------

Denna minnesupdelning är mest en relik från Amigans ursprung, när grafiskt minne
var applikationsminne innan du lade till mer minne, FAST RAM, ett minne där applikationerna
hamnade, medans grafiken, ljudet och en del system-strukturer fortfarande residerade
i grafikminnet.

I AROS-hosted så finns det inte något minne som Other (FAST), endast GFX, medans
det finns på Native AROS, GFX kan ha max 16MB, men detta återspeglar ej minnesstorleken på
grafikkortet... Det har ingen koppling till hur stort minnet är på ditt grafikkort.

*Det utförligare svaret*
Grafikminnet i i386-native visar det undre 16MB minnet i systemet. De undre 16MB är
i området där ISA-kort kan utföra DMA. Allokering av minne med MEMF_DMA eller MEMF_CHIP
kommer att hamna där, resterande hamnar i other (fast) -minnet.

Använd C:Avail HUMAN -kommandot för minnes-info.


Vad gör egentligen Wanderer Snapshot <all/window>?
--------------------------------------------------

Det här kommandot kommer ihåg ikonplaceringen i alla fönster (eller i ett
enskilt fönster).


Vad finns det för command line options för AROS-hosted exekverbara filer?
-------------------------------------------------------------------------

Du kan få en lista på dessa genom att köra ./aros -h kommandot.


Vad finns det för optioner till AROS-native kernel i GRUB line?
---------------------------------------------------------------

Här är några::

    floppy=<disabled/nomount>   Ställer in trackdisk-enhetens alternativ
        disabled                - inaktiverar initieringen av trackdisk.device
                                  helt
        nomount                 - initierar trackdisk.device men skapar inga
                                  DOS-enheter

    ATA=32bit           - Aktiverar 32-bitars I/O i hårddiskdrivrutinen (säkert)
    forcedma            - Tvingar DMA att vara aktivt i hårddiskdrivrutinen
                          (borde vara säkert, men är det kanske inte)
    gfx=<hidd name>     - Använder namngiven HIDD som gfx-drivrutin
    lib=<name>          - Laddar och initierar namngivet library/HIDD

Kom ihåg att alternativen är skiftlägeskänsliga (case-sensitive).


Hur gör jag ett DOS-skript som körs automatiskt för ett installerat paket?
--------------------------------------------------------------------------

1) Skapa en underkatalog S och lägg till en fil med namnet 'Package-Startup'
   med det DOS-skript för paketet som du vill köra vid varje start.

2) Skapa en variabel i filen envarc:sys/packages som innehåller sökvägen till
   ditt pakets underkatalog S.

Exempel på katalogstruktur::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup

Variabeln i envarc:sys/packages skulle kunna heta 'myapp' (namnet är bara ett
exempel); innehållet skulle då vara 'sys:extras/myappdir'.

Package-Startup-skriptet skulle sedan anropas av startup-sequence.


Hårdvarufrågor
==============

Var kan jag hitta en AROS Hardware Compability List?                   
----------------------------------------------------

Du kan finna en på `AROS Wiki <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__ .
Det kan även finnas andra listor av AROS-användare.

Varför kan inte AROS boota från hårddisken om hårddisken är satt som SLAVE?
---------------------------------------------------------------------------

AROS kan boota om hårddisken sitter på SLAVE med ENDAST om det även sitter en
hårddisk på MASTER. Detta är en korrekt anslutning vilket efterföljer IDE-specifikationerna,
och AROS efterföljer dessa.

Min dator hänger sig med en röd markör på skärmen eller en svart skärm
----------------------------------------------------------------------

En orsak kan vara att du använder en seriell mus (det stöds inte ännu). Du
måste för närvarande använda en PS/2-mus med AROS. En annan orsak kan vara att
du i startmenyn har valt ett videoläge som din hårdvara inte stöder. Starta
om och prova ett annat.
