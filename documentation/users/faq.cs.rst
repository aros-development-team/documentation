==========================
Často kladené otázky (FAQ)
==========================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright (C) 1995-2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::

Běžné otázky
============

Můžu se na něco zeptat?
-----------------------

Samozřejmě můžeš. Existuje několik míst, kde se můžeš ptát, diskutovat
o AROSu a najít pomoc. Vývojářské poštovní konference a kanály Slack AROSu
jsou uvedeny na `wiki Git repozitáře AROSu`__. Existují také komunitní fóra
a diskuse na různých fórech věnovaných Amize, kde můžeš najít lidi se
zkušenostmi s AROSem a dalšími systémy podobnými Amize.

Kromě toho je online k dispozici značné množství dokumentace a literatury
o AROSu, AmigaOS a příbuzných systémech podobných Amize, která může poskytnout
užitečné základní i praktické informace.

Tyto FAQ budou aktualizovány, jakmile se objeví užitečné otázky a odpovědi,
komunitní diskuse a vývojářské kanály však budou pravděpodobně obsahovat
aktuálnější informace.

__ https://github.com/aros-development-team/AROS/wiki


Co je vlastně AROS?
-------------------

Přečti si prosím úvod_.

.. _úvod: ../../introduction/index


Jaký je právní stav AROSu?
--------------------------

Evropské právo říká, že je legalní používat techniky zpětného dešifrování
k získání interoperability. A také říká, že je nelegální šířit
znalosti získané těmito technikami. To v podstatě znamená, že můžeš
disasemblovat jakýkoli software, aby si napsal jiný, který je kompatibilní
(například by bylo legální disasemblovat Word a napsat program, který zkonvertuje
Word documenty do ASCII textu).

Existují samozřejmě určitá omezení: nesmíš disasemblovat software,
pokud by informace získané tímto procesem šly získat i jiným
způsobem. Také nesmíš ostatním řici, co si se dověděl. Kniha jako např. "Windows
zevnitř" je proto nezákonná nebo alespoň na hranici zákona.

Vzhledem k tomu, že se vyhýbáme disasemblovacím technikám a místo toho používáme
běžně dostupné znalosti (například programové manuály), které nespadají pod žádný
NDA (non-disclosure agreement - závazek mlčenlivosti), neplatí výše uvedené přímo
pro AROS. Co je tady důležité, je záměr zákona: je legální psát sotware, který je
kompatibilní s jiným softwarem. Takže věříme, že je AROS chráněn zákonem.

Patenty a hlavičkové soubory jsou však dalším problémem. V Evropě můžeme používat
patentované algoritmy, protože evropské právo nedovoluje patenty na algoritmy.
Nicméně kód, který používá algoritmy patentované v USA, by nemohl být dodáván
do USA. Jako příklady patentovaných algoritmů v AmigaOS uveďme "screen dragging"
a specifický způsob funkce menu. Proto se vyhýbáme implementování těchto
funkcí zcela stejným způsobem. Na druhou stranu však musí být hlavičkové soubory
kompatibilní, ale odlišné od originálu, jak je to jen možné.

Abychom se vyhli problémům, požádali jsme o oficiální souhlas od Amiga Inc. Oni
naši snahu vidí pozitivně, ale nejsou si jisti s právními důsledky.
Podotýkáme, že Amiga Inc nám dosud neposlala žádný dopis "cease and desist",
což bereme jako pozitivní znamení. Bohužel ještě nedošlo
k právní dohodě, a to bez ohledu na dobré úmysly obou stran.


Proč vám jde pouze o kompatibilitu s 3.1?
-----------------------------------------

Hodně se diskutovalo o napsání moderního operačního systému s vlastnostmi
AmigaOS. Z dobrého důvodu bylo od toho upuštěno. Zaprvé, všichni se shodli,
že současný AmigaOS by bylo třeba vylepšit, ale nikdo nevěděl, jak to udělat,
a nepanovala ani shoda na tom, co má být vylepšeno nebo co je důležité.
Někteří například chtěli ochranu paměti, ale nelíbila se jim její cena
(rozsáhlé přepsání dostupného softwaru a snížení rychlosti).

Nakonec diskuse skončily buď hádkami, nebo neustálým opakováním stejných
argumentů. Rozhodli jsme se tedy začít s něčím, co umíme zvládnout. Až
budeme mít zkušenosti a uvidíme, co je možné a co ne, můžeme se rozhodnout
o vylepšeních.

Chceme také být binárně kompatibilní s původním AmigaOS na počítačích Amiga.
Důvod je prostý: nový OS bez programů, které by na něm běžely, má jen malou
šanci přežít. Snažíme se proto, aby přechod z původního OS na náš nový byl co
nejméně bolestivý (ale ne do té míry, že bychom AROS nemohli později
vylepšovat). Jako obvykle má všechno svou cenu a my se snažíme pečlivě
zvažovat, jaká ta cena může být a zda jsme ji my i všichni ostatní ochotni
zaplatit.


