=======================
Domande frequenti (FAQ)
=======================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright (C) 1995-2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::

Domande comuni
==============

Posso fare una domanda?
-----------------------

Certo che puoi. Ci sono diversi posti in cui puoi fare domande, discutere di
AROS e trovare aiuto. Le mailing list degli sviluppatori AROS e i canali Slack
sono elencati nel `wiki del repository Git di AROS
<https://github.com/aros-development-team/AROS/wiki>`__. Ci sono anche forum
della comunità e discussioni su vari forum dedicati ad Amiga, dove puoi trovare
persone con esperienza nell'uso di AROS e di altri sistemi Amiga-like.

Inoltre, online è disponibile una notevole quantità di documentazione e
letteratura su AROS, AmigaOS e i sistemi Amiga-like correlati, che può fornire
utili informazioni di base e pratiche.

Questa FAQ verrà aggiornata man mano che emergeranno domande e risposte utili,
ma è probabile che le discussioni della comunità e i canali di sviluppo
contengano informazioni più recenti.

Cos'è AROS? 
-----------

Per favore leggi l' introduzione_.

.. _introduzione: ../../introduction/index


Qual è lo stato legale di AROS?
-------------------------------

La legge europea dice che è legale applicare le tecniche di reverse
engineering al fine dell'interoperabilità. Dice anche che è illegale
distribuire la conoscenza acquisita tramite queste tecniche.
Sostanzialmente significa che sei autorizzato a disassemblare qualunque
software per scrivere qualcosa di compatibile (per esempio, sarebbe
legale disassemblare Word per scrivere un programma che converte i
documenti di Word in testo ASCII).

Ci sono ovviamente delle limitazioni: non sei autorizzato a
disassemblare il software se l'informazione che vuoi ottenere così
facendo può essere ottenuta in altri modi. Inoltre non puoi comunicare
ad altri ciò che hai imparato. Un libro come "Windows Inside" è quindi
illegale o al limite della legalità.

Poichè noi evitiamo le tecniche di disassemblaggio e al loro posto
usiamo conoscenze liberamente disponibili (che includono i manuali di
programmazione) che non sono sotto nessun NDA, quanto detto non si
applica direttamente ad AROS. Quello che conta qui è l'intento della
legge: è legale scrivere software che è compatibile con qualche altro
software. Quindi crediamo che AROS è protetto dalla legge.

Brevetti e file header sono un altro problema. Possiamo usare degli
algoritmi brevettati in Europa poichè la legge Europea non ammette
brevetti sugli algoritmi. Comunque, il codice che usa questi algoritmi
che sono brevettati negli USA non possono essere importati negli USA.
Esempi di algoritmi brevettati in AmigaOS includono lo spostamento degli
schermi e il modo particolare con cui funzionano i menu. Quindi evitiamo
di implementare queste caratteristiche nello stesso esatto modo. I file
header, d'altra parte, devono essere compatibili ma il più possibile
diversi dagli originali.

Per evitare ogni problema ci siamo mossi per ottenere un OK ufficiale da
Amiga Inc. Loro vedono positivamente il nostro sforzo, ma sono molto
incerti sulle implicazioni legali. Ti suggeriamo di prendere atto che
Amiga Inc non ci ha mandato alcuna lettera di Cease and Desist come
segno positivo. Sfortunatamente, nessun contratto legale è stato fatto
finora, a prescindere dalle buone intenzioni di entrambe le parti.


Perchè puntate alla compatibilità solo col 3.1?
-----------------------------------------------

Si è discusso di scrivere un sistema operativo avanzato con le
caratteristiche di AmigaOS. L'idea è stata abbandonata per una buona ragione.
Innanzitutto, tutti concordavano sul fatto che l'attuale AmigaOS dovesse
essere migliorato, ma nessuno sapeva come farlo, né era d'accordo su cosa
andasse migliorato o su cosa fosse importante. Per esempio, alcuni volevano la
protezione della memoria, ma non ne gradivano il costo (una riscrittura
sostanziale del software disponibile e una perdita di velocità).

