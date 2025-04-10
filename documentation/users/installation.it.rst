===============================
Guida all'installazione di AROS
===============================

:Authors:   Stefan Rieken, Matt Parsons, Adam Chodorowski, Neil Cafferkey, Giuseppe Puglisi
:Copyright: Copyright © 1995-2004, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done. 
:Abstract:
    Questa guida vi accompagnerà attraverso i passi necessari per installare 
    AROS. 

    .. Attenzione:: 
    
        AROS è ancora un software in stadio alpha. Questo significa che al momento 
        ci si diverte di più giocandoci e sviluppandoci sopra. Se siete venuti 
	qui perchè pensavate che AROS fosse completo e pienamente utilizzabile 
	come sistema operativo, resterete abbastanza delusi. AROS non è ancora 
	a questo punto, ma ci stiamo lentamente muovendo nella giusta direzione.


.. Contenuti::


Downloading
===========

AROS è attualmente sotto intenso sviluppo. Ciò significa che dovrete scegliere 
tra stabilità e features. Attualmente ci sono due tipi di package disponibili 
per il download: le snapshots e le nightly builds.

Le snapshots vengono realizzate saltuariamente, solitamente quando si accumula 
una quantità consistente di modifiche di AROS dall'ultima snapshot e qualcuno 
si sente motivato per crearne una nuova. In poche parole, al momento non esiste 
una programmazione regolare delle uscite. Anche se realizzate saltuariamente, 
e noi cerchiamo di produrle quando AROS è particolarmente stabile, non vi garantiamo 
che la snapshots saranno esenti da bug o perfettamente funzionanti sulla vostra 
macchina specifica. Detto questo, cerchiamo di testare le snapshots su più 
macchine possibili, quindi in pratica dovrebbero funzionare relativamente bene.

Le Nightly builds vengono realizzate, come la parola inglese suggerisce, 
automaticamente ogni notte direttamente dall'albero Subversion, e contengono 
il codice più recente.
In ogni caso, non vengono testate in alcun modo, possono contenere bug e causare 
grossi problemi al vostro sistema, nel caso peggiore addirittura distruggerlo 
se siete davvero sfortunati. Comunque nella maggior parte dei casi, funzionano bene.

Visitate la `pagina download`_ per ulteriori informazioni su quali tipi di snapshots 
e nightly builds sono disponibili e su come scaricarle.


Installazione
=============

AROS/i386-linux and AROS/i386-freebsd
-------------------------------------

Requisiti
"""""""""

Per lanciare AROS/i386-linux o AROS/i386-freebsd avrete bisogno di:

+ Un'installazione funzionante di FreeBSD 5.x o Linux (non importa il tipo di 
  distribuzione che utilizzate, basta che sia abbastanza recente)
+ Un server X, configurato e funzionante (ad esempio X.Org o XFree86)

Tutto qui. 


Estrazione
""""""""""

Dato che AROS/i386-linux e AROS/i386-freebsd sono versioni hosted di AROS, 
l'installazione è facile. Semplicemente prendete i giusti archivi per la vostra 
piattaforma dalla `pagina download`_ ed estraeteli dove preferite::

    > tar -vxjf AROS-<version>-i386-<platform>-system.tar.bz2

Se avete scaricato l'archivio contrib, potreste volerlo estrarre pure:

    > tar -vxjf AROS-<version>-i386-all-contrib.tar.bz2