Můžete implementovat funkci XYZ?
--------------------------------

Ne, protože:

a) Kdyby to bylo opravdu důležité, bylo by to v původním OS. :-)
b) Proč si to neuděláš sám a nepošleš nám záplatu?

(Záplaty jsou vítány, ale podívej se na otázku `AROS je open source. Znamená
to, že ho může kdokoli měnit, jak uzná za vhodné?`_, kde se dozvíš, co se od
nich očekává.)

Důvodem tohoto postoje je, že kolem je spousta lidí, kteří si myslí, že
právě jejich funkce je ta nejdůležitější a že AROS nemá budoucnost, pokud
nebude zabudována okamžitě. Náš postoj je, že AmigaOS, který se AROS snaží
implementovat, umí vše, co by moderní OS umět měl. Vidíme, že existují
oblasti, kde by se AmigaOS dal vylepšit, ale kdybychom to udělali, kdo by
napsal zbytek OS? Nakonec bychom měli spoustu pěkných vylepšení původního
AmigaOS, která by rozbila většinu dostupného softwaru, ale neměla by žádnou
cenu, protože zbytek OS by chyběl.

Proto jsme se rozhodli blokovat každý pokus o implementaci zásadních nových
funkcí v OS, dokud nebude víceméně dokončen. K tomuto cíli se už ale docela
blížíme, takže v AROSu skutečně bylo implementováno několik novinek, které
v AmigaOS nejsou.


Jak je AROS kompatibilní s AmigaOS?
-----------------------------------

Velmi kompatibilní. Očekáváme, že AROS bude na Amize bez problémů spouštět
existující software. Na jiném hardwaru je nutné existující software znovu
přeložit. Doufáme, že nabídneme preprocesor, který můžeš použít na svůj kód
a který upraví každý kód, jenž by se s AROSem mohl rozbít, a/nebo tě na
takový kód upozorní.

Portování programů z AmigaOS na AROS je v současnosti většinou jen otázkou
prostého překladu, občas s drobnou úpravou tu a tam. Samozřejmě existují
programy, pro které to neplatí, ale u většiny moderních to platí.


Pro jaké hardwarové platformy je AROS dostupný?
-----------------------------------------------

V současnosti je AROS k dispozici v docela použitelném stavu jako nativní
i hostovaný (pod Linuxem) pro architekturu i386 (tj. klony kompatibilní
s IBM PC AT) a pro X86_64. V různých fázích dokončení jsou porty na 68k
Amigy a Raspberry Pi.


Chystá se port AROSu pro PPC?
-----------------------------

Už je k dispozici. Udržované porty AROSu pro PowerPC jsou sam440-ppc
a darwin-ppc.


Proč používáte Linux a X11?
---------------------------

Linux a X11 používáme k urychlení vývoje. Když například implementuješ novou
funkci pro otevření okna, můžeš napsat jen tuto jedinou funkci a nemusíš psát
stovky dalších funkcí v layers.library, graphics.library, hromadu ovladačů
zařízení a vše ostatní, co by tato funkce mohla potřebovat.

Cílem AROSu je samozřejmě být nezávislý na Linuxu a X11 (i když by na nich
stále mohl běžet, pokud by to lidé opravdu chtěli), a to se s nativními
verzemi AROSu pomalu stává skutečností. Pro vývoj však Linux stále
potřebujeme, protože některé vývojové nástroje ještě nebyly na AROS
portovány.


Jak zajistíte přenositelnost AROSu?
-----------------------------------

Jednou z hlavních novinek AROSu oproti AmigaOS je systém HIDD (Hardware
Independent Device Drivers - hardwarově nezávislé ovladače zařízení), který
nám umožní snadno portovat AROS na jiný hardware. Základní knihovny OS
v zásadě nepřistupují k hardwaru přímo, ale přes HIDD, které jsou napsány
pomocí objektově orientovaného systému, jenž usnadňuje nahrazování HIDD
a opětovné použití kódu.


Proč si myslíte, že to AROS zvládne?
------------------------------------

Celé dny slýcháme od spousty lidí, že to AROS nezvládne. Většina z nich buď
neví, co děláme, nebo si myslí, že Amiga je už mrtvá. Když jsme těm prvním
vysvětlili, co děláme, většina souhlasila, že je to možné. S těmi druhými je
to těžší. Nuže, je Amiga právě teď mrtvá? Ti, kdo své Amigy stále používají,
ti pravděpodobně řeknou, že není. Vybuchla ti tvoje A500 nebo A4000, když
Commodore zkrachoval? Vybuchla, když zkrachovala Amiga Technologies?