Alla fine le discussioni si concludevano in litigi o nella ripetizione degli
stessi argomenti. Così abbiamo deciso di iniziare con qualcosa che sapevamo
gestire. Poi, quando avremo l'esperienza per capire cosa è possibile e cosa
no, potremo decidere i miglioramenti.

Vogliamo anche essere compatibili a livello binario con l'AmigaOS originale
sui computer Amiga. Il motivo è semplicemente che un nuovo SO senza programmi
da eseguire ha poche possibilità di sopravvivere. Perciò cerchiamo di rendere
il passaggio dal SO originale al nostro il meno doloroso possibile (ma non al
punto da non poter più migliorare AROS in seguito). Come sempre, tutto ha un
prezzo, e cerchiamo di valutare con attenzione quale possa essere e se noi e
tutti gli altri saremmo disposti a pagarlo.


Potete implementare la caratteristica XYZ?
------------------------------------------

No, per le seguenti ragioni:

a) Se era veramente importante, sarebbe già nell'OS originale. :-)
b) Potresti implementarla tu e mandarci una patch!

La ragione di questo punto di vista è che ci sono un sacco di persone in
giro che pensano che quella caratteristica è la più importante e che AROS
non ha futuro se non viene implementata nel modo giusto. La nostra
posizione è che AmigaOS, che AROS aspira a implementare, può fare
qualunque cosa che un moderno OS può fare. Vediamo che ci sono aree in
cui AmigaOS potrebbe essere migliorato, ma se lo facciamo, chi
scriverebbe il resto dell'OS? Alla fine, avremmo ottenuto un sacco di
simpatici miglioramenti all'AmigaOS originale che non farebbero più
funzionare il software disponibile e non varebbero nulla, perchè il
resto dell'OS sarebbe mancante.

Quindi, abbiamo deciso di bloccare ogni tentativo di implementare nuove
caratteristiche di rilievo nell'OS fino a quando non sarà più o meno
completato. Ci stiamo quasi avvicinando al traguardo adesso, e ci sono
un paio di innovazioni implementate in AROS che non sono disponibili in
AmigaOS.


Quanto è compatibile AROS con AmigaOS?
--------------------------------------

Molto compatibile. Crediamo che AROS farà girare il software esistente
su Amiga senza problemi. Su altro hardware, il software esistente deve
essere ricompilato. Offriremo un preprocessore che potrete usare sul
vostro codice che modificherà ogni codice che potrebbe non andare su
AROS e/o vi avviserà di quel codice.

Portare programmi da AmigaOS ad AROS è attualmente per la maggior parte
un lavoro di semplice ricompilazione, con qualche occasionale ritocco
qua e la. Ci sono ovviamente dei programmi per cui non è così, ma
funziona per la maggior parte di quelli moderni.


Per quali architetture hardware è disponibile AROS?
---------------------------------------------------

Attualmente AROS è disponibile in uno stato piuttosto usabile come nativo e
hosted (sotto Linux) per l'architettura i386 (cioè i cloni compatibili IBM PC
AT) e per X86_64. Sono in corso porting, a diversi gradi di completamento,
per gli Amiga 68k e il Raspberry Pi.


Ci sarà un port di AROS per PowerPC?
------------------------------------

È già disponibile. I port di AROS per PowerPC mantenuti sono sam440-ppc e
darwin-ppc.


Perchè state usando Linux e X11?
--------------------------------

Usiamo Linux e X11 per velocizzare lo sviluppo. Per esempio, se
implementi una nuova funzione per aprire una finestra puoi
semplicemente scrivere quella singola funzione e non aver da
scrivere centinaia di altre funzioni in layers.library,
graphics.library, un sacco di device driver e tutto il resto di cui la
funzione ha bisogno.

L'obiettivo di AROS è certamente di essere indipendente da Linux e X11
(ma restando capace di girarci sopra se la gente lo vuole veramente), e
ciò sta lentamente diventando una realtà con le versioni native di AROS.
Comunque abbiamo ancora bisogno di Linux per lo sviluppo, poichè alcuni
tool di sviluppo non sono stati ancora portati su AROS.