Avvio
"""""

Dopo aver estratto tutti i files, potrete lanciare AROS digitando:

    > cd AROS
    > ./aros


.. Note:: 
    
    A meno che stiate utilizzando XFree86 3.x o superiore, potreste notare che 
    la finestra di AROS non si aggiorni correttamente (per esempio quando 
    un'altra finestra gli passa sopra). Questo è dovuto al fatto che AROS 
    usa la funzionalità "backinstore" di X, che è disabilitata per default 
    in XFree86 4.0 e seguenti. Per abilitarla, aggiungete la seguente riga alla 
    sezione device della vostra scheda video, nel file di configurazione di X 
    (che si chiama solitamente ``/etc/X11/xorg.conf``, ``/etc/X11/XF86Config-4`` 
    o ``/etc/X11/XF86Config``)::

        Option "backingstore"

    Una sezione device completa potrebbe essere strutturata come segue::

        Section "Device"
            Identifier      "Matrox G450"
            Driver          "mga"
            BusID           "PCI:1:0:0"
            Option          "backingstore"
        EndSection


AROS/i386-pc
------------

.. Note:: 
    
    Attualmente non forniamo supporto per installare AROS/i386-pc su un hard disk,
    pertanto in questo capitolo vi verrà spiegato solo come creare un supporto 
    di installazione ed avviare da esso. 


Supporto di installazione
"""""""""""""""""""""""""

    	
    Sebbene AROS può essere installato in un disco rigido, bisogna sempre 
    essere consapevoli del fatto che nell'installer è nota la presenza di bug. 
    Non dovrebbe rimuovere o cancellare alcuna partizione se non ha chiesto di farlo, 
    ma questo non può essere garantito. 
    Quindi notate che in genere **NON DOVRESTE** installare AROS in una macchina funzionante
    il quale HD contiene dati di valore, dato che ci può essere una possibile perdita
    Non ci prendiamo alcuna responsabilità per ogni perdita di dati che può accadere.
    Ogni bug report sull'installazione sarebbe apprezzata.

Avrai bisogno di una PC-AT *PCI-based* PC-AT (basata su i486 o più nuova) con PS/2
o mouse USB,tastiera AT o USB, hard disk IDE e CD-ROM su ATA o SATA parallela
configurata in legacy mode, un adattatore (S)VGA e un monitor.
Almeno 24 MB of RAM è richiesta. Una scheda VGA VESA-compliant è raccomandata.
Per adesso ci sono drivers 2D accelerati (HIDDs) per alcune schede ATI o nVidia.

Possono essere utilizzate anche la maggior parte delle macchine virtuali. QEMU,
VMware (Server/Workstation/Fusion), Q, Bochs, virtualbox e MS VPC sembrano funzionare 
bene col floppy disattivato.
IcAROS è una buona soluzione per chi non vuole stare a farsi problemi.

AROS ha drivers per diverse schede network.
Più dettagli sono disponibili nelle FAQ.

Se vuoi provare il suono in AROS, la migliore scelta al momento sono le schede basate su
Creative 10k.

Il port x86-64 ha requisiti simili, tranne, naturalmente, che ha bisogno di un PC
compatibile con il 64-bit. Il chipset è correntemente limitato. Questo port è ancora ai primi 
passi, quindi per piacere riportate i bug che potreste trovare.


Media di installazione
""""""""""""""""""""""

Il media di installazione raccomandato per AROS/pc-i386 è il CDROM, dato che 
riusciamo a far stare l'intero sistema in un solo disco, mentre IcAROS ha bisogno di un DVD

Datoche nessuno vende dei CDROM di AROS (o qualunque media per il proposito),
avrai bisogno di avere un masterizzatore per crearti il CD


CDROM
^^^^^


