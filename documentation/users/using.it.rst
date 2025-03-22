=================
Guida Utente AROS
=================

:Authors:   Stefan Rieken, Matt Parsons, Adam Chodorowski, Sergey Mineychev
:Copyright: Copyright 1995-2006, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished; only converted to reST. Needs heavy updating. In works!

.. Warning::

   Avvertenza: Questo documento è ancora in fase di sviluppo. È 
   altamente probabile che alcune parti contengano informazioni non 
   corrette o semplicemente mancanti. Se volete aiutarci a 
   rettificare, contattateci.

.. Contents::


Introduzione
============

Questa è la guida utente dell'AROS Research Operating System. È pensata per aiutare le persone a usare AROS. E' per chiunque sia 
interessato ad AROS, poichè tenta di dare informazioni su AROS a 
diversi livelli di complessità. Proverò a trattare tutto in 
profondità, ma in modo che non abbiate bisogno di imparare ciò che 
non volete imparare.


A chi è rivolta questa guida
----------------------------

Questa guida vi aiuterà a utilizzare AROS. È scritta per chiunque sia 
interessato ad AROS. Tenete a mente che state utilizzando un software 
che è in versione BETA e in pieno sviluppo. Al momento è  principalmente divertente da usare e bello programmarci. Quindi mi 
aspetto che il vostro interesse in AROS derivi da una di queste 
ragioni. Se siete venuti qui pensando che AROS sia un sistema 
multimediale, pronto per internet ecc... Bene, potreste aver ragione, 
ma non è ancora ultimato, quindi dovete avere pazienza, ragazzi. 


Come va letta questa guida
--------------------------

Questa guida è ordinata da "semplice" ad "avanzato". Potete 
cominciare a leggerla da qualunque capitolo che contiene informazioni 
nuove per voi. Ma, forse ancora più importante, dovreste evitare di 
leggere un qualunque capitolo che contiene informazioni che vanno  oltre il vostro interesse. In questo modo potete imparare gli 
argomenti avanzati partendo da zero, o potete fermarvi prima se 
pensate che AROS volete solo usarlo, e non programmarlo. Le persone 
che hanno un passato con Amiga possono saltare l'introduzione, e 
iniziare da "Sviluppare per la piattaforma AROS" se non hanno mai 
programmato prima su Amiga, o andare direttamente a "Sviluppare 
dentro AROS" se invece l'hanno fatto. Quindi c'è un punto di inizio e 
un punto di fine per tutti.

È importante capire che questa guida è pensata per AROS, non per 
Amiga. Quindi anche se avete posseduto un Amiga per anni, potreste 
avere bisogno di leggere ugualmente "Usare AROS". Non è imbarazzante: 
noterete che usare AROS è un po' diverso che usare AmigaOS. Questo 
perchè il nostro workbench non è ancora completato. Al momento il 
sistema lavora principalmente attraverso una riscrittura della shell 
AmigaDOS (o CLI per i vecchi utenti), sebbene abbiamo un Workbench e 
potete navigare nei dischi e lanciare le applicazioni con esso, ma le 
operazioni sui file non sono ancora complete. I vecchi programmatori 
amiga dovrebbero leggere "differenze con la programmazione Amiga" dal 
capitolo 4 per avere una visione generale delle differenze.

Usare AROS
==========

AROS-hosted: Un sistema operativo nel sistema operativo?
--------------------------------------------------------

AROS è originariamente sviluppato su Linux_ su un computer basato su
processore intel. Gira comunque su molte altre macchine e sistemi
operativi. Questo può suonare strano: un sistema operativo che gira su un altro sistema operativo, è emulazione giusto?

Un termine adatto a quello che fa AROS-hosted è "emulazione API". API 
è un acronimo di tre lettere che significa Application Programmer's 
Interface. In poche parole: una API fornisce funzioni (in linguaggio 
C) che il programmatore può usare. L'API AmigaOS consiste in una 
quantità di chiamate di libreria che un programmatore Amiga può usare 
per creare un programma Amiga. AROS emula l'API di AmigaOS: tenta di 
fornire le stesse chiamate di libreria di AmigaOS. Un emulatore 
Amiga, come ad esempio UAE_, emula il computer Amiga: il processore, 
l'hardware connesso, tutto. Questo ha i suoi vantaggi, come poter 
giocare ai giochi Amiga su hardware differente, e i suoi svantaggi, 
come il non poter utilizzare l'emulatore come un "vero" sistema 
operativo, su un "vero" processore. AROS-hosted gira sul "vero" 
processore. Ma non è un "vero" sistema operativo, a meno che non lo 
lanci in modo che non abbia bisogno di Linux. In questo caso si parla 
di AROS "nativo".

AROS può girare nativamente sui computer Intel e Amiga, ma non così 
bene come su linux. Le librerie di funzioni AROS sono fatte per 
girare sotto Linux, usando internamente le chiamate al kernel e alle 
librerie di Linux. In questo modo il programmatore ha avuto 
l'opportunità di occuparsi della implementazione dell'intero sistema 
innanzitutto, e successivamente dei dettagli tecnici. Gli sviluppatori stanno attualmente lavorando al rendere AROS "nativo" 
più usabile. I risultati sono impressionanti ed è perfettamente 
possibile usare AROS-nativo come un vero (e unico) sistema 
operativo su una macchina IBM PC compatibile.

Ovviamente, AROS non è *solo* un emulatore di API. Prova anche a
sostituire tutti i software di sistema di AmigaOS3.1, e troverai anche qualche demo e qualche gioco fornito con AROS, giusto per 
mostrare che funzionano. Siamo circa al 77% dell'intero sistema, ma abbiamo già Quake funzionante!