Faktem je, že pro Amigu se nevyvíjí mnoho nového softwaru (i když Aminet
stále docela pěkně funguje) a že i hardware se vyvíjí pomaleji (ale právě
teď se objevují ty nejúžasnější kousky). Amigácká komunita (která stále
žije) zřejmě sedí a čeká. A pokud někdo vydá produkt, který bude trochu
připomínat Amigu z roku 1984, tento stroj znovu zažije boom. A kdo ví, možná
k němu dostaneš i CD s nápisem "AROS". :-)


Co mám dělat, když AROS nejde sestavit?
---------------------------------------

Uveď prosím podrobnosti o problému, včetně příkazu, kterým jsi AROS
sestavoval, a všech chybových hlášení, která jsi obdržel, a požádej o pomoc
ve `vývojářské poštovní konferenci AROSu`__ nebo v kanálu Slack AROSu. To jsou
vhodná místa pro diskusi o problémech se sestavením a dalších záležitostech
souvisejících s vývojem AROSu, kde ti vývojáři a další lidé obeznámení se
sestavovacím systémem mohou pomoci problém diagnostikovat.

K tomu, abys požádal o pomoc s problémem při sestavení, nemusíš být zavedeným
vývojářem AROSu. Pokud sestavuješ AROS ze zdrojových kódů, již pracuješ
s vývojovým prostředím.

__ https://www.aros.org/


Bude mít AROS ochranu paměti, SVM, RT, ...?
-------------------------------------------

Několik set amigáckých expertů (a lidí, kteří se za ně považovali) se tři
roky snažilo najít způsob, jak implementovat ochranu paměti (MP) pro
AmigaOS. Neuspěli. To naznačuje, že je dost nepravděpodobné, že by běžný
AmigaOS někdy měl MP jako Unix nebo Windows NT.

Ale není vše ztraceno. Existují plány integrovat do AROSu variantu MP, která
umožní ochranu alespoň nových programů, jež o ní vědí. Některé snahy v této
oblasti vypadají opravdu slibně. Navíc, když ti spadne počítač, není to ve
skutečnosti takový problém. Problém je spíše v tom, že:

1. Nemáš pořádnou představu, proč spadl. V podstatě pak musíš šťourat
   třicetimetrovou tyčí v bažině zahalené hustou mlhou.
2. Přijdeš o svou práci.

Restart počítače ve skutečnosti žádný problém není.

Mohli bychom se pokusit vytvořit systém, který přinejmenším upozorní, že se
děje něco podezřelého, který ti dokáže velmi podrobně říct, co se dělo, když
počítač spadl, a který ti umožní uložit práci a *teprve pak* spadnout. Měl
by také mít prostředky ke kontrole toho, co bylo uloženo, aby sis mohl být
jistý, že nepokračuješ s poškozenými daty.

Totéž platí pro SVM (odkládatelnou virtuální paměť), RT (sledování zdrojů)
a SMP (symetrický multiprocessing). Právě plánujeme, jak je implementovat,
a dbáme na to, aby přidání těchto funkcí bylo bezbolestné. Nemají však teď
nejvyšší prioritu. Velmi základní RT už ale přidáno bylo.


Mohu se stát beta testerem?
---------------------------

Jistě, žádný problém. Vlastně chceme co nejvíce beta testerů, takže každý je
vítán! Seznam beta testerů si ale nevedeme, takže stačí, když si stáhneš
AROS, otestuješ, co chceš, a pošleš nám hlášení.


Jaký je vztah mezi AROSem a UAE?
--------------------------------

UAE je emulátor Amigy a jako takový má poněkud jiný cíl než AROS. UAE chce
být binárně kompatibilní i pro hry a kód přistupující přímo k hardwaru,
zatímco AROS chce mít nativní aplikace. AROS je proto mnohem rychlejší než
UAE, ale pod UAE spustíš více softwaru.

Jsme ve volném kontaktu s autorem UAE a je velká šance, že se kód z UAE
objeví v AROSu a naopak. Vývojáři UAE se například zajímají o zdrojové kódy
OS, protože UAE by mohlo některé aplikace spouštět mnohem rychleji, kdyby
šlo některé nebo všechny funkce OS nahradit nativním kódem. Na druhou stranu
by AROS mohl těžit z integrované emulace Amigy.

Protože většina programů nebude na AROSu od začátku k dispozici, Fabio
Alemagna portoval UAE na AROS, takže staré programy můžeš spouštět alespoň
v emulátoru.

V Contribu je k dispozici také `E-UAE`__, což je UAE vylepšené o některé
funkce z `WinUAE`__.

__ http://www.rcdrummond.net/uae/
__ https://www.winuae.net/


Jaký je vztah mezi AROSem a Haage & Partner?
--------------------------------------------

