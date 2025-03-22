================
Stav aktualizace
================

:Autor:   Paolo Besser
:Datum:   12.04.2008

Distribuce
----------

Nedávno byly vydány dvě AROS distribuce. VmwAROS LIVE! a
nová verze WinAROS. První je bootovatelné a instalovatelné
předkonfigufované prostředí založené na VmwAROS virtuálním stroji,
druhá je QEMU uzpůsobený kompletní virtuální stroj s IDE a
aktualizovaným vývojovým prostředím. Podrobnější informace jsou dostupné na naší
`download stránce`__. Vyzýváme uživatele a vývojáře aplikací, aby si
tyto distribuce stáhli.

Poslední zprávy
---------------

Krysztof Smiechowicz a Alain Greppin poskytli veřejnosti binární
balíček gcc/g++ 3.3.1 pro architekturu i386 - založený na Fabiových
opravách, ke stažení z Archivu. To je samozřejmě dobrá zpráva pro
všechny, kdo se zajímají o vývoj a portování softwaru na AROS,
ale není jedinou: v Archivu můžeš najít také novou verzi Murks!IDE
s podporou pro C++ - nejlepší integrované vývojové prostředí pro AROS,
které nám přinesli Krysztof Smiechowicz a Heinz-Raphael Reinke.

Nastal také čas na provedení velkých oprav. Krysztof Smiechowicz začal
přezkoumávat úplnost API, zatímco Barry Nelson prozkoumal, protřídil a
začal spravovat náš bug tracker. Většina z už opravených chyb byla
odstraněna ze seznamu.

Nic Andrews a Alain Greppin konečně implementovali grub2 do AROSu.
Nic také na Aros-Exec ukázal `snímek obrazovky`__. Skvělou zprávou je,
že uživatelé se mohou konečně zbavit pomalých FFS oddílů a spouštět
systémové soubory z SFS oddílů. Tato možnost ještě není doporučována, protože
stále existují určité nedostatky v kompatibilitě s některými AROS
aplikacemi.

Alain Greppin dokončil AROS DHCP "bounty" s příkazem dhclient.
AROS teď může získat IP adresu automaticky. Také naportoval
`TeXlive`__.

Tomasz Wiszkowski a Michal Schulz pracují na zdokonalení ata.device.
Byla přidána počáteční podpora pro některé chipsety Serial ATA:
"SATA řadiče podporující režim dědění operací (legacy operation mode) by nyní měly být
funkční (ale to neznamená, že bychom získali podporu AHCI)".

__ http://aros.sourceforge.net/download.php
__ http://i175.photobucket.com/albums/w131/Kalamatee/AROS/grub2gfx-1.jpg
__ http://www.chilibi.org/aros/texlive