Scrittura
'''''''''

Semplicemente scarica l'immagine ISO dalla`pagina di download`_ (raccomandiamo l'uso
di un download manager come wget) e masterizzzala su un CD usando il tuo programma preferito. 
Ci sono molti programmi freeware per scrivere CD per ogni gusto e sistema, e puntiamo 
gli utnti Windows  ad usare`InfraRecorder <http://infrarecorder.org/http://infrarecorder.org/>`__ - è gratis, 
piccolo, velocee semplice. Qualche altro esempio?
CDBurnerXP, DeepBurn, AstroBurn, e in linux ci sono k3B, Brasero 
e altri. Per Amiga (e speriamo bene anche per AROS in futuro, AROS) puoi usare FryingPan.


Booting
'''''''

Si può fare boot dal CD di AROS andando a modificare dei parametri nella bios per mettere il CD 
come primo per priorità. In molti sistemi per default p disabilitata.
Il boot è completamente automatico, e se tutto andrà bene si vedrà il desktop di aros.

Se il computer non supporta il boot dal CD (cosa molto improbabile) si possono scaricare il floppy
per fare poi boot dal CD. Basta inserirli entrambi e riavviare il computer.
AROS farà boot dal floppy ma poi, una volta caricati i driver per il CD, cambierà e leggerà sul CD i files necessari per l'avvio.


Floppy
^^^^^^

In questi giorni i floppy non si usano più per tenere interi sistemi operativi, ma 
in AROS sono ancora usati per i computer (come già accennato prima) che non supportano 
direttamente il boot da CD


Scrittura su floppy
'''''''''''''''''''

Per creare un floppy di boot avrai bisogno di scaricarlo dalla `pagina di download`_, 
quindi si estrae l'archivio e si scrive l'immagine su un floppy disk.
Se stai usando un sistema basato UNIX (come Linux o FreeBSD), 
si può fare con i seguenti comandi::

    > cd AROS-<version>-pc-i386-boot-floppy
    > dd if=aros.bin of=/dev/fd0

Se stai usando windows hai bisogno di prendere rawrite_ per scrivere immagini su i floppy.
Leggere la documentaazione di rawrite_ per vedere le modalità di uso.
C'è anche una versione GUI per win chiamata rawwritewin.


Boot
''''

Basta inserire il floppy prima dell'avvio, il resto è automatico.
Se tutto va bene si vedrà il desktop di AROS


Installare sull'hard drive
""""""""""""""""""""""""""

Bene, nota che sei stato **AVVERTITO** che l'installazione su HD è in fase di
testing e che al momento è **pericoloso** per i tuoi dati, quindi è meglio avere
la certezza che nell'hard disk non siano contenuti dati importanti, o che ci sia una backup.
Usare una macchina virtuale è raccomandato, dato che minimizzza i danni potenziali 
riducendoli in un file. Inoltre permette ad AROS di essere usata in tutta sicurezza e
affidabilità, oltre al fatto che potrà andare su qualunque tipo di macchina.
Ci sono diversi programmi adibiti alla creazione di macchine virtuali, più famosi possono
essere virtualbox, VmWare, parallels, Qemu, W, VirtualPC.
Esiste a tal proposito la distribuzione IcAROS.


Preparazione
^^^^^^^^^^^^

Per prima cosa bisogna impostare il tuo hard disk - sia reale che virtuale - per l'uso.
Per un drive reale, questo può includere inserirlo nella macchine (sempre un buon inizio) e 
configurarlo nella BIOS. Per un Hard disk virtualizzato o emulato probabilmente verrà richiesto di 
crearne uno nuovo oppure sarà configurato automaticamente, dipende dal programma.
Una volta creata l'immagine e impostata come connessa alla macchina virtuale / emulatore
va messa nella lista di Boot (ma sicuramente sarà già fatto tutto automaticamente dall'applicazione)
Inoltre il CD dovrà essere messo prima dell'hard disk altrimenti, se installato precedentemente 
un altro sistema operativo, potrebbe non fare partire AROS)

Se seguenti opzioni dipendono da che cosa hai intenzione di fare.


Installare solo AROS
^^^^^^^^^^^^^^^^^^^^

La situazione più semplice si verifica quando AROS è il solo sistema sull'intero
disco, o quando nel disco ci sono dati inutili. Si possono anche utilizzare Hard disks 
addizionali per AROS.

Al corrente l'installazione è preparata dal programma InstallAROS che è localizzato nel
drawer *tools* nel CD di boot. Si lancia facendo doppio click sull'icona. Una volta
lanciato mostra la schermata di benvenuto. Quindi fare click sul pulsante ``Proceed`` 
nell'installer per andare alla schermata delle opzioni.