Haage & Partner použili části AROSu v AmigaOS 3.5 a 3.9, například gadgety
Colorwheel a Gradientslider a příkaz SetENV. To znamená, že se AROS svým
způsobem stal součástí oficiálního AmigaOS. Neznamená to však, že by mezi
AROSem a Haage & Partner existoval nějaký formální vztah. AROS je open source
projekt a kdokoli může použít náš kód ve svých projektech, pokud dodrží
licenci.


Jaký je vztah mezi AROSem a MorphOS?
------------------------------------

Vztah mezi AROSem a MorphOS je v podstatě stejný jako mezi AROSem a Haage &
Partner. MorphOS používá části AROSu k urychlení svého vývoje, a to za
podmínek naší licence. Stejně jako v případě Haage & Partner je to dobré pro
oba týmy, protože tým MorphOS získává z AROSu impuls pro svůj vývoj a AROS
získává od týmu MorphOS dobrá vylepšení našeho zdrojového kódu. Mezi AROSem
a MorphOS není žádný formální vztah; takhle prostě funguje open source vývoj.


Jaké programovací jazyky jsou k dispozici?
------------------------------------------

GCC (C, C++) je k dispozici jako nativní i křížový překladač.

Nativně jsou k dispozici jazyky Python_, Regina_, Lua_ a Hollywood_:

+ Python je skriptovací jazyk, který se stal docela populárním díky svému
  pěknému návrhu a vlastnostem (objektově orientované programování, systém
  modulů, mnoho užitečných modulů v základu, čistá syntaxe, ...). Pro port na
  AROS byl založen samostatný projekt, který najdeš na
  https://pyaros.sourceforge.net/.

+ Regina je přenositelný interpret REXXu vyhovující normě ANSI. Cílem portu
  na AROS je kompatibilita s interpretem ARexx z klasického AmigaOS.

+ Lua je výkonný, rychlý, odlehčený a vestavitelný skriptovací jazyk. Port
  na AROS byl rozšířen o dva moduly: siamiga a zulu. První obsahuje několik
  jednoduchých grafických příkazů, druhý je rozhraním k Zune.

+ Hollywood je komerční programovací jazyk pro multimediální aplikace včetně
  her. Můžeš si koupit verzi pro i386-aros (ABI v0).

.. _Python: https://www.python.org/
.. _Regina: https://regina-rexx.sourceforge.io/
.. _Lua: https://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/


Proč není v AROSu žádný m68k emulátor?
--------------------------------------

Už existuje pokus o integraci emulátoru janus-uae.

Ale proč prostě neimplementujeme virtuální procesor m68k, aby software běžel
přímo na AROSu? Problém je v tom, že software pro m68k očekává data ve
formátu big-endian, zatímco AROS běží i na procesorech little-endian.
Little-endian rutiny v jádru AROSu by musely pracovat s big-endian daty
v emulaci. Automatický převod se zdá být nemožný (jen jeden příklad:
v jedné struktuře v AmigaOS je pole, které někdy obsahuje jeden ULONG
a někdy dva WORDy), protože nedokážeme určit, jak je několik bajtů v RAM
zakódováno.

.. _UAE: http://www.amigaemulator.org/


Chystá se AROS Kickstart ROM?
-----------------------------

Už jsou k dispozici v balíčku amiga-m68k-boot-iso v adresáři boot/amiga.


Organizace a řízení projektu
============================

Kdo vede projekt AROS?
----------------------

AROS je dobrovolnický projekt. Nevlastní ho ani neprovozuje žádná firma a
nikdo není projektem placen za to, že na něm pracuje.

Projekt založil v roce 1995 Aaron Digulla. Dnes ho spravují Nick Andrews
(Kalamatee) a Matthias Rustler (mazze). Odpovídají za směřování projektu a
jeho rozhodnutí a nesou konečnou odpovědnost za jeho další vývoj, jeho
infrastrukturu a jeho zachování.

Další dlouholetí členové vývojového týmu zůstávají s projektem v kontaktu, ale
na jeho každodenním vývoji se už aktivně nepodílejí. Michal Schulz, dříve
jeden ze správců, ustoupil do pozadí, aby se mohl soustředit na svou práci na
emulaci m68k.


Z čeho se skládá infrastruktura projektu a kdo ji platí?
--------------------------------------------------------

+ **Zdrojový kód** je hostován na serveru GitHub v organizaci
  `aros-development-team`__.
+ **Sestavení**, včetně nočních sestavení, se vytvářejí pomocí služby Azure
  Pipelines.
+ **Web** je hostován na serveru SourceForge.
+ **Doménu aros.org** stále platí Aaron Digulla. Její DNS spravují současní
  správci.

Projekt nemá žádné další provozní náklady a neexistuje žádný projektový fond.
Dary poskytnuté prostřednictvím tohoto webu jdou přímo konkrétnímu vývojáři,
kterého si dárce vybere, nikoli projektu.

