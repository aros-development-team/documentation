================
Stav aktualizace
================

:Autor:   Paolo Besser
:Datum:   15.11.2007

Poslední zprávy
---------------

AROS se v posledních týdnech dočkal mnoha vylepšení a také opravení
spousty chyb. Pro představu, Neil Cafferkey opravil několik závažných
chyb v jeho milovaném `AROS Instalátoru`__; Nic Andrews pracoval na svém
ovladači síťové karty RTL8139; Robert Norris opravil chybu v hlášení
o souboru, které bylo předtím špatně nastaveno. Ale to byly jmenovány
pouze tři. 

Robert Norris přidal SDL ovladač pro linux hostící AROS. Díky tomu
si můžeš vytvořit hostovaný AROS, který nevyžaduje X server
(teď už Xka nemusíš instalovat). Teoreticky by to mohlo pomoci
s hostováním na ostatních platformách (kdekoli, kde je SDL), i když je to trochu
pomalejší než s X serverem.

Matthias Rustler naportoval ptplay.library pro AROS. Tato knihovna
převádí Protracker moduly do zvukových vzorků. Dále také naportoval
jednoduchý přehrávač - ShellPlayer. Tyto budou v nočních
sestaveních, v šuplíku Extras/MultiMedia/Audio.

Matthias Rustler také vytvořil počáteční port `Wazp3D`__ od Alaina Thelliera 
pro AROS. Wazp3D je knihovna, která by měla být kompatibilní
se slavnou knihovnou Warp3D.library pro AmigaOS 68040. Portování
3D Amiga her na AROS by mělo být jednodušší. Wazp3D může také pracovat jako
softwarový renderer, který klame ostatní aplikace tím, že se tváří jako
3D hardwarový ovladač.

Michal Schulz učinil několik velkých kroků vpřed s jeho
`x86-64`__ portem AROSu. Den 64 bitového AROSu je stále blíž.
Michal také přidal podporu SSE instrukcí.

Petr Novák přeložil `aros.org do češtiny`__.


__ https://ae.amigalife.org/modules/newbb/viewtopic.php?topic_id=2319
__ http://ftp.ticklers.org/pub/aminet/driver/video/Wazp3D.readme
__ http://msaros.blogspot.com/2007/10/very-close.html
__ http://www.aros.org/cs