Si può subito notare la periferica corrente di installazione (ata.device) e la sua unità (0),
che rappresenta il tuo primo hard disk. Se intendi installare su un disco diverso basta cambiare 
il numero. Per trovare il numero  si può facilmente usare */tools/HDToolbox*.
L'opzione ``Only use free space`` deve essere selezionata se vuoi tenere la partizione corrente
così come è, altrimenti si seleziona ``Wipe disk`` per *formattare* il disco.
Si può impostare la dimensione della partizione di AROS se serve, e aggiungere la partizione 
addizionale WORK per installarci programmi.
Dopo aver fatto click su ``Proceed`` ancora, installAROS creerà le partizioni e 
chiederà di riavviare. Dopo il riavvio andrà fatto avviare InstallAROS ancora.

Ora si dovrebbe vedere l'opzione ``Use existing AROS partitions`` selezionata. 
``Proceed`` con questa. Si vedranno inoltre alcune opzioni extra (viste di default)
in una finestra::

    [ ] Choose language Options
    [x] Install AROS Core System
    [x] Install Extra Software
    [ ] Install Development Software
    [x] Install Bootloader
    
La prima, ``Choose language Options`` permette di selezionare la localizzazione del nuovo
sistema installato (anche lanciando /Extras/Locale program). ``Install AROS Core System``
permette di installare tutti i programmi di base di AROS, necessari per il funzionamento del 
sistema operativo. ``Install Extra Software`` permette l'installazione di programmi aggiuntivi
(nella drawer /Extras e, se selszionato, nella partizione WORK). ``Install Development Software``
permette l'installazione del software di sviluppo, come dei linguaggi di programmazione e 
programmi di debugging.``Install Bootloader`` permette l'installazione del bootloader GRUB nel
master boot record dell'hard disk (ci sono alcune situazioni dove non è necessario installarlo).
Fai le tue scelte e premi il pulsante ``Proceed``. 

Nella schermata successiva si può scegliere che partizioni si vogliono formattare, e dove si 
vuole copiare i files se la partizione WORK è usata per avere copiati i files su di essa::

    Destination Partition     [x] Format Partition
    DH0
    
    [ ] Use 'WORK' Partition
    [ ] Copy Extras and Development Files to Work
    
    Work Partition            [ ] Format Partition
    DH1
    

Dopo aver fatto le scelte e aver proceduto con l'installazione verranno visualizzate le
opzioni per l'installazione di GRUB (periferica e percorso).
Procedendo si vedrà l'ultima schermata prima dell'instalalzione vera e prioria, che avvertirà 
sullo stota dell'installer di AROD pre-alpha. L'ultimo click ``Proceed`` e si vedrà che 
l'installer farà il suo lavoro. Potrai vedere delle impostazioni riguardo il tipo di tastiera e le 
impostazioni locali, quindi i files saranno copiati. Attendete la fine dell'installazione.

Dopo che l'installazione di AROS sarà completata si può rimuovere il liveCD dal drive e
riavviare la macchina per controllare se tutto è andato bene.


Installare AROS assieme a Windows o DOS
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Installare AROS dovrebbe essere semplice (assumendo che avete Windows Xp).
Generalmente avrete solo bisogno di seguire i messsaggi dell'installer come spiegato prima per
far si che funzioni bene.
L'installer è fatto per trovare autometicamente le precedenti installazioni di Windows e metterle
nella lista di GRUB. Controllare il capitolo sottostante sulla installazione standalone per farlo.
Ne avrai in ogni momento bisogno di ripristinare il precedente bootloadre NT, si può usare il
comando ``fixmbr`` nella console di recupero dal disco di installazzione di Windows.
 
Si potrebbero presentare problemi con le versioni più vecchie e più nuove di windows (come 98
e vista).
Per installare con vista si possono seguire passi simili a quelli usati per linux con l'installaer 
GRUB.
In alcuni casi GRUB può essere installato e fare boot con vista, avrai solo bisogno di
aggiungere un'entrata nel menu del file /boot/grub/menu.lst::

    title Windows Vista
    root (hd0,0)
    makeactive
    chainloader +1