__ https://github.com/aros-development-team


Jak se přijímají rozhodnutí?
----------------------------

Změny se navrhují, projednávají a posuzují veřejně: ve vývojářské poštovní
konferenci, ve vývojářském kanálu Slack a v hlášeních (issues) a pull
requestech na serveru GitHub. Každý je vítán, pokud se chce těchto diskusí
účastnit, a odlišné názory a nápady jsou podporovány.

Konečné rozhodnutí o tom, co bude do AROSu přijato, a o směru, kterým se
projekt vydá, náleží správcům. Rozhodnutí se přijímají s ohledem na celý
projekt: na všechny jeho podporované platformy, jeho stávající uživatele a
software a jeho dlouhodobé cíle, nikoli na potřeby jednoho přispěvatele, jedné
platformy nebo jedné distribuce.


AROS je open source. Znamená to, že ho může kdokoli měnit, jak uzná za vhodné?
------------------------------------------------------------------------------

Kdokoli smí zdrojové kódy AROSu používat, studovat, upravovat a dále šířit za
podmínek licence `AROS Public License`__ a kdokoli smí navrhovat změny.

Tuto otevřenost by si nikdo neměl plést s absencí dohledu, směřování nebo
standardů. AROS není prostor, kde si každý může dělat, co chce. Příspěvky jsou
vítány, ale musí respektovat étos projektu, jeho cíle a jeho celkové směřování
a před přijetím jsou posuzovány. Nikdo by neměl očekávat, že bude moci
projektu vnutit vlastní agendu nebo že otevřenost projektu použije jako
ospravedlnění takového jednání.

V AROSu jsou nepřijatelné zejména tyto věci:

+ využívání projektu nebo jeho součástí k prosazování soukromých či komerčních
  zájmů, například zaváděním reklamy do součástí;
+ směrování vývoje k jedné upřednostňované platformě na úkor ostatních nebo na
  úkor širších cílů projektu;
+ změny, které slouží jedné distribuci nebo jednomu forku ke škodě AROSu jako
  celku.

__ ../../license.html


Proč má kontrolu nad projektem tak málo lidí?
---------------------------------------------

Důvody jsou dva.

Prvním je prostě historie. Současná struktura se vyvíjela dlouhou dobu a
odráží to, kdo k AROSu soustavně přispíval, podporoval ho a zůstal mu oddán.
Po většinu posledních patnácti a více let projevovali ostatní jen malý trvalý
zájem o převzetí odpovědnosti za projekt, a tak skupina lidí, kteří se o něj
starají, zůstala malá.

Druhým je zkušenost. V minulosti se jednotlivci pokoušeli zaujmout nad
projektem pozici autority, přesměrovat jeho vývoj a využít ho jako nástroj k
vlastnímu prospěchu. Vybudovat projekt, jeho komunitu a práci, která do něj
byla vložena, trvá mnoho let, ale k tomu, aby jim někdo způsobil značnou
škodu, stačí velmi málo času.

Míra kontroly, která je udržována, je přímým důsledkem toho. Jejím účelem není
omezovat legitimní zapojení nebo spolupráci. Je tu proto, aby chránila projekt
a příspěvky, které mu za ta léta věnovalo mnoho lidí, před tím, aby se jich
někdo zmocnil, svedl je špatným směrem nebo je zneužil k jiným účelům než těm,
pro které byl AROS založen.


Jak se mohu zapojit?
--------------------

To, aby se do AROSu aktivně zapojovalo více lidí, je něco, co si projekt
přeje. Cesta dovnitř je pro všechny stejná:

1. Vytvoř si fork repozitáře na serveru GitHub a posílej vylepšení jako pull
   requesty.
2. Přihlas se do vývojářské poštovní konference nebo do kanálu Slack a zapoj
   se do diskuse, zejména předtím, než začneš pracovat na větší změně.
3. Přečti si zásady pro přispívání, postup pro pull requesty a kodex chování
   ve zdrojovém repozitáři (``CONTRIBUTING.md`` a ``PULL_REQUESTS.md``) a řiď
   se jimi.

Nepotřebuješ k tomu žádné zvláštní postavení. Další způsoby, jak pomoci,
například testování, dokumentaci a překlady, najdeš na stránce `Přispívání`__.

__ ../developers/contribute


Jak získám právo zápisu do repozitáře nebo vliv na směřování projektu?
----------------------------------------------------------------------

Přímý přístup do repozitáře a jakákoli vyšší míra odpovědnosti či vlivu jsou
založeny na prokázané důvěře, spolehlivosti a trvalé oddanosti projektu. V
praxi to znamená historii dobrých příspěvků odváděných v průběhu času, které
respektují cíle projektu a lidi, kteří na něm pracují.

