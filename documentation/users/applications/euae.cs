===============================================
Spouštění klasických Amiga aplikací z Wandereru
===============================================

:Authors:   Matthias Rustler
:Copyright: Copyright Š 2007, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::

Úvod
----

E-UAE umí emulovat klasický Amiga hardware a umožňuje spouštět aplikace
pod moderním hardwarem a moderními operačními systémy. Dokonce je možné
spustit E-UAE pomocí ikony z Wandereru takovým způsobem, že nahraje přímo
i tebou zvolenou aplikaci. Trik je v tom, že použijeme skript, který spustí
E-UAE s určitými parametry. Skript dostane ikonu "iconx" s obecným
(default tool) nástrojem.


Příprava E-UAE
--------------

Program E-UAE pro AROS najdeš v contrib archivu v nočních buildech a cesta je
*System:Extras/Emu/E-UAE*.

Pro spuštění E-UAE potřebuješ soubor ROM. Legální způsob jak jej získat je
koupit si Cloanto Amiga Forever nebo Amiga Classix CD-Roms. Nebo jej můžeš
vykopírovat ze skutečné Amigy pomocí nástroje zvaného "TransRom". Zkopíruj
image soubory někam na pevný disk, kde máš uložený AROS. Následující příklad
předpokládá, že jsi vytvořil adresář s názvem "uae" na disk "work:". (Tip:
obrazy (images) z Cloanto CD jsou kryptovány. Budeš potřebovat
ještě soubor rom.key.)

V editoru uprav stávající konfigurační soubor *System:Extras/Emu/E-UAE/.uaerc*
Minimálně by jsi měl určit cesty k ROM obrazům. Příklad::

    amiga.rom_path     = work:uae
    amiga.use_dither   = false
    cpu_type           = 68020
    chipset            = ecs
    chipmem_size       = 4
    cachesize          = 4096
    fastmem_size       = 8
    gfx_linemode       = double
    kickstart_rom_file = $(FILE_PATH)/kick13.rom
    #kickstart_key_file = $(FILE_PATH)/rom.key
    sound_output       = none

A teď si uděláme test. Otevři shell pro cestu *System:Extras/Emu/E-UAE*
a napiš *i386-aros-uae*. Pokud se po chvíli objeví Workbench disketa,
(např. ruka u Kickstartu 1.3 nebo zajíždějící disketa u Kickstartu 3.1)
tak jsi zdolal první překážku. I když už to takto běží, tak přesto věnuj
pozornost chybovým hláškám a snaž se je opravit.


Nastavení
---------

E-UAE má hodně konfigurovatelných možností, které se ukládají do konfiguračních
souborů a také má několik možností v příkazové řádce. Podívej se na dokumentaci
pro E-UAE. Když spustíš E-UAE takto: ``i386-aros-uae -f config1 -option1
-option2``, nejprve se nahraje soubor *.uaerc*. Pak se nahraje soubor
s parametrem -f a přepíše se předešlé nastavení. Poté se použijí možnosti
dané příkazovým řádkem, a znovu se přepíšou možnosti nastavené předtím.

Doporučujeme, aby jsi vytvořil konfigurační soubory, které emulují
skutečné počítače:

* a500-13.uaerc: 68000 processor, ecs, kick1.3, no acceleration
* a1200-31.uaerc: 68020, aga, kick 3.1, additional memory
* a4000-31.uaerc: no limits

Tady je příklad pro *a500-13.uaerc*::

    cpu_type=68000
    cpu_speed=real
    kickstart_rom_file=$(FILE_PATH)/kick13.rom

Psaní konfiguračních souborů je nejsložitější část této příručky.
Pokud máš Amiga Classix CDRom můžeš na něm vyhledat pár rad ohledně psaní
konfiguračních souborů. Nebo můžeš napsat ``i386-aros-uae -h >uaecommands``
a dostaneš se ke startovnímu bodu se všemi možnými volbami.


Instalování aplikací
--------------------

Potřebuješ soubory s obrazy (images) disků aplikací, které budeš chtít spustit.
Tyto obrazy mají příponu *.adf*. Můžeš si je uložit na libovolné místo.
Například my používáme *work:uae*.


Vytváření a spouštění skriptů z ikony
-------------------------------------

V dalším kroku si vytvoříš pomocí textového editoru skript, kterým budeš
spouštět E-UAE. Tento příklad u hry Zarathrusta má 2 diskety:


    cd system:emu/e-uae
    i386-aros-uae -f work:uae/a500-13.uaerc -0 work:uae/Zarathrusta1.adf -1 work:uae/Zarathrusta2.adf

První řádek určuje aktuální adresář pro E-UAE. Potom spustíš E-UAE pomocí
konfiguračního souboru *a500-13.uaerc* a vložíš obraz disku do mechaniky 0 a 1.

Uložíš soubor jako *Zarathrusta* ve *work:uae*.

A nakonec přidáš ikonu ke skriptu. Poté co otevřeš adresář *work:uae*
ve Wandereru, klikni na ikonu skriptu a zvol si *Icon/Information*
v menu. Napiš *c:iconx* jako default tool. (IconX tool spouští textové soubory
jako DOSové skripty). Na stránce Tooltypes information o ikoně napiš
*WINDOW=con:0/20//600/Zarathrusta/AUTO*. Toto má za následek vytvoření
většího výstupního okna, takže nebude problém se čtením chybových hlášek.

Dvojklikem na ikonu spustíš E-UAE s danou aplikací.


Pevné disky
-----------

E-UAE umožňuje používat adresáře hostovaného systému buď jako hardfiles nebo
jako pevné disky. Podrobnější informace nalezneš v souboru
*Extras/Emu/E-UAE/docs/configuration.txt*. Následující příklad ti ukáže,
*jakým způsobem můžeš používat adresáře *work:uae/workbench*
*a *work:uae/programs* jako pevný disk::

    filesystem2=rw,:Workbench:work:uae/workbench,0
    filesystem2=rw,:Programs:work:uae/programs,-1

Na takový disk dokonce můžeš i nainstalovat AmigaOS a nabootovat z něj.
Disk, ze kterého by měl systém bootnout musí mít nejvyšší bootovací prioritu
(je to ten poslední parametr v možnostech filesystem2).


Grafika
-------

Bohužel, AROS E-UAE nemá emulaci Picasso, tzn. že jsi omezený na 256
barev na obrazovce.

Několik rad, jak získat lepší rozlišení a výkon:

+ V konfiguraci používej volbu *chipmem_size = 16*. To poskytne 16*512 = 8 MB Chip Ram.
+ Dále používej volbu *z3mem_size=x* kde *x* musí být něco z řady 1,2,4,6,8,16,32.
+ Zvol si High Res Laced v nastavení Screenmodu v Prefs.
+ Používej nejvyšší možné nastavení v Overscanu v Prefs.
+ Nainstaluj si nástroj *FBlit*. který využívá určité patche k tomu,
  aby se používala Fast Ram namísto Chip RAM.