Come intendete rendere AROS portabile?
--------------------------------------

Una delle maggiori nuove caratteristiche di AROS a confronto con AmigaOS
è il sistema HIDD (Hardware Independent Device Drivers), che ci
permetterà di portare AROS su hardware differente abbastanza facilmente.
Sostanzialmente, le librerie di base dell'OS non toccano l'hardware
direttamente, ma passano invece attraverso gli HIDD, che sono programmati
usando un sistema orientato agli oggetti che rende semplice sostituire
gli HIDD e riusare il codice.


Perchè pensate che AROS ce la farà?
-----------------------------------------

Sentiamo ogni giorno da un sacco di gente che AROS non ci riuscirà. Molti
di loro non sanno quello che stiamo facendo o pensano che Amiga è già
morto. Dopo aver spiegato ai primi quello che facciamo, molti concordano
che è possibile. I secondi fanno più problemi. Bene, Amiga è morto al
momento? Quelli che stanno ancora usando i loro Amiga vi diranno
probabilmente che non è così. I vostri A500 o A4000 sono esplosi quando
la Commodore andò in bancarotta? Sono esplosi quando lo ha fatto Amiga
Technologies?

Il fatto è che c'è poco software nuovo sviluppato per l'Amiga (sebbene
Aminet vada ancora avanti simpaticamente) e l'hardware è sviluppato a una
velocità inferiore (ma gli aggeggi più sbalorditivi sembrano apparire
ora). La comunità Amiga (che è ancora viva) sembra essere seduta in
attesa. E se qualcuno rilascia un prodotto che è un minimo simile a
quello che era l'Amiga nel 1984, allora quella macchina avrà di nuovo
successo. E chi lo sa, può essere che con quella macchina troverai un CD
con su scritto "AROS". :-)


Cosa faccio se AROS non compila?
--------------------------------

Per favore, fornisci i dettagli del problema, incluso il comando che hai usato
per compilare AROS e gli eventuali messaggi di errore ricevuti, e chiedi aiuto
sulla `mailing list degli sviluppatori AROS`__ o nel canale Slack di AROS.
Questi sono i posti appropriati per discutere dei problemi di compilazione e di
altre questioni legate allo sviluppo di AROS, ed è lì che gli sviluppatori e le
altre persone che conoscono il sistema di build possono aiutare a diagnosticare
il problema.

Non è necessario essere uno sviluppatore AROS affermato per chiedere aiuto su un
problema di compilazione. Se stai compilando AROS dai sorgenti, stai già
lavorando con l'ambiente di sviluppo.

__ https://www.aros.org/


AROS avrà protezione della memoria, SVM, RT, ...?
-------------------------------------------------

Diverse centinaia di esperti Amiga (e persone che si consideravano tali) hanno
cercato per tre anni un modo per implementare la protezione della memoria (MP)
per AmigaOS. Non ci sono riusciti. Questo indica che è piuttosto improbabile
che il normale AmigaOS avrà mai una MP come Unix o Windows NT.

Ma non tutto è perduto. Ci sono piani per integrare in AROS una variante di
MP che permetterà di proteggere almeno i nuovi programmi che ne sono a
conoscenza. Alcuni sforzi in quest'area sembrano davvero promettenti. Inoltre,
non è davvero un problema se la tua macchina va in crash. Piuttosto, il
problema potrebbe essere che:

1. Non hai un'idea chiara del perché sia andata in crash. In pratica finisci
   per frugare con un palo di trenta metri in una palude avvolta da una fitta
   nebbia.
2. Perdi il tuo lavoro.

Riavviare la macchina non è davvero un problema.

Ciò che potremmo provare a costruire è un sistema che almeno avvisi se sta
succedendo qualcosa di dubbio, che possa dirti in gran dettaglio cosa stava
accadendo quando la macchina è andata in crash e che ti permetta di salvare
il tuo lavoro e *poi* andare in crash. Servirebbe anche un modo per
controllare cosa è stato salvato, così da essere sicuri di non continuare con
dati corrotti.