Neexistuje žádný pevný počet záplat ani pevná doba, které by někoho
kvalifikovaly. O rozšíření přístupu, odpovědnosti nebo kontroly rozhodují
správci a vzhledem k historii projektu se tato rozhodnutí neberou na lehkou
váhu. Projevení zájmu je vítáno, ale samo o sobě zapojení nenahrazuje.


Kdo vlastní autorská práva k AROSu?
-----------------------------------

Kód napsaný pro AROS je poskytován projektu jako celku. Nese upozornění na
autorská práva The AROS Development Team a je licencován pod AROS Public
License. Přispěvatelé ke kódu napsanému pro AROS nepřipojují osobní upozornění
na autorská práva ani vlastní licenční podmínky.

Kód, který pochází odjinud, si ponechává své původní upozornění na autorská
práva a svou licenci a je v AROSu používán za podmínek této licence.


Mohu si vytvořit vlastní fork nebo distribuci AROSu?
----------------------------------------------------

Ano. Forky a distribuce jsou podle AROS Public License povoleny a správci
distribucí mohou svobodně rozhodnout, co jejich distribuce obsahuje a jak
vypadá.

Na oplátku se od forku nebo distribuce očekává, že bude jasně a přesně uvádět,
že vychází z vývoje původního (upstream) AROSu, že se bude od upstream
projektu jasně odlišovat a že bude otevřeně informovat o jakékoli binární
nekompatibilitě s upstream AROSem. Web AROSu neodkazuje na forky, distribuce
ani komunitní zdroje, které zkreslují, odkud práce pochází. Úplné prohlášení
je na `úvodní stránce`__ tohoto webu.

Forky a distribuce jsou na projektu AROS nezávislé. Spravují je jejich vlastní
autoři, kteří za AROS nemluví, a s dotazy k nim je nejlepší obracet se na tyto
autory.

Distribuce založená na hlavní větvi AROSu smí mít "AROS" v názvu; fork nesmí.
Viz `Mohu použít název "AROS" pro svůj vlastní projekt nebo produkt?`_.

__ ../../index


Mohu použít název "AROS" pro svůj vlastní projekt nebo produkt?
---------------------------------------------------------------

To záleží na tom, o jaký projekt jde.

===========================================  ================
Druh projektu                                "AROS" v názvu
===========================================  ================
Distribuce založená na hlavní větvi AROSu    Povoleno
Fork AROSu                                   Nepovoleno
Software, který běží na AROSu                Nepovoleno
===========================================  ================

Každý smí název používat k tomu, aby na AROS *odkazoval*: aby pravdivě uvedl,
že jeho software běží na AROSu, byl napsán pro AROS nebo je na AROSu založen.
Omezení se týkají používání tohoto názvu nebo názvu z něj odvozeného k
*označení* něčeho jiného.

Distribuce založené na hlavní větvi AROSu
    Distribuce, která balí operační systém tak, jak je vyvíjen v hlavním
    repozitáři AROSu, spolu s výběrem softwaru a nastavení, *je* AROS a smí
    mít "AROS" v názvu. I tak by měla mít název, který ji odlišuje od upstream
    projektu a od ostatních distribucí.

Forky
    Fork je samostatně vyvíjená verze zdrojových kódů, která se od hlavní
    větve AROSu odchýlila. Už to není operační systém, který vyvíjí tento
    projekt, a nemusí s ním být kompatibilní. Fork proto nesmí mít "AROS" v
    názvu. Smí, a měl by, uvádět, že je od AROSu odvozen.

Software, který běží na AROSu
    Aplikace, knihovny, frameworky, běhová prostředí a další vrstvy, které
    běží nad AROSem, nejsou AROS a nesmějí používat "AROS" ani název z něj
    odvozený jako svůj vlastní název.

"AROS" je názvem tohoto operačního systému a projektu, který ho vyvíjí, od 90.
let 20. století. Jiný projekt, který nese stejný název nebo název, jenž se s
ním dá snadno zaměnit, naznačuje spojitost, která neexistuje.

U forků a u softwaru, který běží na AROSu, to vylučuje zejména názvy, které:

+ se skládají z "AROS" s přidanými písmeny nebo slovy nebo se od něj liší jen
  jedním či dvěma písmeny;
+ by mohly být chápány jako verze, edice, větev, součást nebo nástupce AROSu;
+ jinak naznačují, že projekt je oficiální nebo že ho The AROS Development
  Team podporuje či spravuje.

Na tom, co takový název znamená, nezáleží. Když se názvu jako zkratce přiřadí
jiný význam, nezmění to, jak vypadá nebo zní, ani to, co si lidé pomyslí, když
ho uvidí.


Nedovoluje mi licence název používat?
-------------------------------------

