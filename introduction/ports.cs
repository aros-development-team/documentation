=====
Porty
=====

:Authors:   Adam Chodorowski, Matthias Rustler 
:Copyright: Copyright © 1995-2006, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::


Úvod
====

Vzhledem k tomu, že AROS je přenosný operační systém, je k dispozici pro několik
různých platforem. "Port" AROSu je přesně to, co znamená, to jest verze
AROSu upravená pro určitou platformu.


Příchutě - flavors
------------------

Porty jsou rozděleny na dvě hlavní varianty, v terminologii AROSu také "flavors",
jmenovitě "nativní" a "hostované".

Nativní porty běží přímo na hardwaru a mají absolutní kontrolu nad
počítačem. V budoucnu se stanou doporučovaným způsobem pro běh AROSu,
protože poskytují lepší účinnost i výkon, ale v současné době jsou příliš
neúplné, aby mohly být používány (přinejmenším pro vývoj).

Hostované porty běží na jiném operačním systému a k hardwaru nepřistupují
přímo, ale používají prostředky poskytované hostitelským OS.
Výhodou hostovaných portů je jejich jednodušší programování, protože není
nutné psát low-level ovladače. A vzhledem k tomu, že vývoj AROSu ještě
není self-hosted (sebehostitelský - nelze kompilovat AROS z AROSu), výrazně urychlují
programování, protože vedle sebe může běžet vývojové prostředí i AROS
a pro vyzkoušení nového kódu není třeba ztrácet čas neustálým restartováním.


Pojmenování
-----------

Různé porty AROSu jsou pojmenovány ve tvaru <procesor>-<platforma>, kde <procesor> je
procesor architektury a <platforma> je symbolický název platformy.
Platforma portu může být buď hardwarová, jako např. "pc" nebo "amiga",
u nativních portů, nebo operační systém, jako např. "linux" nebo "freebsd",
u hostovaných portů. V případech, kdy není zřejmé, že se jedná o AROS, přidá
se na začátek názvu portu "AROS/", například "AROS/i386-pc".


Přenositelnost
--------------

AROS spustitelné soubory pro konkrétní procesor jsou přenosné na všechny porty,
které tento procesor používají, což znamená, že spustitelné soubory kompilované pro
"i386-pc" budou v pohodě pracovat na "i386-linux" i "i386-freebsd".


Současné porty
==============

Níže je uveden seznam všech portů AROSu, které jsou v provozuschopném stavu
a/nebo aktivně vyvíjeny. Ne všechny z nich jsou dostupné ke stažení, protože nemusí
být buď dostatečně kompletní nebo mají kompilační požadavky, které nemůžeme
vždy splnit kvůli omezeným zdrojům.


AROS/i386-pc a x86-64
---------------------

:Varianta:  Nativní
:Stav:      Funkční, neúplná podpora ovladačů
:Udržována: Ano

AROS/i386-pc je nativní port AROSu na běžné IBM PC AT počítače a
kompatibilní používající x86 (nebo x86-64) rodinu procesorů. Název je tak trochu
zavádějící, protože AROS/i386-pc ve skutečnosti vyžaduje třídu procesoru alespoň 486
kvůli použití nějakých instrukcí, které na 386 nejsou dostupné. Tento stroj musí být
též založen na PCI sběrnici.

Tento port funguje poměrně dobře, ale máme pouze nejzákladnější podporu
ovladačů. Jedním z největších omezení je, že v současné době můžeme
nabídnout grafickou akceleraci pouze kartám s čipem nVidia a ATI. Ostatní
grafické adaptéry musí být používány s generickými VGA a VBE grafickými
ovladači (bez akcelerace). Pracuje se na více ovladačích, ale jejich
vývoj je poněkud pomalejší, protože máme jen asi 2.5 hardwarových specialistů.
Tento port je k dispozici ke stažení.


AROS/m68k-pp
------------

:Variatna:  Nativní
:Stav:      Částečně funkční (v emulátoru), neúplná podpora ovladačů
:Udržována: Ano

AROS/m68k-pp je nativní port AROSu pro kapesní počítače řady Palm
a kompatibliní ("pp" znamená "palm pilot", což bylo jméno prvního
handheldu této řady). To znamená, že v budoucnu bude možné
nosit AROS s sebou v kapse...

Tento port je v současné době velmi nedodělaný. Většinou funguje (běží v emulátoru,
protože nikdo zatím ještě nechce riskovat poškození drahého hardwaru), ale stále
je na něm spousta práce. Má grafický ovladač, ale žádný pro vstup.
Tento port není v současné době k dispozici ke stažení.


AROS/i386-linux
---------------

:Varianta:  Hostovaná
:Stav:      Funkční
:Udržována: Ano

AROS/i386-linux je hostovaný port AROSu pro operační systém Linux [#]_
běžící na procesorech rodiny x86.

Je to rozhodně nejkompletnější port, protože většina vývojářů
v současné době k vývoji AROSu používá Linux a je daleko méně
ovladačů, které se pro něj musí psát. Tento port je k dispozici ke stažení.


AROS/i386-freebsd
-----------------

:Varianta:  Hostovaná
:Stav:      Funkční
:Udržována: Ano (5.x)

AROS/i386-freebsd je hostovaný port AROSu pro operační systém FreeBSD
běžící na procesorech rodiny x86.

Tento port je poměrně kompletní, protože sdílí většinu kódů s portem AROS/i386-linux,
ale vzhledem k tomu, že není mnoho vývojářů, kteří používají FreeBSD,
zůstává trochu pozadu. Snažíme se sestavovat AROS/i386-freebsd, když děláme
snapshoty, ale ne vždy je to možné, takže nemusí být pokaždé k dispozici
ke stažení.


AROS/ppc-linux
--------------

:Varianta:  Hostovaná
:Stav:      Funkční
:Udržována: Ano

AROS/ppc-linux je hostovaný port AROSu pro operační systém Linux
běžící na procesorech rodiny PPC.

Předkompilovaná verze může být stažena ze `Sourceforge`__.
Přestavení vyžaduje opravenou verzi gcc3.4.3. Diff soubor se nachází v contrib/gnu/gcc.

__ http://sourceforge.net/project/showfiles.php?group_id=43586&package_id=194077


Dodatek
=======

.. [#] Ano, víme, že Linux je vlastně jen jádro a ne celý 0S, ale
       je mnohem kratší napsat Linux, než "operační systém založený na
       linuxovém jádře, některé běžné GNU nástroje a X window
       system". Tato optimalizace rozsahu je ovšem negována tím, že se musí psát
       toto vysvětlení pro pedantské čtenáře, ale stejně...