Usare AROS "nativo" su i386
---------------------------

AROS nativo è al momento sotto intenso sviluppo. Se vuoi vedere dei bei trucchetti, prova AROS su Linux. Ma se sei (pure) interessato al 
grande lavoro che i programmatori hanno fatto, puoi provare anche la 
versione "nativa".

Le istruzioni per installare AROS nativo variano a seconda di quale 
piattaforma usi. Siccome la versione "nativa" è ancora sotto 
sviluppo, i *risultati* dell'installazione di un AROS nativo possono 
variare a seconda dell'età del codice che usi.

Su i386 sono disponibili diversi supporti da cui avviare. Il primo e 
più utile set di binari è il LiveCD di AROS, che potete scaricare 
dalla sezione Download. Il secondo è il floppy di avvio di AROS, 
concepito per avviare sistemi che non possono avviarsi da CD. Ha un 
minimo set di caratteristiche ma ha anche una dimensione ridotta. Se non hai un lettore CD può ancora mostrarti alcune parti di AROS.

Quindi, dopo aver scaricato l'archivio di AROS LiveCD scompattatelo e 
scrivete l'immagine su un CD-R(W). Se avete intenzione di usare AROS 
in una macchina virtuale, potete usare il CD così com'è. Una volta 
che il disco è pronto, potete riavviare il vostro PC con il LiveCD. 
Se il vostro sistema non supporta l'avvio da CD, scaricate e scrivete 
su un disco pure il floppy di avvio di AROS (con Rawrite o Winimage, 
per esempio) e avviate da lì, lasciando il CD nel drive. Dopo che il 
CD si sarà avviato vi ritroverete in AROS (somiglia in modo 
sbalorditivo ad AmigaOS). Potete passeggiare nel LiveCD con Wanderer 
(o con la Shell), giocare a qualche gioco/demo incluso nel CD, 
osservare le basi del sistema fino a quando non vi annoiate. È anche 
possibile aggiungere file all'immagine ISO, avere quindi qualche 
software extra scritto per AROS, e poi riscrivere il LiveCD.
Usando AROS-nativo in questo modo, potete provare le cose più 
semplici. Per testare tutte le altre caratteristiche è necessario 
installare_ il sistema sull'hard disk (reale o virtuale). Non si può 
dire che questo processo sia facile, e deve essere considerato come 
sperimentale. È descritto nelle istruzioni di installazione. Ad ogni 
modo, ricordate che il lavoro continua e presto potrete ottenere di 
più da un AROS nativo. Tenetevi in contatto!

Usare AROS i386 "nativo" nelle macchine virtuali
------------------------------------------------

Attualmente le tecnologie di *virtualizzazione* sono sviluppate per
sostituire una macchina reale pressocchè completamente, e sono state
spinte dalla crescente velocità delle CPU. Potete creare una macchina
*virtuale* all'interno del vostro sistema ("host") e lanciare AROS
all'interno di essa, senza preoccuparvi di possibili problemi e 
potete rilanciare il sistema ospite velocemente se succede qualcosa. 

Ci sono diverse macchine virtuali libere, la più nota è QEMU 
(gratuita, open source, per molti sistemi host), VMWare Player 
(gratuita. C'è anche un completo VMWare server gratuito che richiede 
un serial gratuito) e Microsoft VPC (gratuito). Potete ottenere una 
versione per il vostro sistema "host" che rispecchia le vostre 
esigenze. Descriveremo alcuni trucchi per lanciare AROS su diverse VM 
(Virtual Machine). 

Invece di avere pressocchè lo stesso Setup di AROS nella VM, c'è una 
differenza nel settare le VM stesse.

VM per Linux/FreeBSD
""""""""""""""""""""

QEMU su Linux è molto semplice da far funzionare. Tutto ciò che vi
serve è scaricare il pacchetto su Debian/Ubuntu/Knoppix/DSL o usare
qualunque altro gestore di pacchetti per altre distribuzioni o 
scaricare e decomprimere l'archivio manualmente. Potete scaricare 
l'archivio dal `Sito di QEMU <http://fabrice.bellard.free.fr/qemu/>`__. 

C'è anche un VMWare disponibile su Linux. Controllate il 
`Sito di VMWare <https://www.vmware.com>`__.

VM per Windows
""""""""""""""

QEMU su Windows è pressocchè la stessa cosa che su Linux. Le 
differenze stanno nel networking e qualche altra cosa. Potete trovare 
informazioni utili e pacchetti sulla `pagina dedicata a QEMU su 
Windows <http://www.h7.dion.ne.jp/~qemu-win/>`__ . 
C'è anche una simpatica GUI per QEMU chiamata QEMU Manager, che include il pacchetto di QEMU. Ci sono anche delle GUI per QEMU per 
sistemi, le potete trovare nei link.

QEMU va lanciato come applicazione da console specificando qualche 
parametro. Vedremo qualche opzione in altre sezioni, significa che 
dovete aggiungere queste opzioni alla vostra stringa di lancio
(o script).