Ne. Licencování autorských práv a pojmenování jsou dvě oddělené věci.

AROS Public License upravuje používání, úpravy a další šíření *zdrojového
kódu*. Výslovně neuděluje práva k ochranným známkám. Svolení stavět na AROSu,
vytvořit jeho fork nebo pro něj psát software proto není svolením používat
název nebo loga AROSu způsobem, který naznačuje podporu ze strany projektu
AROS nebo příslušnost k němu.

Stejné rozlišení dělá většina open source projektů, a to ze stejného důvodu:
uživatelé, vývojáři a přispěvatelé potřebují mít možnost poznat, odkud daný
software pochází, kdo za něj odpovídá a kam se obrátit pro podporu.


Jak mám pojmenovat a popsat software, který je postaven na AROSu nebo pro něj?
------------------------------------------------------------------------------

Dej mu vlastní název a spojitost s AROSem uveď v jeho popisu. Například:

+ "*Název*, aplikační framework pro AROS"
+ "*Název*, běhové prostředí pro AROS"
+ "*Název*, operační systém odvozený od AROSu" (pro fork)

Tím se uzná operační systém, na kterém software běží, aniž by si software
vypůjčoval jeho identitu. Nic se tím neztrácí: o softwaru napsaném pro jiné
operační systémy se uvádí, že na nich běží, aniž by přebíral jejich názvy.

Odlišný název je zvlášť důležitý tam, kde je software něčím jiným než
operačním systémem, například knihovnou, frameworkem nebo aplikační vrstvou,
která běží nad AROSem. Název, který je téměř totožný s názvem operačního
systému, komukoli ztěžuje rozpoznat, kde jedno končí a druhé začíná: která
dokumentace platí, kam se má hlásit chyba a kdo odpovídá za její opravu.

Nezávislý projekt by měl také uvést, že je nezávislý, například: "Toto je
nezávislý projekt, který není spojen s The AROS Development Team". Takové
prohlášení je dobrou praxí, ale nevyváží název, který je matoucí už od
začátku.

Pokud si nejsi jistý, zda je název přijatelný, zeptej se ve vývojářské
poštovní konferenci, než pod ním začneš zveřejňovat. Změnit název je mnohem
snazší předtím, než se projekt etabluje, než potom.


Kdo mluví za projekt AROS?
--------------------------

Za projekt mluví správci uvedení v otázce `Kdo vede projekt AROS?`_. Oficiální
informace jsou zveřejňovány na tomto webu, ve zdrojovém repozitáři a
prostřednictvím vývojářské poštovní konference a vývojářských kanálů projektu.

O AROSu se diskutuje na mnoha dalších místech, včetně fór a sociálních sítí, a
to mezi lidmi, kteří ho používají, píší pro něj software nebo se o něj prostě
zajímají. Tyto diskuse jsou vítány, ale lidé, kteří se jich účastní, mluví
sami za sebe. Výroky, které tam zazní o postoji projektu, jeho plánech,
zásadách nebo o jeho vztahu k jiným projektům, jsou osobním názorem a
nepředstavují AROS, ať jsou vyjádřeny jakkoli sebejistě, pokud nepocházejí od
správců.

Pokud potřebuješ znát postoj projektu k něčemu, zeptej se prostřednictvím
oficiálních kanálů.


Noční sestavení
===============

Co jsou noční sestavení?
------------------------

Noční sestavení AROSu jsou vývojová sestavení vytvářená z aktuálního stavu
zdrojového stromu AROSu. Jsou určena především vývojářům, testerům a lidem,
kteří chtějí sledovat nejnovější vývoj AROSu a experimentovat s ním. Jako
taková by měla být chápána jako průběžný vývojový snímek, nikoli jako
vyladěné vydání určené koncovým uživatelům. Jejich konfigurace má proto
poskytovat konzistentní prostředí pro testování aktuálního vývoje AROSu,
nikoli představovat definitivní volbu vzhledu plochy nebo uživatelského
prostředí.

Proč noční sestavení nepoužívají "hezké" motivy?
------------------------------------------------

Problém je v tom, že "hezké" je subjektivní. Neexistuje výchozí motiv, který
by vyhovoval všem, a měnit výchozí nastavení projektu pokaždé, když se někomu
nelíbí, jen mění estetiku v nekonečný koloběh "vraťte to zpátky".

Proto je důležité rozlišovat mezi samotným AROSem a jednotlivými distribucemi.
Správci distribucí mohou svobodně rozhodnout, jak jejich distribuce vypadá
a s jakými výchozími nastaveními je dodávána.

Noční sestavení nemají být vyladěným desktopovým produktem s vyhraněným
názorem; jsou to konzistentní prostředí pro vývoj a testování. Pokud dáváš
přednost jinému vzhledu, přizpůsob si ho nebo kolem této preference vytvoř
distribuci.

