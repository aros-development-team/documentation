================
Stav aktualizace
================

:Autor:   Paolo Besser a Saimon69
:Datum:   18.07.2008

Poslední aktualizace
--------------------

Omlouváme se, že "Stav aktualizace" přišel tak pozdě, ale AROS tým
velmi tvrdě pracuje "under the hood", aby přinesl lepší
operační systém. Níže je spousta zajímavých novinek, o kterých se mluví.

Stanislaw Szymczyk dokončil port linuxem hostované verze
na platformu x86-64, a úžasně pomáhá samokompilování AROSu
portováním potřebných nástrojů. Ten poslední byl abc-shell a
dosahuje neuvěřitelných výsledků.

Krzysztof Smiechowicz kontroluje úplnost AROS API, aby bylo
možné sledovat kompatibilitu s AmigaOS a stav celého projektu.
Výsledky si můžeš kdykoli prohlédnout na naší aktualizované `stavové stránce`__.

Pavel Fedin skvěle vylepšil funkčnost HDToolBox: oddíl nyní může být
přemístěn, či mu může být změněna velikost. Tyto nové funkce však stále
potřebují testování. Pavel také naportoval BHFormat a zprovoznil
ve Wandereru formátování disků.

Pavel Fedin, Krzysztof Smiechowicz a Tomasz Wiszkowski také tvrdě
pracují na našich ata.device a s ATAPI souvisejících souborech, aby se
zbavili problémů s kompatibilitou, které znemožňují AROSu na některých
konfiguracích správně bootovat.

Michal Schulz stále pracuje na portování AROSu na SAM440EP.
Nedávno vydal první pracovní `beta verzi`__, vlastníci SAMu si ji mohou
vyzkoušet sami. Nezkoušejte ji na jiných PPC architekturách,
nebude fungovat.

Gianfranco Gignina pomohl najít a opravit hodně chyb v Zune,
a začal pracovat na přenositelné a více nezávislé verzi
Wandereru. Cílem projektu je umožnit jednodušší portování Wandereru
i na ostatní AmigaOS platformy.

Máme tu novou, velmi cennou implementaci jazyka E na AROS:
je to `PortablE`__ a určitě stojí za vyzkoušení!

Nick Andrews píše ovladač pro síťovou kartu Intel Gigabit E1000 na AROS, který
umožní připojení k síti velkému množství základních desek, na nichž je tato
karta integrována.

Paolo Besser vydal novou verzi jeho distribuce VmwAROS 0.8b,
která přináší lepší vzhled a kompatibilitu.
Stejně jako v minulosti, VmwAROS je k dispozici ve dvou verzích:
`live CD`__, které běží na x86 hardwaru a může být
nainstalováno na pevný disk, a `virtuální prostředí`__ pro
VMware.

__ http://aros.sourceforge.net/it/introduction/status/everything.php
__ http://msaros.blogspot.com/2008/05/try-it-yourself.html
__ http://cshandley.co.uk/portable
__ http://live.vmwaros.org
__ http://ve.vmwaros.org