Lo stesso vale per SVM (memoria virtuale con swap), RT (tracciamento delle
risorse) e SMP (multiprocessing simmetrico). Stiamo attualmente pianificando
come implementarli, assicurandoci che l'aggiunta di queste funzionalità sia
indolore. Tuttavia, al momento non hanno la massima priorità. Un RT molto
elementare è però già stato aggiunto.


Posso diventare un beta tester?
-------------------------------

Certo, nessun problema. Infatti, noi vogliamo più beta tester possibili,
per cui ognuno è il benvenuto! Comunuque non teniamo una lista di beta
tester, quindi tutto quello che dovete fare è scaricare AROS, testare
ciò che volete e inviarci un report.


Qual è la relazione tra AROS e UAE?
-----------------------------------

UAE è un emulatore Amiga e, in quanto tale, il suo obiettivo è un po' diverso
da quello di AROS. UAE vuole essere compatibile a livello binario anche con i
giochi e con il codice che accede direttamente all'hardware, mentre AROS vuole
avere applicazioni native. Perciò AROS è molto più veloce di UAE, ma sotto UAE
puoi eseguire più software.

Siamo in contatto informale con l'autore di UAE e ci sono buone probabilità
che del codice di UAE compaia in AROS e viceversa. Per esempio, gli
sviluppatori di UAE sono interessati ai sorgenti del SO, perché UAE potrebbe
eseguire alcune applicazioni molto più velocemente se alcune o tutte le
funzioni del SO fossero sostituite da codice nativo. D'altra parte, AROS
potrebbe trarre vantaggio da un'emulazione Amiga integrata.

Poiché la maggior parte dei programmi non sarà disponibile su AROS fin
dall'inizio, Fabio Alemagna ha portato UAE su AROS, così puoi eseguire i
vecchi programmi almeno in emulazione.

In Contrib è disponibile anche `E-UAE`__, cioè UAE migliorato con alcune
funzionalità di `WinUAE`__.

__ http://www.rcdrummond.net/uae/
__ https://www.winuae.net/


Qual è la relazione tra AROS e la Haage & Partner?
--------------------------------------------------

Haage & Parner ha usato parti di AROS in AmigaOS 3.5 e AmigaOS 3.9, per
esempio la ruota dei colori e il gadget gradientslider e il comando
SetENV. Questo significa che in qualche modo, AROS è diventato parte
dell' AmigaOS ufficiale. Questo non implica che c'è qualche relazione
formale tra AROS e Haage & Partner. AROS è un progetto open source, e
chiunque può usare il nostro codice nei loro progetti a patto che
seguano la licenza.


Qual è la relazione tra AROS e MorphOS?
---------------------------------------

La relazione tra AROS e MorphOS è sostanzialmente la stessa che c'è tra
AROS e la Haage & Partner. MorphOS usa parti di AROS per velocizzare il
loro sforzo di sviluppo; sotto i termini della nostra licenza. Come con
Haage & Partner, questo è bene per entrambi i team, in quanto il team di
MorphOS riceve una spinta al loro sviluppo da AROS e AROS ottiene buoni
miglioramenti al nostro codice sorgente dal team di MorphOS. Non c'è
alcuna relazione formale tra AROS e MorphOS; questo è semplicemente come
funziona lo sviluppo di software open source.


Quali linguaggi di programmazione sono disponibili?
---------------------------------------------------

GCC (C, C++) è disponibile sia come compilatore nativo che come
cross-compilatore.

I linguaggi disponibili nativamente sono Python_, Regina_, Lua_ e Hollywood_:

+ Python è un linguaggio di scripting diventato piuttosto popolare grazie al
  suo bel design e alle sue caratteristiche (programmazione orientata agli
  oggetti, sistema di moduli, molti moduli utili inclusi, sintassi pulita,
  ...). Per il port su AROS è stato avviato un progetto separato, reperibile
  su https://pyaros.sourceforge.net/.