Osobní preference je zcela legitimní důvod k přizpůsobení vlastního systému,
není však příliš dobrým základem pro změnu výchozích nastavení projektu.


Otázky k softwaru
=================

Co je to Zune?
--------------

Pokud jsi na tomto webu četl o Zune: je to prostě open source reimplementace
MUI, což je výkonný (ve smyslu přívětivý k uživatelům i vývojářům) objektově
orientovaný shareware GUI toolkit a de facto standard na AmigaOS. Zune je
preferovaný GUI toolkit pro vývoj nativních aplikací pro AROS. Samotný název
nic neznamená, jen dobře zní.


Co je grafická a ostatní paměť ve Wandereru?
--------------------------------------------

Toto rozdělení paměti je většinou pozůstatkem z amigácké minulosti, kdy
grafická paměť byla pamětí pro aplikace, než se přidala další paměť zvaná
FAST RAM, v níž se nacházely aplikace, zatímco grafika, zvuky a některé
systémové struktury zůstávaly v grafické paměti.

V hostovaném AROSu žádná paměť typu Other (FAST) není, jen GFX; v nativním
AROSu může mít GFX maximálně 16 MB, což ale neodráží stav paměti grafického
adaptéru... Nemá to žádnou souvislost s množstvím paměti na tvé grafické
kartě.

*Dlouhá odpověď*
Grafická paměť v nativní verzi pro i386 označuje spodních 16 MB paměti
v systému. Těchto spodních 16 MB je oblast, kde mohou ISA karty provádět
DMA. Paměť alokovaná s MEMF_DMA nebo MEMF_CHIP skončí tam, zbytek v ostatní
(fast) paměti.

Informace o paměti získáš příkazem C:Avail HUMAN.


Co vlastně dělá akce Snapshot <all/window> ve Wandereru?
--------------------------------------------------------

Tento příkaz si zapamatuje rozmístění ikon ve všech oknech (nebo v jednom
okně).


Jaké jsou volby příkazové řádky spustitelného souboru hostovaného AROSu?
------------------------------------------------------------------------

Jejich seznam získáš spuštěním příkazu ./aros -h.


Jaké volby jádra nativního AROSu se používají na řádku GRUBu?
-------------------------------------------------------------

Zde jsou některé z nich::

    floppy=<disabled/nomount>   Nastavuje volby zařízení trackdisk
        disabled                - zcela vypne inicializaci trackdisk.device
        nomount                 - inicializuje trackdisk.device, ale nevytvoří
                                  DOS zařízení

    ATA=32bit           - Zapne 32bitové I/O v ovladači pevného disku (bezpečné)
    forcedma            - Vynutí aktivní DMA v ovladači pevného disku (mělo by
                          být bezpečné, ale nemusí)
    gfx=<hidd name>     - Použije uvedený HIDD jako grafický ovladač
    lib=<name>          - Načte a inicializuje uvedenou knihovnu/HIDD

Upozorňujeme, že u voleb se rozlišují velká a malá písmena.


Jak vytvořím DOS skript, který se automaticky spustí pro nainstalovaný balíček?
-------------------------------------------------------------------------------

1) Vytvoř podadresář S a přidej do něj soubor s názvem 'Package-Startup'
   obsahující DOS skript daného balíčku, který chceš spouštět při každém
   startu.

2) V souboru envarc:sys/packages vytvoř proměnnou, která obsahuje cestu
   k podadresáři S tvého balíčku.

Příklad rozložení adresářů::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup

Proměnná v envarc:sys/packages by se mohla jmenovat 'myapp' (název je jen
příklad); její obsah by pak byl 'sys:extras/myappdir'.

Skript Package-Startup by pak byl volán ze startup-sequence.


Otázky k hardwaru
=================

Kde mohu najít seznam hardwaru kompatibilního s AROSem?
-------------------------------------------------------

Seznam najdeš na stránce `AROS Wiki <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__.
Tam se mohou nacházet i další seznamy od uživatelů AROSu.


Proč nemůže AROS bootovat z jednotky nastavené na IDE kanálu jako SLAVE?
------------------------------------------------------------------------

Takže, AROS by měl bootovat, pokud je jednotka SLAVE, ale POUZE tehdy, je-li
na IDE i jednotka MASTER. Tak to má být podle IDE
specifikace a AROS se jí drží.


Můj systém se zastaví s červeným kurzorem na obrazovce nebo s prázdnou obrazovkou
---------------------------------------------------------------------------------

Jedním z důvodů může být použití sériové myši (ty zatím nejsou podporovány).
V tuto chvíli musíš s AROSem používat PS/2 myš. Dalším důvodem může být výběr grafického
režimu v bootovacím menu, který tvůj hardware nepodporuje. Restartuj počítač a zkus jiný režim.