.. Note::  

    Nota: QEMU è un virtualizzatore veloce, ma la sua velocità può 
    essere incrementata installando il modulo del kernel KQEMU (e 
    aggiungendo l'opzione -kernel-kqemu se sei in Windows). Ma 
    ricordate che KQEMU può rendere il sistema ospite instabile. Non 
    usate la combinazione ALT+Tab per liberare il blocco della 
    tastiera, usate CTRL+Alt, altrimenti il tasto Tab potrebbe 
    rimanere pressato e danneggiare il file che state modificando.
    
`VMWare <http://www.vmware.com/products/free_virtualization.html>`__
o VPC sono semplici da usare. Tutto ciò che vi serve è installare qualche hardware virtuale come schede di rete e audio e creare un HD 
virtuale. Tutto viene gestito da una semplice GUI.

VM per MacOS
""""""""""""

Per i Mac PPC con OS9 o 10.x è disponibile solo
`Virtual PC 
<http://www.microsoft.com/mac/products/virtualpc/virtualpc.aspx?pid=virtualpc>`__, 
un emulatore i386. Non supporta i Mac Intel. VPC è anche un prodotto
commerciale costoso. Il metodo alternativo per averlo è comprare Office 2004 che contiene una copia gratuita dell' ultima versione di 
VPC (VPC 7). Nota che il Mac VPC è essenzialmente un emulatore, con 
una velocità limitata e ha bisogno di una macchina PPC 
ragionevolmente veloce (guardate nel sito per maggiori dettagli).

Per i Mac Intel (OS X) Qemu è stato portato e rinominato
`Q <http://www.kju-app.org/kju/>`__ . È un binario Intel ed è freeware. Q non supporta la virtualizzazione diretta (o il modulo di 
accelerazione i386 del kernel), facendogli raggiungere solo parte 
della velocità possibile al momento.

Un'altra scelta (in arrivo) per una VM su Intel sarà il 
virtualizzatore `VMware Fusion`__ , atteso per inizio 2007. La 
versione Beta 33141 già supporta il boot dal LiveCD di AROS, a 
condizione che il supporto per il floppy sia disabilitato nei 
parametri di boot di GRUB (basta selezionare la tua scelta nel menu 
di GRUB, premere due volte e, aggiungere nofdc alla linea di comando, 
premere return, e quindi b. Se lo avete installato nell'HD, potete 
rendere permanente questa modifica nel file menu.lst).

__ http://www.vmware.com/whatsnew/macsignupform.html

Ancora un altra VM Intel Max è Parallels, un prodotto commerciale, ma meno costoso di VPC. Notate comunque che non riesce ancora a far 
partire AROS. Lo stesso succede anche su PC Parallels Workstation 
2.1.

..  Note::  Gli utenti dei (primi) notebook Mac Intel, le cui 
            macchine riscaldano, possono beneficiare dall'uso dell' 
            `utilità di controllo delle ventole SMC`__.
            Questa permette di regolare la velocità delle ventole per 
            una ventilazione maggiore della macchina, mantenendo le 
            temperature basse durante utilizzi intensivi. Anche se è 
            considerata sicura da usare, considerate sempre i rischi 
            annessi.

__ http://81.169.182.62/~eidac/software/page5/page5.html

Immagini di dischi virtuali
"""""""""""""""""""""""""""

Se state pensando di provare a installare AROS su un HD di una 
macchina virtuale, potete creare un HD virtuale per QEMU usando il 
programma qemu-img (sostituite <size> con la grandezza desiderata in 
bytes, M o G per mega o giga) con un comando come questo::
    
    qemu-img create -f qcow aros.img <size>

E' disponibile un set di immagini di disco preinstallate o vuote per 
rendere l'uso di AROS su VM un po' più semplice. WinAros è un 
ambiente AROS preinstallato su una immagine HD, compatibile con le 
famose virtual machine QEMU e Microsoft VirtualPC, entrambe 
liberamente disponibili sulla rete. potete scaricare entrambe le 
versioni di Winaros sul 
`sito <http://amidevcpp.amiga-world.de/afa_binarie_upload.php>`__.
Winaros per QEMU è `qui <http://amidevcpp.amiga-world.de/WinAros/WinAros_Light_QEMU.zip>`__ 
e per VirtualPC `qui <http://amidevcpp.amiga-world.de/WinAros/WinAros_Light_VPC.zip>`__ .

Installation Kit for AROS (IKAROS) è un set di immagini di dischi
virtuali per diversi virtualizzatori, inclusi QEMU e VMWare, già
partizionate, formattate e pronte per installarci sopra AROS. Il suo
vantaggio è quello di essere un archivio di dimensioni ridotte, non
include una grande quantità di file e la possibilità di installare
versioni fresche di AROS, che lo rendono utile per testare le nightly
build. Permette una facile installazione di nuove versioni senza
impelagarsi in partizionamenti. Sono incluse le istruzioni di
installazione. Controllate gli 
`Aros-Exec Archives <https://archives.arosworld.org/index.php?
function=browse&cat=emulation/misc>`__ 
nella sezione (emu/misc) per update recenti.

Usare AFA su m68k
-----------------

Su un Amiga (m68k), potete posizionare il codice nativo da qualche 
parte nel vostro harddisk, fare doppio click sull'icona "boot", 
resettare e godervi un sistema Amiga completo. Questo perchè non è 
realmente nativo. Il programma boot sostituisce temporaneamente 
alcune librerie AmigaOS con le librerie di AROS. Per scopi di test 
questo è certamente buono, ma alla fine state eseguendo ancora il 
buon vecchio AmigaOS e non un AROS nativo. Questo cambierà quando 
creeremo un systema AROS completo 68k. Questo sistema è spesso 
chiamato AfA (AROS for Amigas).


Usare AROS hosted su Linux o FreeBSD
------------------------------------

Appena ottenete i binari per il vostro sistema, sia compilandoli o
scaricando i binari precompilati, andate nella cartella
"bin/$TARGET/AROS", dove $TARGET è il vostro sistema target (qualcosa
come "linux-i386"). Lanciate il file "aros" ("./aros"). Il sostituto
del Workbench "Wanderer" sarà lanciato.

Ci sono alcune opzioni da riga di comando per l'eseguibile aros che
possono essere usate. Potete vedere questa lista lanciando ./aros -h .

Da completare ...

Siccome "Wanderer" è molto limitato, è preferibile lavorare con la 
Shell. Potete lanciarla dal menu "Wanderer/Shell". A quel punto 
potete scrivere comandi, e il comando più importante è "dir": vi 
mostrerà il contenuto di una directory. La directory chiamata "C" 
contiene tutti i comandi, quindi può essere utile visualizzarne il 
contenuto con "dir c:". La Shell si comporta come una shell AmigaDOS, 
e i comandi in "C" si comportano come i loro equivalenti in AmigaDOS. 
(Nota per gli utenti UNIX: per indicare la directory di livello 
superiore, usate "/" e non "..": può sembrare brutto perchè AROS 
pensa che la directory di Linux ".." è una directory normale. Non 
dovete usare "./" come prefisso per indicare un comando nella 
directory corrente). Una volta che avete fatto pratica, provate ad 
eseguire alcuni programmi (specialmente i "Demos" e "Games") per 
avere un'idea delle capacità di AROS.

Usare AROS-hosted su PPC
------------------------

Questa parte della documentazione è ancora mancante. Servirebbe 
qualcuno che la mantenga.


Basi di AROS
============

Basi della gui AROS Zune
------------------------

La sigla GUI significa Graphical User Interface (Interfaccia Utente
Grafica), e si applica a tutto ciò che un OS usa per interagire con
l'utente oltre alla semplice interfaccia a linea di comando (CLI).
Per coloro che non hanno mai usato alcun OS della famiglia Amiga, sarà utile dare alcune basi sulla GUI per aiutarli a usare il loro 
sistema. Alcune di esse, comunque, saranno specifiche per AROS.

I sistemi Amiga usano principi definiti e comuni, come potete già notare. Prima di tutto, ogni opzione di menu di ogni finestra di 
applicazione non è attaccata a quella finestra, ma è spostata nella 
fascia superiore, dove può essere raggiunta facilmente. Per fare 
questo, selezionate la finestra di cui avete bisogno e muovete il 
puntatore del mouse sul lato superiore dello schermo. Adesso, se 
premete il pulsante destro del mouse qui, potete vedere il menu a 
discesa, che rappresenta le opzioni dell'applicazione. Sì, somiglia 
in qualche modo a MacOS. Inoltre, potete abilitare il menu per farlo 
apparire da qualunque parte dello schermo, dove premete il tasto 
sinistro del mouse. Per esempio, se nessuna finestra è selezionata, 
potrete vedere il menu di Wanderer. 

Adesso, prendiamo in esame il nostro desktop. Come probabilmente già
sapete, è chiamato Wanderer. Che cos'è? Bene, Wanderer è una
applicazione, come tutte le altre. Infatti, è un gestore di file AROS,
che vi permette di selezionare e operare sui file (la funzionalità non
è ancora completa), lanciare programmi, ottenere qualche informazione
sul sistema, lanciare il CLI (la finestra di Shell) e altre funzioni.
Generalmente si apre a pieno schermo e si comporta come il vostro desktop
(le icone in questo desktop rappresentano i volumi e i dischi con cui
potete lavorare). Può essere spostato deselezionando l'opzione Sfondo
(Backdrop), che si trova nel menu di Wanderer (ricordate il paragrafo
sopra?). A questo punto una finestra Wanderer diventa semplicemente
un'altra finestra che potete muovere, ridimensionare ecc. Quindi, potete
vedere che non è fissata al suo posto, come su Windows o altri sistemi
desktop. Certo, postreste anche non usare del tutto Wanderer e usare il
vostro file manager preferito (es. Directory Opus).

Ma come si comportano le applicazioni allora, quando le finestre saranno
aperte? C'è il termine *schermo*, lo schermo è il posto dove la vostra
finestra viene aperta. Se è stabilito che l'applicazione si aprirà sullo
schermo Wanderer, apparirà come succede normalmente in altri OS, la
vostra applicazione apparirà sotto forma di finestra sul desktop.
D'altro canto, la finestra può essere aperta su uno schermo proprio,
sembra come se catturasse l'intera schermata. Ma potete switchare gli
schermi con un gadget posto nell' angolo in alto a destra dello schermo
(questo gadget ha lo stesso effetto anche sulle semplici finestre).
Quindi potete switchare tra Wanderer, Directory Opus e tutte le altre
applicazioni che aprono un proprio schermo. Anche questo comportamento
proviene dalla storia dell' Amiga.
                                                  
Bene, è arrivato il momento di dire qualcosa sulle finestre stesse.
Una finestra su AROS normalmente ha dei pulsanti di controllo
per manipolarla, chiamati gadgets (che può essere tradotto come un tipo
di elemento grafico interattivo). Il primo nell'angolo in alto a
sinistra di una finestra permette di chiuderla. I successivi, nella
parte destra permettono di minimizzare/massimizzare la finestra.
E l'ultimo è usato per muovere le finestre davanti o dietro come se
scambiassimo degli schermi. Le finestre possono anche non avere alcun
gadget (come il kitty demo - non ha neanche i bordi e ha una forma
curvilinea) o averna un set diverso.

I contenuti di una finestra consistono dei soliti elementi che possono
essere visti in ogni GUI - bottoni, liste, stringhe di testo e ogni altro
tipo di gadget. Se l'applicazione è concepita per cambiare delle
impostazioni di un sistema o di un'applicazione è normalmente chiamata
con l'abbreviazione *Pref* e ha un set di bottoni con cui operare.
Generalmente questi bottoni sono: TEST (applica tutte le modifiche fatte
da Pref ma non le salva e chiude la finestra), SAVE (salva le modifiche e
chiude la finestra), USE (applica le modifiche e chiude la finestra, ma
non le salva), CANCEL (annulla tutte le modifiche e chiude la finestra) 

Inoltre, dalla storia Amiga, le unità di posizionamento dei file sono
spesso chiamate cassetti invece di cartelle/directory come in altri
sistemi, ma il significato rimane lo stesso. Traducetelo in directory
se non siete sicuri.

Ci sono dei tasti speciali in AROS, come nell'Amiga originale, usati per
lanciare velocemente dei comandi. Il pulsante di Windows sinistro e
destro (sulla tastiera PC) sostituiscono i tasti Amiga originali e
vengono usati in combinazioni diverse per lanciare dei comandi.

Un altro nome sconosciuto che potete incontrare in AROS è Zune. Cos'è?
Zune è un toolkit GUI sviluppato in sostituzione del tradizionale MUI
(Magic User Interface), largamente usato negli Amiga. Ma c'è una
applicazione chiamata Zune? potete trovare Zune Pref che permette di
regolare delle impostazioni riguardanti le applicazioni basate su Zune
in modo complessivo o su alcune in particolare. Per esempio, per settare
le preferenze di Zune per Wanderer, potete selezionare GUI prefs dal suo
menu, o per settare le preferenze di Zune per altre applicazioni potete
usare il comando Zune <nomeapplicazione>

Da completare...


AROS CLI (Command Line Interface)
---------------------------------

ToDO - Descrizione dei comandi CLI e confronti...

AROS ha la sua CLI, l'interfaccia a linea di comando, che espande
fortemente le capacità dell'OS. Quelli che hanno usato l'AmigaOS
possono notare che somiglia molto da vicino all' AmigaDOS. Ci sono delle
basi di CLI descritte nell'`introduzione <shell/introduction>`__ ai
comandi CLI. 

Attualmente non avete bisogno di digitare tutti i comandi fino alla fine
adesso c'è una accurata tab completion simile a quella delle console
Linux. Questo vi permette di accodare i nomi dei file o selezionarli da
una lista.

Da completare...

I programmi di sistema di AROS
------------------------------

Abbiamo menzionato le applicazioni, è bene dare una descrizione delle
loro funzioni. Ci sono dei gruppi di applicazioni di sistema
sul sistema AROS raccolte in directory separate:

    + C - il posto di tutti i comandi di sistema usati nella CLI
    + Classes - il posto per datatype, icone dei gadget e classi Zune
    + Devs - dove sono posizionati i file (driver, keymap) relativi 
      ai datatype e ai dispositivi      
    + Extras - dove risiedono tutti i programmi di terzi
    + Font - qui potete trovare tutti i font di sistema. Ogni font
      addizionale deve essere accodato (assegnato) a questa dir.      
    + Libs - dove sono localizzate le librerie di sistema.
    + Locale - contiene i file catalog di varie traduzioni di
      applicazioni AROS
    + Prefs - contiene i programmi per settare le preferenze
    + S - contiene alcuni script d'avvio di sistema
    + System - il luogo per alcuni controlli di sistema
    + Tools - il luogo per alcune applicazioni di sistema comunemente
      usate
    + Utilities - il luogo per alcune applicazioni non comunemente 
      usate ma sempre utili

Oltre alle applicazioni, ci sono più programmi permanenti che girano,
chiamati *tasks*.

Un altro tipo di applicazione AROS è la *Commodities*. Sono applicazioni
che possono aiutarvi a rendere il vostro sistema più confortevole. Per
esempio, le finestre di AROS non vengono visualizzate sopra le altre
quando ci cliccate sopra, e potreste trovarlo scomodo. potete usare la
commodity AROS ClickToFront per sistemare la cosa. Si trova sotto altre
commodities nella directory SYS:Tools/Commodities. Quando fate doppio
click su di essa, le finestre appariranno sopra le altre se ci fate
doppio click. Un altro esempio è la commodity Opaque - permette di
muovere le finestre con il loro contenuto. C'è anche una commodity
Exchange che vi permette di manipolare le commodity lanciate e ottenere
informazioni su di esse. Normalmente, le commodities non aprono alcuna
finestra.

Per operare con file di tipo diverso, i sistemi Amiga-like usano i
*datatypes*. Un Datatype è un tipo di libreria di sistema che permette
ai programmi di leggere e/o scrivere file senza curarsi di implementare
quello specifico formato nel programma.

E se scaviamo un po' più a fondo ci sono alcuni termini di sistema che
possono essere spiegati. AROS usa gli *handlers* per comunicare con i
filesystem e gli *HIDD* per comunicare con l'hardware.

Da completare...

Personalizzare AROS
===================

Settare le impostazioni internazionali (Locale)
-----------------------------------------------

AROS sta diventando un vero sistema internazionale al giorno d'oggi, ed
è tradotto in molte lingue. Tradurre non è molto difficile, e il numero
di traduttori di AROS è ancora in crescita. Se verrà implementato il
supporto all'unicode, potrà essere tradotto in ogni lingua usata dalla
gente. Se sentite di poter tradurre nella lingua del vostro paese, sia
l'OS che la documentazione, non esitate a contattarci e a offrire il
vostro aiuto.

Quindi per quanto riguarda la lingua. Prima di tutto, a seconda dei font
usati dovete settare i font lanciando SYS:Prefs/Fonts e designare i
Font ai diversi testi di sistema: Icone (usato per le label delle icone)
Screen (usato sugli schermi comuni) e System (usato nelle finestre CLI).
Se la vostra lingua usa un set diverso dall' ISO (per esempio, cyrillyc
CP-1251) *devono* esserci i font nella codepage corretta. Aros
attualmente può usare due tipi di font - i font Amiga Bitmap (che
possono essere usati direttamente) e i TrueType (attraverso il gestore
FreeType2, che ha ancora qualche problema con i codepage non-ISO). I
font bitmap sono in ogni codepage, e i TTF possono essere unicode.

Come potete cambiare le impostazioni internazionali di AROS? Per farlo
dovete lanciare la pref Locale in SYS:Prefs. Lì potete vedere una lista
di Locale supportati e selezionare le vostre preferite. Nella seconda
pagina di questa pref potete selezionare il paese usato (da la corretta
valuta e il formato data/ora). L'ultima tab vi permette di cambiare la
timezone a quella usata nella vostra nazione.

Dopo che avete effettuato i cambiamenti ai font, riavviate il sistema e
sarete in grado di vedere tutti i contenuti tradotti.

Adesso, quindi, potete leggere nella vostra lingua, ma potete anche
scrivere? Per fare questo, dovete cambiare il layout della tastiera.

Le impostazioni di mouse e tastiera sono gestite dalla pref Input.
Potete cambiare il layout e cliccare *Usa* ma possiamo fare di
meglio. Questo strumento vi permette anche di salvare dei preset
(preimpostazioni) - come ogni applicazione ha un menu, vi permette di
salvare le vostre preferenze su un file con un dato nome e di mentenere
diverse impostazioni di locale. Lo useremo dopo per switchare i nostri
layout di tastiera. Scegliete il layout di tastiera del vostro paese
dalla lista e fate click sinistro per aprire il menu contestuale.
Quindi inserite il nome del vostro preset nella stringa File, per
esempio, *locale1* e cliccate OK per salvarlo nella directory
SYS:Prefs/Presets. Adesso scegliete il layout Americano (PC) e ripetete
il salvataggio del preset, ad esempio *inglese*. Questo preset può
essere usato in seguito per switchare i layout. Cliccate *Cancella* per
uscire.

C'è una commodity chiamata FKey che vi permette di eseguire delle azioni
assegnate ad alcune combinazioni di tasti. Ora lanciamola e assegnamole
il cambiamento di locale. Dopo aver fatto doppio click sull'icona FKey,
lanciate Exchange, scegliete FKey dalla lista e cliccate sul bottone
*Mostra*. Questo invocherà la finestra di FKey. potete vedere che nella
lista c'è ALT TAB assegnato al cambiamento di finestra. Adesso inserite
la prima combinazione di tasti, per esempio, ALT Z e andate nel pannello
a destra. Scegliete *Lancia l'applicazione* dal menu a discesa e inserite
SYS:Prefs/Input come argomento. Accodate lo switch USE e il preset
*inglese* alla stringa, come mostrato::

    SYS:Prefs/Input USE SYS:Prefs/Presets/inglese

Cliccate sul pulsante *Nuovo* e aggiungiete un'altra combinazione. Adesso
settate la combinazione per il tuo Locale come spiegato sopra,
sostituendo *inglese* con il nome del vostro preset. Cliccate di nuovo il
bottone *Nuovo* e quindi *Salva i tasti predefiniti*.
Adesso potrete usare le combinazioni di tasti definite per cambiare i
layout.

Installare il software
----------------------   

Attualmente non c'è un installer per il software in AROS. Installare una
applicazione solitamente significa che dovete estrarla in qualche
directory del disco o del ramdisk. Alcuni programmi hanno bisogno di
alcuni assegnamenti che vengono fatti nella CLI con il comando Assign e
alcuni script di avvio addizionali. Per esempio, Lunapaint per
funzionare correttamente ha bisogno che Lunapaint: venga assegnato alla
directory in cui è stato estratto. Per far ciò potete usare il comando::

    Assign Lunapaint: Disk:Path/Lunapaint

Se non volete scrivere questo comando di nuovo dopo un riavvio, lo
dovete mettere nello script S:User-Startup. Per farlo, scrivete questo
comando a un prompt CLI::

    :> edit SYS:S/User-Startup
    
E quindi inserite l'assign Lunapaint (o altro programma) alla fine del
file. Salvate i cambiamenti e avete risolto il problema. Questa procedura
può essere usata per tutti i programmi che ne hanno bisogno.

Un altro modo è quello di usare la directory ENVARC:SYS/Packages. Tutto
ciò di cui avete bisogno è creare un file di testo con il nome della
vostra applicazione e metterci il path dell'applicazione. Quindi create
una directory chiamata S nella directory del programma e metteteci il
file al suo interno. Questo modo più sicuro, ma potrebbe essere non
troppo amiga-style per voi.


Attivare la rete
----------------

Per comunicare con altri computer su una rete, AROS usa uno stack TCP,
AROSTCP, che è un port di AmiTCP. Questo software si trova in
/Extras/Networking/Stacks/AROSTCP. Attivarlo non è facile, ma è in fase
di sviluppo uno strumento a GUI. Tenete anche presente che attualmente
c'è solo qualche applicazione per la rete per AROS. (ma alcuni strumenti
interessanti sono in fase di sviluppo e saranno presto rilasciati).

Prima di tutto avete bisogno di sistemare il lato macchina della vostra
rete. Questa parte può essere differente a seconda del vostro hardware.
Su una macchina vera avete bisogno di installare una scheda di
interfaccia di rete (NIC) supportata e collegarci il cavo. Su una
macchina virtuale dovete attivare l'implementazione della scheda NIC e
controllare se è supportata da AROS (quelle di QEMU e di VMWare sono
supportate).

Rete su QEMU/Linux
""""""""""""""""""

Leggete i suggerimenti per lanciare AROS su QEMU/Linux scritti sopra.

Dopo che è tutto funzionante, possiamo passare al prossimo punto.

La seconda parte è settare AROSTCP su AROS per farlo funzionare.

Sui sistemi linux c'è bisogno di effettuare alcuni passi per far
funzionare il networking in una VM.

Il modulo tun (tunnel) deve essere caricato::

    #> modprobe tun

Quindi, il kernel deve essere reso un router::

    #> echo 1 > /proc/sys/net/ipv4/ip_forward

Quindi deve essere aggiunta una regola nel firewall::

    #> iptables -t nat -A POSTROUTING -o eth0 -j MASQUERADE

E finalmente, sempre rimanendo come utenti di root, lanciare Qemu con::

    #> qemu -cdrom aros.iso -m 48

Il modulo tun di Linux, di default, crea un gateway per la rete fittizia
a 172.20.0.0/16 con un gateway a 172.20.0.1. La nostra macchina ospitata
da QEMU è a 172.20.0.10. Poniamo che la vostra LAN tipica è 192.168.0.0/24
con un DNS a 192.168.0.1 (o da qualunque altra parte nella rete).

*Per QEMU su Windows in rete in modalità utente dovete sostituirli con
10.0.2.16 per l'host e 10.0.2.2 per il gateway, o usate un adattatore
TAP, che è meglio. Ricordate di settare il vostro firewall in modo che
possano passare i pacchetti QEMU.*

Dovete modificare 3 file nella directory SYS:extras/Networking/stacks/AROSTCP/db:
hosts, interfaces e netdb-myhost. In *hosts* rimuovete o commentate le
voci.Gli host saranno in netdb-myhost per ora. In *interfaces*
scommentate la linea prm-rtl8029.device (QEMU emula questa scheda di rete
potete usare pcnet32.device per VMWare), modificala (cambia un *IP* = la
stringa di prima)::

    eth0 DEV=DEVS:networks/prm-rtl8029.device UNIT=0 NOTRACKING IP=172.20.0.10 UP

In *netdb-myhost*, aggiungete i vari host locali conosciuti, il vostro
nome di dominio locale e il gateway::

    HOST 172.20.0.10 arosbox.lan arosbox
    HOST 172.20.0.1 gateway
    DOMAIN lan
    NAMESERVER 192.168.0.1

La directory db stessa può risiedere da qualche altra parte, potete
settarne il path nel file ENVARC:AROSTCP/Config, vi consiglio di copiare
i file db nell'appena creata directory ENVARC:AROSTCP/db, in questo modo
il file Config potrebbe essere::

    ENV:AROSTCP/db

Adesso, rendiamo AROSTCP autoavviante al boot con la parola "True" in
ENVARC:AROSTCP/Autorun (Create il file se non esiste nella finestra CLI
con il comando echo "True" >sys:AROSTCP/Autorun). Modificate il file
Sys:extras/Networking/Stacks/AROSTCP/S/Package-Startup::

    ; $VER: AROSTCP-PackageStartup 1.0 (01/08/06)
    ; AROSTCP-PackageStartup (c) The AROS Dev Team.
    ;
    Path "C" "S" ADD QUIET

    If not exists T:Syslog
        makedir T:Syslog
    Endif

    If not exists EMU:
        if $AROSTCP/AutoRun eq "True"
        C:execute S/startnet
        EndIf
    EndIf

Il file Sys:extras/Networking/Stacks/AROSTCP/S/Startnet dovresse essere
qualcosa del genere::

    ; $VER: AROSTCP-startnet 1.0 (01/08/06)
    ; AROSTCP-startnet (c) The AROS Dev Team.
    ;
    Run <NIL: >NIL: AROSTCP
    WaitForPort AROSTCP
    If NOT Warn
        run >NIL: route add default gateway
    Else
    ; echo "Wait for Stack Failed"
    EndIf

Al successivo reboot, testatelo con::

    ifconfig -a

Dovreste vedere un output come questo::
    
    lo0: flags=8<LOOPBACK> mtu 1536
            inet 0.0.0.0 netmask 0x0
    eth0: flags=863<UP,BROADCAST,NOTRAILERS,RUNNING,SIMPLEX> mtu 1500
            address: 52:54:00:12:34:56
            inet 172.20.0.10 netmask 0xff000000 broadcast 172.255.255.255

Se potete vedere la stringa eth0 allora la vostra interfaccia è attiva.
Potete testarla lanciando questi comandi::

    AROS:>ping 172.20.0.1
    PING 172.20.0.1 (172.20.0.1): 56 data bytes
    64 bytes from 172.20.0.1: icmp_seq=0 ttl=255 time=xx ms
    64 bytes from 172.20.0.1: icmp_seq=1 ttl=255 time=xx ms
    64 bytes from 172.20.0.1: icmp_seq=2 ttl=255 time=xx ms
    
    --- 172.20.0.1 ping statistics ---
    3 packets transmitted, 3 packets received, 0% packets loss
    round trip min/avg/max = x/xx/xx ms

Un output come questo significa che il nostro pacchetto ha raggiunto il
gateway all'indirizzo 172.20.0.1. Se ottenete degli errori di "Host
unreachable", allora controllate le impostazioni AROSTCP e le opzioni
della VM.

Su Windows: Per rendere una rete esterna accessibile dalla VM dovete
settare il routing dalla rete virtuale a una reale, come se voleste
rendere il vostro sistema host un router. Per Linux ciò è stato appena
fatto.

Potete testare ancora pingando altri host o provando a usare alcune
applicazioni di networking che potete trovare in
https://archives.arosworld.org/, come ftp e AIRCos. Se usate un programma
FTP con il vostro server FTP, ricordate che può funzionare solo con
server ftp passivi, impostate il vostro server in questa modalità.


Rete su QEMU/Windows
""""""""""""""""""""

Impostare QEMU per girare su Windows è relativamente più difficile che
su Linux. Per prima cosa, assicuratevi di aver configurato il Firewall
in modalità learning (o configuratelo per ricevere nuove regole) o
disabilitatelo completamente. I Firewall possono bloccare i
trasferimenti alla VM.

Ci sono due modi per usare la rete con QEMU su Windows. Il primo e più
collaudato è usare l'interfaccia tap. Per usarla dovete scaricare il
pacchetto `OpenVPN <http://openvpn.net>`__ 2.0 per Windows (solo Windows
2k/XP). 
Dopo averlo installato, avrete un'altra connessione di rete in stato
disconnesso. Rinominatela, per esempio, eth0. Quindi andate nelle
proprietà della connessione eth0 e inserite un indirizzo IP nelle
proprietà del protocollo TCP/IP. Dovete settare: l'indirizzo IP
*in un altra subnet* rispetto al vostro IP di base (Se avete un ip del
tipo 192.168.0.x, allora settate per esempio 10.0.2.2) e netmask
255.255.255.0. *Riavviate*. Quindi modificate le opzioni di avvio di
QEMU (o aggiungetele se non ci sono) -net nic -net tap,ifname=eth0.
Quindi configurate il lato AROS come spiegato sopra per il networking
in modalità utente. Ricordate che avete bisogno dei privilegi di
amministratore per installare l'adattatore TAP OpenVPN.

La seconda opzione è usare uno stack di networking in user-mode che
viene lanciato di default (o usando gli switch "-net nic -net user",
che sono di default adesso). Le opzioni specificate sono per QEMU
versione 0.8 o successiva. Settare il lato AROS è simile a come fatto
su Linux, ma avete bisogno di usare i seguenti indirizzi IP per il setup
e il test: 10.0.2.16 per l'IP della macchina AROS (invece di 172.20.0.10)
10.0.2.2 per il gateway (invece di 172.20.0.1). Questa modalità funziona
anche senza i privilegi di amministratore dati all'utente, ma può
*non far funzionare correttamente alcune applicazioni su AROS (come i
client FTP).*

Ci sono alcune guide disponibili su come impostare il networking su QEMU
in Windows:

    + Per `VLan <http://www.h7.dion.ne.jp/~qemu-win/HowToNetwork-en.html>`__
    + Per `Tap <http://www.h7.dion.ne.jp/~qemu-win/TapWin32-en.html>`__

Rete su VMWare
""""""""""""""

La rete lato VMWare è relativamente semplice da impostare. Tutto quello
di cui avete bisogno è aggiungere la configurazione NIC della vostra VM
eassegnare l'IP alla nuova connessione di rete, associata con quella
scheda. Altre impostazioni sono le stesse dette per QEMU prima, eccetto
per il tipo di adattatore nel file
SYS:Extras/Networking/Stacks/AROSTCP/db/interfaces ::

    eth0 DEV=DEVS:networks/pcnet32.device UNIT=0 IP=10.0.2.2 UP

Rete su un vero PC
""""""""""""""""""

Su un vero PC dovete fare quello che fate per qualunque OS, preparare
l'hardware per connettersi alla AROS box, cavi, hub e altro. Quindi
dovete settare il lato AROS in modo simile a quanto visto prima,
sostituendo l'indirizzo IP con uno accettabile per la vostra LAN per
l' IP della AROS box, il gateway e il DNS. Impostate la vostra scheda di
rete nel file *interfaces* scommentando la stringa corrispondente alla
vostra scheda.

Da completare...  

Configurare il sonoro
---------------------

Attualmente non c'è molto da suonare in AROS. Prima di tutto, al momento
non ci sono driver funzionanti per le schede audio implementate dalla
macchine virtuali (normalmente sb16/es) quindi l'unico modo per provare
a suonare è usare un AROS nativo su un PC con una vera scheda audio SB
Live/Audigy. Anche i codec AC97 sono supportati.

Il suono AHI in AROS supporta anche le opzioni no sound (VOID) e
scrittura su disco.

Da scrivere...

Queste sono tutte le informazioni per l'utente?
===============================================

Questo capitolo dovrebbe avervi spiegato come ottenere, installare e
usare AROS. Dopo aver provato a far girare ogni programma nelle
directory C, Demos, Utilities, Tools, Games, etc., potreste chiedervi
se è tutto qui. Sì, attualmente questo è tutto ciò che un "Utente" può
fare con AROS! Ma quando ogni nuovo codice importante per l'utente sarà
pronto, verrà aggiunto a questa guida, ovviamente.

Se pensate che non ho fornito abbastanza informazioni sulla compilazione
installazione, Subversion, la shell, etc, sappiate che ho le mie
ragioni.Prima di tutto, ci sono già tante informazioni disponibili, e
non sarebbe necessario come anche ingiusto copiare semplicemente quelle
informazioni in questo documento. Secondo, stiamo parlando di
informazioni molto particolari. Alcuni lettori potrebbero essere
interessati a compilare il sorgente, altri potrebbero voler conoscere
tutto sulla shell dell'Amiga. Quindi per mantenere questa guida
leggibile, punto semplicemente ai luoghi dove potete trovare queste
informazioni, invece che fornirle qui. Voi, lettori, potete quindi
decidere se è di vostro interesse.


.. _Linux: https://www.linux.org/
.. _UAE:   http://www.freiburg.linux.de/~uae/
.. _installare: installation