+ Regina è un interprete REXX portabile e conforme ad ANSI. L'obiettivo del
  port su AROS è la compatibilità con l'interprete ARexx dell'AmigaOS
  classico.

+ Lua è un linguaggio di scripting potente, veloce, leggero e integrabile. Il
  port su AROS è stato esteso con due moduli: siamiga e zulu. Il primo
  contiene alcuni semplici comandi grafici, il secondo è un'interfaccia verso
  Zune.

+ Hollywood è un linguaggio di programmazione commerciale per applicazioni
  multimediali, giochi inclusi. Puoi acquistare una versione per i386-aros
  (ABI v0).

.. _Python: https://www.python.org/
.. _Regina: https://regina-rexx.sourceforge.io/
.. _Lua: https://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/


Perchè non c'è alcun emulator m68k in AROS?
-------------------------------------------

C'è già un tentativo di integrare l'emulatore janus-uae.

Ma perché non implementiamo semplicemente una CPU m68k virtuale per eseguire
il software direttamente su AROS? Beh, il problema è che il software m68k si
aspetta i dati in formato big-endian, mentre AROS gira anche su CPU
little-endian. Le routine little-endian del nucleo di AROS dovrebbero lavorare
con i dati big-endian dell'emulazione. La conversione automatica sembra
impossibile (solo un esempio: c'è un campo in una struttura di AmigaOS che a
volte contiene un ULONG e a volte due WORD) perché non possiamo sapere come
sono codificati un paio di byte in RAM.

.. _UAE: http://www.amigaemulator.org/


Ci sarà una ROM Kickstart di AROS?
----------------------------------

Sono già disponibili nel pacchetto amiga-m68k-boot-iso, nella directory
boot/amiga.


Nightly build
=============

Cosa sono le nightly build?
---------------------------

Le nightly build di AROS sono build di sviluppo prodotte a partire dallo stato
attuale dell'albero dei sorgenti di AROS. Sono destinate principalmente agli
sviluppatori, ai tester e a chi vuole seguire e sperimentare gli ultimi sviluppi
di AROS. In quanto tali, vanno considerate un'istantanea di sviluppo in continua
evoluzione piuttosto che una release rifinita e orientata all'utente finale. La
loro configurazione è quindi pensata per fornire un ambiente coerente in cui
testare lo sviluppo attuale di AROS, non per rappresentare una scelta definitiva
dell'aspetto del desktop o dell'esperienza utente.

Perché le nightly build non usano temi "belli"?
-----------------------------------------------

Il problema è che "bello" è soggettivo. Non esiste un tema predefinito che
accontenti tutti, e cambiare l'impostazione predefinita del progetto ogni volta
che a qualcuno non piace trasforma l'estetica in un ciclo infinito di
"rimettetelo com'era".

Ecco perché la distinzione tra AROS in sé e le singole distribuzioni è
importante. I manutentori delle distribuzioni sono liberi di decidere l'aspetto
della propria distribuzione e le impostazioni predefinite con cui viene fornita.

Le nightly build non vogliono essere un prodotto desktop rifinito e con un
gusto preciso; sono un ambiente coerente per lo sviluppo e i test. Se preferisci
un aspetto diverso, personalizzalo o costruisci una distribuzione attorno a
quella preferenza.

La preferenza personale è una ragione perfettamente legittima per personalizzare
il proprio sistema, ma non è una base particolarmente valida per cambiare le
impostazioni predefinite del progetto upstream.


Domande sul software
====================

Cos'è Zune?
-----------

Nel caso tu abbia letto di Zune su questo sito, è semplicemente una
reimplementazione open source di MUI, che è un potente (oltre che user e
developer-friendly) toolkit GUI shareware e orientato agli oggetti e lo
standard di fatto su AmigaOS. Zune è il toolkit GUI preferito per
sviluppare applicazioni AROS native. Come dice il nome stesso, non
significa nulla, ma suona bene.

Cosa sono la memoria grafica e l'altra memoria in Wanderer?
-----------------------------------------------------------

