================
Stav aktualizace
================

:Autor:   Paolo Besser
:Datum:   18.02.2008

Poslední zprávy
---------------

Michal Schulz usilovně pracuje na portování AROSu na desku SAM440
od Acube Systems a dosahuje zajímavých `výsledků`__. Zde je několik
slov z jeho posledního příspěvku na `jeho blogu`__: "Rozhodl jsem se oddělit
jádro (a knihovny nahrávané společně s ním) od uživatelského prostoru.
Jádro je nahráno někde v prvních 16MB paměti RAM a pak přemístěno
na virtuální adresu v horní části 32-bitového adresového prostoru.
Bootstrap loader pracuje stejným způsobem, jakým pracoval x86_64 bootstrap.
Celá část paměti nahoru od jádra je pouze pro čtení (read-only) a celá
část dolů od jádra je zapisovatelná (writable). Protože jsem od přírody
zlý, moje jádro SAM440 AROSu si bude nenasytně brát veškerou paměť
*pod* svým fyzickým umístěním pro sebe. Tato paměť (několik megabajtů)
bude použita jako místní úložiště pro kernel a bude zamezeno jakékoli
formě přístupu ze strany uživatele."

Nic Andrews pracuje na Wandereru, aby ho zdokonalil a opravil
několik otravných chyb. V současné době "trochu přepracovává
renderovací kód pro třídu Wanderer iconlist. Průběžným cílem je
umožnit vykreslování ikon/pozadí z vyrovnávací paměti tak,
že například s použitím kachlového vykreslování (tiled rendering) pro pozadí
iconlistu nebude způsobováno znatelné blikání ikon, jak se to dělo doteď".
Podrobnější informace o jeho práci jsou zveřejněny na `jeho blogu`__.


Internet jednodušeji
--------------------

Michael Grunditz oficiálně uvolnil první verzi `SimpleMail`__ 0.32 beta
pro AROS Research Operating System. SimpleMail má většinu funkcí,
které jsou v současných moderních email klientech zapotřebí a stále
se dál vyvíjí. Aktuální verze může být stažena z `Archivu`__.

Robert Norris udělal značný pokrok s Travellerem (jeho webový prohlížeč pro AROS
založený na Webkitu). Aby všechno správně fungovalo, je stále zapotřebí
dokódovat několik chybějících funkcí a knihoven, nicméně jeho port Cairo.library
je na dobré cestě a celkem dobře uspěl při zobrazování několika stránek.
Opravdu slibné `snímky obrazovky`__ byly publikovány na `jeho
blogu`__.


Další zprávy
------------

Joao "Hardwired" Ralha nedávno napsal několik dobrých příruček pro AROS.
Nicméně nejsou ještě dokončené a on v současné době hledá někoho, kdo mu pomůže.
Dostupné dokumenty jsou `AROS uživatelská příručka`__ (50% kompletních),
`AROS příručka pro shell`__ (70%) a `AROS instalační příručka`__ (25%).
Autor je k dosažení na `jeho webu`__.

Alain Greppin naportoval TeXlive na AROS, ("bounty" dokončeno). Více informací
o tomto počinu na `jeho webu`__.

Tomek 'Error' Wiszkowski pracuje na Frying Pan, aplikaci
pro vypalování CD/DVD. Na AROS-Exec.org zveřejnil `několik snímků obrazovky`__.
Verze 1.3 pro AROS (shareware) může být stažena z `webu
této aplikace`__. Aby správně fungovala, opravil také několik chyb
v ATA rozhraní AROSu.

... a pro všechny, kdo si toho nevšimli: souborový systém AROS FFS nedávno získal vlastnost
pro kontrolu a opravu integrity na vadných oddílech. Už žádné nepoužitelné read-only oddíly!


__ http://msaros.blogspot.com/2008/01/ive-promised-to-show-you-some.html
__ http://msaros.blogspot.com
__ http://kalamatee.blogspot.com/
__ http://simplemail.sourceforge.net/index.php?body=screenshots
__ https://archives.arosworld.org/index.php?function=showfile&file=network/email/simplemail_beta_aros-i386.tgz
__ http://cataclysm.cx/2008/02/18/cow-launched
__ http://cataclysm.cx
__ https://archives.arosworld.org/share/document/manual/aros_user_manual_version_0.56a.pdf
__ https://archives.arosworld.org/share/document/manual/aros_shell_manual_version_0.7a.pdf
__ https://archives.arosworld.org/share/document/manual/aros_install_manual_version_0.25a.pdf
__ http://aros-wandering.blogspot.com
__ http://www.chilibi.org/aros/texlive
__ https://ae.amigalife.org/modules/newbb/viewtopic.php?viewmode=flat&topic_id=2569&forum=2
__ http://www.tbs-software.com/fp/welcome.phtml
