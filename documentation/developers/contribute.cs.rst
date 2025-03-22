==========
Contribute
==========

:Authors:   Adam Chodorowski 
:Copyright: Copyright Š 1995-2020, The AROS Development Team
:Status:    Done. 

.. Contents::


Potřebujeme tvou pomoc!
=======================

Máme poměrně málo aktivních vývojářů, což bohužel znamená, že vývoj je docela
pomalý. Zkrátka potřebujeme více lidí, kteří by nám pomohli! Existuje ještě
velké množství úkolů, které potřebují oddané vývojáře. Sahají od velkých
projektů k malým, od hardwarového hackování, přes vysokoúrovňový systém
k programování aplikací. V podstatě se pro každého, kdo by chtěl přispět,
něco najde, bez ohledu na to, jak zdatný je v programování!

Pro ty, kdo nejsou programátory, máme ještě stále mnoho úkolů, s kterými
nám mohou pomoci! Například psaní dokumentace, překládání programů a
dokumentace do dalších jazyků, vytváření grafiky a odchytávání chyb.
Tyto úkoly jsou stejně tak důležité jako programování!


Aktuální úkoly
==============

Zde je seznam některých úkolů, se kterými potřebujeme pomoci, a na kterých
momentálně nikdo nedělá. Nejedná se o kompletní seznam všech úkolů, ale
obsahuje ty úkoly, které považujeme za důležité.


Programování
------------

+ Implementace chybějících knihoven, zdrojů, zařízení nebo jejich součástí.
  Podívej se na detailní zprávu o vývoji, aby jsi zjistil více informací
  o částech, které chybí.


+ Implementace nebo zdokonalení ovladačů hardware zařízení:
  
  - AROS/m68k-pp:
    
    + Grafika
    + Vstup (dotyková obrazovka, tlačítka)
    + Zvuk
 
  - AROS/i386-pc:

    + Konkrétní ovladače grafických karet (máme pouze obecné, ne zrovna
      příliš akcelerované). Krátký seznam přání:
      
      - nVidia TNT/TNT2/GeForce (začlo se, ale nedokončilo) 
      - S3 Virge
      - Matrox Millenium
    
    + chybí USB classes
    + SCSI
    + Konkrétní IDE čipsety
    + Zvuk
    + ... cokoliv, na co bys mohl přijít.

  - Všeobecná podpora tiskáren.
 
+ Portování na další architektury. Několik příkladů hardwaru, pro
  který AROS ještě nemá port nebo začal být portován:

  - Amiga, m68k i PPC.
  - Atari.
  - HP 300 series.
  - SUN Sparc.
  - iPaq.
  - Macintosh, m68k i PPC.

+ Implementace chybějících editorů nastavení:

  - Overscan
  - Paleta
  - Pointer
  - Tiskárna
 
+ Zdokonalování knihovny C link

  Tedy implementace chybějících ANSI (a některých POSIX) funkcí v clib,
  aby se usnadnilo portování UNIX softwaru (např. GCC, make a binutils).
  Nejdůležitější věc, která chybí, je podpora POSIX style signaling,
  ale i jiné funkce.

+ Implementace více datatypů a vylepšení těch stávajících

  Počet datatypů obsažených v AROSu je poměrně malý. Některé datatypy,
  které potřebují vylepšení, aby byly použitelné nebo potřebují
  implementaci úplně od základu:

  - amigaguide.datatype
  - sound.datatype
    
    + 8svx.datatype

  - animation.datatype
    
    + anim.datatype
    + cdxl.datatype
    
  
+ Portování programů třetích stran:

  - Textové editory jako jsou ViM a Emacs.
  - Balík vývojových nástrojů, které zahrnují GCC, make, binutils a další
    GNU vývojářské nástroje.
  - AmigaOS Open Source software jako je SimpleMail, YAM, Jabbwerwocky


Dokumentace
-----------

+ Psaní uživatelské dokumentace. Týká se psaní hlavních Uživatelských
  příruček pro začátečníky a experty, a také dokumentace na všechny
  standardní AROS programy.

+ Psaní vývojářské dokumentace. Třebaže je tato práce v pokročilejším
  stádiu než uživatelská dokumentace, stále je toho ještě hodně zpracovávat.
  Pro příklad, zatím nemáme žádnou dobrou příručku pro začínající programátory.
  Bylo by taky hezké mít ekvivalent k ROM Kernel manuálům pro AROS.


Překlad
-------

+ Překládání samotného AROSu do více jazyků. Nyní jsou více či méně kompletně
  podporovány pouze tyto jazyky:

  - Angličtina
  - Němčina
  - Švédština
  - Norština
  - Italština
  - Francouzština
  - Ruština

+ Překlad dokumentace a internetových stránek do více jazyků. Aktuálně je
  web kompletní pouze v angličtině. Překládá se pozvolna i do dalších jazyků,
  ale zbývá ještě hodně práce.


Ostatní
-------

+ Koordinace GUI designu pro AROS programy, jako jsou prefs programy,
  nástroje a utility.


Připoj se k týmu
================

Chceš se připojit k vývojářskému týmu? Skvěle! V tom případě se přihlaš k
`vývojářskému mailing listu`__, o který se zajímáš (*vřele* doporučujeme připojit
se alespoň k hlavnímu vývojářskému listu) a požádej o přístup k Subversion
repozitáři. A je to. :)

Napiš krátký mejlík na vývojářský list, něco o sobě, co děláš a jakým způsobem
bys rád pomohl. Pokud budeš mít nějaký problém, neváhej poslat email do listu
nebo se zeptej na některém z `IRC kanálů`__. Také, než začneš dělat na něčem
konkrétním, napiš email do listu s tím, co budeš dělat, nebo aktualizuj
databázi úkolů. Takto se dá předejít tomu, aby několik lidí dělalo
nedopatřením na jednom a tom samém úkolu...


__ ../../contact#mailing-lists
__ ../../contact#irc-channels


Subversion repozitář
--------------------

AROS repozitář běží na Subversion serveru, který je chráněný heslem,
což znamená, že musíš požádat o přístup, aby jsi se mohl podílet na vývoji.
Hesla jsou kryptována, kryptované heslo si můžeš vytvořit pomocí našeho
`online kryptovacího nástroje hesla`__.

Pošli prosím kryptované heslo společně s tvým vlastním uživatelským jménem
a skutečným jménem na adresu `Aarona Digully`__ a počkej na odezvu. Aby jsi
urychlil proces přístupu, napiš do předmětu zprávy toto "Access to the
AROS SVN server" a do těla napiš "Please add <username> <password>", např.::

    Please add digulla xx1LtbDbOY4/E

Může to trvat několik dní, jelikož Aaron je hodně vytížený, takže měj trpělivost. 

Abys věděl, jak používat AROS SVN server, přečti si prosím "`Práce s
SVN`__". I pokud už víš jak používat SVN, je stále užitečné jej prostudovat,
protože obsahuje informace a rady určené pro AROS repozitář
(např. jak se do něj zalogovat).

__ http://aros.sourceforge.net/tools/password.html 
__ mailto:digulla@aros.org?subject=[Access%20to%20the%20AROS%20SVN%20server]
__ svn
 