Questa divisione della memoria è principalmente un cimelio dal passato
dell'Amiga, dove la memoria grafica era la memoria per le applicazioni
prima che se ne aggiungesse dell'altra, chiamata FAST RAM, dove andavano
a finire le applicazioni, mentre la grafica i suoni e alcune strutture
di sistema rimanevano nella memoria grafica.

In AROS-hosted, non c'è questo tipo di memoria "Altra" (FAST), ma solo
GFX, mentre su AROS nativo, GFX ha un massimo di 16MB, sebbene non
rifletta lo stato della memoria della scheda grafica... Non ha alcun
tipo di relazione con l'ammontare della memoria sulla tua scheda
grafica.

*La risposta prolissa*
Memoria grafica nel i386-nativo indica i primi 16MB della memoria del
sistema. I primi 16MB sono l'area in cui le schede ISA possono usare il
DMA. Allocando la memoria con MEMF_DMA o MEMF_CHIP andremo a impegnare
quella memoria, tutto il resto va nell'altra (fast) memoria.

Usate il comando: C:Avail HUMAN per informazioni sulla memoria.

Cosa fa l'azione di Wanderer Fotografa <Tutto/Finestra> (Snapshot)
------------------------------------------------------------------

Questo comando memorizza la posizione delle icone di tutte le finestre (o di
una singola finestra).


Quali sono le opzioni da riga di comando dell'eseguibile AROS-hosted?
---------------------------------------------------------------------

Puoi avere una lista di queste opzioni lanciando il comando ./aros -h

Quali sono le opzioni del kernel di AROS usate nella riga di GRUB?
------------------------------------------------------------------

Eccone alcune::

    floppy=<disabled/nomount>   Definisce le opzioni di trackdisk.device
        disabled                - disabilita completamente l'inizializzazione
                                  di trackdisk.device
        nomount                 - inizializza trackdisk.device ma non crea
                                  i dispositivi DOS

    ATA=32bit           - Abilita l'I/O a 32 bit nel driver hdd (sicuro)
    forcedma            - Forza l'attivazione del DMA nel driver hdd (dovrebbe
                          essere sicuro, ma potrebbe non esserlo)
    gfx=<nome hidd>     - Usa l'hidd specificato come driver grafico
    lib=<nome>          - Carica e inizializza la libreria/hidd specificata

Nota che tutto è case-sensitive.


Come posso creare uno script DOS che venga eseguito automaticamente per un pacchetto installato?
------------------------------------------------------------------------------------------------

1) Crea una sottodirectory S e aggiungi un file di nome 'Package-Startup' con
   lo script DOS di quel pacchetto che vuoi eseguire a ogni avvio.

2) Crea una variabile nel file envarc:sys/packages che contenga il percorso
   della sottodirectory S del tuo pacchetto.

Esempio di struttura delle directory::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup

La variabile in envarc:sys/packages potrebbe chiamarsi 'myapp' (il nome è un
esempio); il contenuto sarebbe allora 'sys:extras/myappdir'.

Lo script Package-Startup verrebbe quindi chiamato dalla startup-sequence.


Domande sull'hardware
=====================

Dove posso trovare una lista di hardware compatibile con AROS?
--------------------------------------------------------------

Ne puoi trovare una sulla pagina dell' `AROS Wiki <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__ 
. Ci potrebbero essere anche altre liste fatte dagli utenti AROS.

Perchè Aros non si avvia dal disco settato come SLAVE sul canale IDE?
---------------------------------------------------------------------

Bene, AROS dovrebbe avviarsi se il disco è in SLAVE, ma SOLO se c'è un
altro disco in MASTER. Questa sembra essere la connessione corretta che
rispetta le specifiche IDE, e AROS la segue.

Il sistema crasha con un cursore rosso sullo schermo o con schermo vuoto
------------------------------------------------------------------------

Una causa può essere l'uso di un mouse seriale (non ancora supportato). Al
momento con AROS devi usare un mouse PS/2. Un'altra causa potrebbe essere che
hai scelto nel menu di avvio una modalità video che il tuo hardware non
supporta. Riavvia e provane una diversa.