Se preferisci usare il bootloader di vista, puoi usare dei programmi come EasyBCD.

Da fare (e da tradurre) di più...


Installare AROS insieme a Linux/BSD
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Installare AROS insieme a Linux o sistemi BSD è circa la stessa cosa di windows.
Avrai bisogno di creare dello spazio libero per AROS con degli strumenti. Quindi usa 
InstallAROSnper fare la partizionatura e formattazione della partizione di AROS e la copia 
del sistema su esso (puoi anche aggiungere la partizione WORK se ne hai intenzione);
sarebbe meglio però non installare il bootloader togliendo il check dalla casella seguente::

    [ ] Install Bootloader

Dopo che l'installer avrà finito di copiare i files chiederà di riavviare il computer.
Dopo il reboot partirà normalmente con linux/BSD, e da lì sarà necessario configurare il bootoader.
AROS usa un bootloader patchato, capace di caricare il kernel da AFFS. Ma non avrai bisogno di 
usarlo se metti il kernel di AROS nella cartella di boot del sistema (di solito /boot) e usi il 
bootloader GRUB già presente nella installazione precedente. Basta copiare dal livecd 
``/boot/aros-i386.gz`` nella cartella ``/boot``. Quindi metti delle linee alla fine del file 
``/boot/grub/menu.lst`` per abilitare l'entrata di AROS nel menu::

    title AROS VBE  640x480  16bpp
    root (hd0,0)
    kernel /boot/aros-pc-i386.gz vesa=640x480x16 ATA=32bit floppy=disabled
    quiet
    boot

Puoi cambiare i parametri del kernel per impostare la risoluzione dello schermo. L'opzione
'floppy=disabled' disabilita la periferica floppy, che non è neanche tanto utile in questi 
giorni e può causare dei problemi con l'avvio di AROS in alcuni casi.

Se invece hai intenzione di usare qualunque altro tipo di bootloader come LILO invece non sarà
semplice quanto in grub (non è facile far partire AROS con lilo). Dovrai in qualche maniera 
far capire a LILO di fare partire la procedura di avvio interna di AROS e impostarlo per fare 
partire un kernel.

Dopo il riavvio si dovrebbe già vedere AROS nella lista di boot di grub.

Installare AROS con altri sistemi
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Ci sono tanti altri sistemi che la piattaforma di AROS può supportare.
SE il tuo sistema usa come bootloader GRUB, il processo dovrebbe essere simile a quello 
per linux. In caso contrario, ricordate sempre che tutto ciò di cui avrai bisogno per fare 
avviare AROS è di copiare i files del kernel in una partizione che GRUB possa leggere e impostarlo
per mettere l'opzione nella lista.

Da fare (e da tradurre) di più...

Installazione manuale 
^^^^^^^^^^^^^^^^^^^^^

*quasi deprecato*  E' sempre raccomandato usare InstallAROS.                                               DEPRECATED
 
Dato che InstallAROS è utile adesso, le informazioni seguenti saranno una sorta di
***deprecato*** ma ancora potrebbero essere utili, quindi saranno mantenute per propositi informativi.
     
.. Nota:: 
    Nonostante AROS possa essere installato su un Hard Disk, siete sempre avvertiti che
    HDToolBox è un programma che si sa contenga bugs. Non dovrebbe rimuovere o distruggere
    alcuna partizone, se altrimenti non specificato, ma purtroppo non possiamo garantire questa
    certezza al 100%. Quindi per piacere tenete conto che ***NON DOVRESTE*** installare AROS
    in una macchina funzionante con dati importanti all'interno, dato che c'è una grande 
    probabilità di perdita di dati. Non ci prendiamo alcuna responsabilità per alcuna 
    perdita che può avvenire. Qualunque bug trovato nel processo di installazione sarebbe 
    utile per noi.

**Partizionamento**


Da tradurre..........

Coming soon!

.. _`pagina download`:
.. _`pagina di download`:
.. _`download page`: ../../download

.. _rawrite: https://uranus.chrysocome.net/linux/rawwrite.htm

