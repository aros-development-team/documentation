=======
Porting
=======

:Authors:   Adam Chodorowski, Paolo Besser
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Stato:    Done.

.. Contents::


Introduzione
============

Poiché AROS è un sistema operativo portatile, è disponibile su diverse 
piattaforme. Un porting è esattamente ciò che suggerisce il suo nome, 
ovvero una versione di AROS per una specifica piattaforma.


Flavors
-------

I porting si dividono in due grandi gruppi, or "flavors" nella terminologia 
di AROS, conosciuti coi termini inglesi "native" e "hosted". 

Le versioni "native" di AROS funzionano come un qualunque sistema operativo 
a sé stante e prendono il totale controllo dell'hardware del computer. In futuro 
diventeranno le versioni raccomandate per l'uso, ma attualmente sono ancora 
troppo incomplete per risultare utili a qualcosa (almeno per gli sviluppatori).

Le versioni "hosted" possono girare al di sopra di un altro sistema operativo, 
facendo uso delle risorse e dei driver del medesimo. Il loro vantaggio consiste 
nel fatto che sono più semplici da scrivere e da mantenere, in quanto non è 
necessario programmare driver di basso livello. Inoltre, siccome lo sviluppo di 
AROS non è ancora possibile all'interno di AROS stesso, queste versioni possono 
velocizzare notevolmente i tempi di programmazione, in quanto non è necessario 
perdere tempo in noiosi riavvii del computer ogni volta che un errore lo manda 
in crash. 


Denominazioni
-------------

È possibile riconoscere le versioni di AROS grazie a nomi che cominciano con 
<cpu>-<platform>, dove <cpu> è il processore e <platform> è un nome sinbolico 
della piattaforma. Questa porzione può essere una piattaforma hardware per le 
versioni "native", come "pc" o "amiga", o un sistema operativo per le versioni 
"hosted", per esempio "linux" o "freebsd". Qualora non fosse chiaro che 
l'argomento è AROS, di solito usiamo un prefisso del tipo "AROS/" al nome della 
versione, per esempio "AROS/i386-pc". 


Portatilità
-----------

Gli eseguibili di AROS per una CPU specifica sono portatili su qualunque 
architettura che usi quella CPU, il che significa che gli eseguibili compilati 
per "i386-pc" funzioneranno bene anche su "i386-linux" e "i386-freebsd".


Versioni esistenti
==================

Segue una lista di porting per diverse piattaforme, su cui gli sviluppatori 
stanno lavorando o hanno lavorato in passato. Non tutti i sorgenti specigici 
possono essere disponibili per il download, vuoi per mancanza di tempo o di 
risorse.


AROS/i386-pc
------------

:Flavour:    Native
:Stato:     Funziona, supporto incompleto per i driver
:Maintenuta: Sì

AROS/i386-pc è il porting nativo di AROS che funziona sui comuni PC IBM 
compatibili che adottano processori x86. Il nome può generare un po' di 
confusione, dato che AROS/i386-pc in realtà funziona su CPU di classe 486 
o superiore, visto che usa istruzioni non comprese nei processorei 386.

Questa versione funziona piuttosto bene, ma offre un supporto davvero 
basilare ai driver. Una delle più grosse limitazioni è costituita dal fatto 
che possiamo offrire l'accelerazione video soltanto su schede video 
basate su processori ATI e Nvidia. Le altre schede video si possono usare 
tramite un driver generico VGA e VBE non accelerato. Stiamo lavorando anche 
su altri driver ovviamente, ma lo sviluppo procede a rilento in quanto 
disponiamo soltanto di due specialisti e mezzo. 
Questo porting è disponibile per il download.


AROS/m68k-pp
------------

:Flavour:    Native 
:Stato:     Funziona parzialmente in un emulatore, driver incompleti
:Mantenuto: Sì

AROS/m68k-pp è il porting nativo di AROS per la linea di palmari Palm 
e compatibili ("pp" sta per "palm pilot", ovvero il primo modello di questa 
linea di piccoli computer). Questo significa che in futuro potreste portarvi 
AROS sempre con voi in un taschino...

Questo port è davvero molto spartano. Più o meno funziona (in un emulatore,
visto che nessuno vuole buttare via i propri gioiellini al momento) ma mancano
ancora un sacco di cose da fare. C'è un driver grafico ma non uno per l'input.
Questo port non è disponibile per il download.


AROS/i386-linux
---------------

:Flavour:    Hosted
:Stato:     Funziona
:Mantenuto: Sì

AROS/i386-linux è la versione hosted di AROS per il sistema operativo Linux[#]_
funzionante su processori x86. 

Questa è probabilmente la versione di AROS attualmente più avanzata, 
in quanto gli sviluppatori non devono preoccuparsi dei driver per le 
periferiche. A chi volesse sviluppare AROS o le sue applicazioni, 
consigliamo vivamente di scaricare questa.
È disponibile per il download.


AROS/i386-freebsd
-----------------

:Flavour:    Hosted
:Stato:     Funziona
:Mantenuto: Sì (5.x)

AROS/i386-freebsd è la versione di AROS per FreeBSD su processori x86. 

Questo porting è relativamente completo, in quanto condivide la maggior parte
del codice sorgente con la versione AROS/i386-linux, purtroppo, però, ci sono 
pochi sviluppatori che usano questo sistema operativo e la programmazione 
prosegue a rilento. Non sempre i sorgenti sono disponibili per il download.


AROS/ppc-linux
---------------

:Flavour:    Hosted
:Stato:     Funziona
:Maintained: Sì

AROS/ppc-linux è la versione hosted di AROS per Linux che funziona 
sui processori PPC.

Una versione pre-compilata è disponibile sul sito di `Sourceforge`__.
Per ricompilarla serve una versione patchata di gcc3.4.3. 
I file diff sono disponibili nella directory contrib/gnu/gcc.

__ http://sourceforge.net/project/showfiles.php?group_id=43586&package_id=194077


AROS/mingw32-i386
------------------

Questo port è stato inteso per andare in Microsoft Windows (ad iniziare da Windows 98)
come sistema di base. Naturalmente il port è ancora ai primi giorni, ma p tutt'ora in 
continuo sviluppo. Il mantenitore del port è Pavel Fedin. Per fare l'output a schermo 
viene usato GDI.

Il port può essere scaricato dalla Pagina di Download.


Nota 
====

.. [#] Sì, lo sappiamo benissimo che Linux è soltanto un kernel e non il sistema 
       operativo, ma è molto più semplice così che scrivere "sistemi operativi 
       basati sul kernel di Linux, alcuni dei più comuni strumenti GNU e il 
       sistema grafico X". L'ottimizzazione dello spazio usato sarà vanificata 
       dall'esigenza di scrivere questa inutile nota a pié di pagina per i 
       lettori più pedanti. Ma vabbè...
