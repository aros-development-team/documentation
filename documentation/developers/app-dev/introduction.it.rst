=====================================
Manuale di sviluppo applicazioni AROS
=====================================

:Authors:   Staf Verhaegen, Sebastian Rittau, Stefan Rieken, Matt Parsons,
            Adam Chodorowski, Fabio Alemagna, Matthias Rustler
:Copyright: Copyright © 1995-2006, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished; integration started (looong way left to go).
:ToDo:      Integrate the various parts. Update and revise. Complete...
:Abstract:
    AROS - L'AROS Research Operating System prova a portare le API del Sistema
    operativo Amiga su piattaforme hardware diverse. Questo documento fornisce
    un introduzione alla programmazione AROS descrivendo come funziona AROS e
    descrivendo le sue API.    

`Index <index>`__

.. Warning::

   Questo documento non è completato! E' probabile che ci siano molte parti
   non aggiornate, che contengono informazioni scorrette o del tutto mancanti.
   Se ci volete aiutare a rettificarlo, contattateci.

.. Contents::


------------
Introduzione
------------


Sviluppare per la piattaforma AROS
==================================

Questo capitolo spiega come sviluppare programmi che gireranno sulla
piattaforma AROS. Vi dice anche come compilarli sulle diverse macchine su cui
gira AROS. Assume che abbiate una discreta conoscenza del linguaggio C e di
concetti basilari come il `linking`.


Il programma "Hello, World!"
----------------------------

Quello che segue è un programma che visualizza il messaggio "Hello, World!" -
una tradizione dei programmatori da generazioni. Il file `helloworld.c` ha il
seguente contenuto::

  #include <stdio.h>

  int main(void)
  {
    puts("Hello World");      
    return 0;
  }


Compilare nell'albero dei sorgenti AROS con il build system
-----------------------------------------------------------

Se avete il vostro albero dei sorgenti di AROS e avete compilato AROS lì, potete
usare il build system di AROS per compilare programmi per AROS. Potete farlo
mettendo il codice sorgente del programma da qualche parte nell'albero dei
sorgenti di AROS. La directory 'local' nella directory principale dei sorgenti
di AROS può essere usata per metterci del codice. Creiamo prima una directory
lì, assumendo che siete nella prima directory dei sorgenti di AROS::

  % mkdir local/helloworld

Inserite il file helloworld.c lì e un file aggiuntivo per le istruzioni di
build chiamato `mmakefile.src` con i seguenti contenuti::

  include $(TOP)/config/make.cfg
  
  %build_prog mmake=local-helloworld files=helloworld progname=HelloWorld

Nella radice della directory dei sorgenti di AROS potete adesso fare il build
del programma helloworld con il seguente comando::

  % make local-helloworld

Adesso troverete nell'albero binario di AROS il programma compilato come
`local/helloworld/HelloWorld`.

Il sistema di build di AROS è concepito per facilitarvi la vita quando fare il
build di binari con dipendenze non banali. Questo viene spiegato in un
`capitolo separato`__

__ buildsystem


Compilare su Linux con GCC
--------------------------

Sotto AROS/hosted state usando una versione configurata del GCC Linux. C'è una
differenza che dipende dal fatto se usate la versione compilata di AROS
(i386-linux-system) o compilate voi il sorgente:

+ i386-linux-system

  Dovete scaricare il pacchetto `i386-all-sdk`. Scompattatelo, spostatevi nella
  directory che viene creata e lanciate da root lo script incluso (es.
  ``sudo AROS-SDK-Install``.) Lo script fa alcune domande, ma potete usare i
  valori di default. Il prossimo passo è aggiungere un path. Come questo si
  possa fare dipende dalla shell che state usando. Supponendo che state usando
  Bash e avete i valori di default per il path: aprite /home/*user*/.bashrc e
  aggiungere la riga ``PATH=/usr/local/aros-sdk/bin:"${PATH}"`` alla fine del
  file. Scrivete ``i386-aros-gcc -v`` in una nuova shell per un test veloce.  

+ auto-compilato

  Il path del compilatore AROS è `AROS/bin/linux-i386/tools`. Aggiungete questo
  path come spiegato sopra. Il nome del compilatore è `i386-linux-aros-gcc`.  
  
Potete compilare il programma con il seguente comando da una shell Linux::

  % i386-linux-aros-gcc -o helloworld helloworld.c

Troverete strumenti aggiuntivi nel path del compilatroe C AROS:
versioni AROS di ld, ranlib, il compilatore catalog Flexcat, etc.

.. Note:: Se state usando i386-linux-aros-strip dovete aggiungere i parametri
   `--strip-unneeded --remove-section .comment`. Altrimenti strip creerà binari
   corrotti.


Compilare per i386-nativo
-------------------------

Potete scaricare una versione di GCC che gira nativamente sotto AROS da
`Sourceforge <http://sourceforge.net/project/showfiles.php?group_id=43586&package_id=127743>`_.
Avete bisogno almeno dei binutils e del core. Avrete bisogno anche dell'SDK
AROS. Scompattateli nello stesso punto (ad esempio, sys:ADE). Copiate gli
include e le libs dall'SDK a sys:ADE

Quindi avete bisogno di usare i seguenti comandi::

    path sys:ade/bin add
    assign Development: sys:ade



Concetti
========

File Include
------------

AROS ha una varietà di file include. Sono posti in `sys:Development/include`.
La sottodirectory `proto` contiene file include con i prototipi di funzione per
le librerie condivise. In `libraries` ci sono gli header con le strutture e i
define. Alcune delle librerie più grandi come `Intuition` hanno la loro propria
directory con gli headers.

Librerie condivise di AROS
--------------------------

Le librerie condivise sono la magia che fa funzionare AROS. Ogni libreria è una
collezione di funzioni che svolgono certi compiti. Normalmente funzioni con
compiti simili sono contenute in una libreria. Per esempio tutte le funzioni
basilari di gestione della memoria sono contenute in `exec.library`.

Le librerie si trovano normalmente nella directory `LIBS:`, ma possono essere
memorizzate in altri punti. Alcune librerie importanti non sono salvate come
file separati, ma sono contenute nel kernel. Ricordate che le librerie del
kernel sono diverse da installazione a installazione, quindi non dipendete da
una libreria specifica come parte del kernel.

Uno sguardo generale alle librerie core di AROS
...............................................

Qui c'è una lista di alcune librerie importanti e delle loro funzioni.
Non dovete ricordarle tutte, in quanto verranno discusse in dettaglio
successivamente.

+ `exec.library` è la libreria più importante. E' responsabile della gestione
  delle cose di base come gestire i `tasks` (es. i programmi), `memoria`,
  `librerie` e tante altre cose.

+ `utility.library` implementa meccanismi molto importanti per "parlare" con le
  librerie: le `taglists` che verranno discusse successivamente in questo
  capitolo e gli `hooks`. A parte questo, utility contiene una miscellanea di
  piccole funzioni utili.

+ `dos.library` è responsabile della gestione dei file e di alcune funzioni
  basilari di I/O. Senza dos, AROS non sarebbe in grado di accedere ai file.

+ `intuition.library` gestisce `interfacce utente grafiche (GUI)`. Con Intuition
  potete creare `finestre` e `gadgets` e gestirle di conseguenza. Ci sono altre
  librerie che lavorano sopra intuition e forniscono funzioni GUI più
  sofisticate e specializzate. Ad esempio ci sono `gadtools.library`, che
  implementa alcuni altri gadget complessi e `asl.library`, che fornisce delle
  finestre di richiesta di file e altro.  

FIXME: Aggiungere Zune, graphics, ...

Come funzionano le librerie di AROS
...................................

Il termine `libreria` normalmente fa riferimento a un oggetto il cui compito è
collezionare in un singolo posto funzioni che i programmi potrebbero voler usare
più spesso di altre, e generalmente queste funzioni servono a uno scopo comune,
quindi ci possono essere librerie per fare il parsing di file, per gestire la
localizzazione e altri tipi di task che un programma potrebbe voler eseguire.

Ci sono generalmente 2 tipi di librerie: le librerie link-time e run-time. Le
librerie link-time, come suggerisce il nome, sono usate solo nella fase di
linking del programma: il linker raccoglie tutte le funzioni delle librerie
fornite che servono al programma e le collega in un unico eseguibile. Quelle
run-time, invece, sono rese disponibili ai programmi quando vengono lanciati o
durante la loro esecuzione da speciali richieste del programma. Nella maggior
parte dei sistemi le librerie run-time sono condivise tra i programmi che
girano in modo da occupare la memoria per un'istanza della libreria. In questi
casi vengono chiamate `librerie condivise`.

Mentre le librerie link-time vengono gestite più o meno allo stesso modo da
tutti i sistemi operativi, in quanto sono indipendenti dal sistema operativo
stesso, le librerie run-time possono essere gestite in maniera diversa da OS
diversi.

Prima che una libreria possa essere usata in un programma, deve essere `aperta`.
Questo viene fatto da una funzione di exec chiamata ``OpenLibrary``. Quando una
libreria viene aperta con successo viene restituito un puntatore alla cosiddetta
`base della libreria` (library base). La library base è una zona della memoria
che contiene sia i vettori delle funzioni che i dati propri della libreria [#]_.
Quando le librerie vengono aperte sono libere di scegliere se la loro base sarà
la stessa per tutte le istanze o se una nuova sarà allocata ogni volta. Quando
viene invocata una funzione della libreria la maggior parte delle volte la
library base viene passata alla funzione in modo che i dati al suo interno
possono essere usati dentro la libreria [#]_. Una libreria può essere parte o
l'intero dato nella library base pubblica definendo un tipo per la base.
Se questo è il caso troverete il tipo nel file inclue `proto/libname.h`. Alcune
librerie più vecchie usavano questo meccanismo ma le librerie più recenti non
rendono nulla pubblico e il solo modo di cambiare lo stato interno della
libreria è quello di usare le funzioni disponibili.

.. [#] Se conoscete il C++, potreste pensare la tabella dei vettori come una
       `VTable` usata per i metodi virtuali, e il puntatore alla base della
       libreria come al puntatore `this`.

.. [#] Il passaggio della base della libreria può essere esplicito o implicito,
       a seconda della convenzione usata dalla libreria. Diversi meccanismi
       possono essere usati per il passaggio implicito della base: Macro del
       preprocessore C, funzioni inline, variabili globali, ...

Come usare le librerie condivise di AROS
........................................

Come già spiegato della sezione precedente, le librerie devono essere aperte
prima che le loro funzioni possano essere usate. L'unica libreria che non deve
essere aperta prima è la `exec.library`. Exec è sempre aperta e il vostro
compilatore sa come accedervi. Inoltre, dovete includere un header per far
conoscere il prototipo delle funzioni al codice. Questo file include è nella
directory proto, quindi se volete usare le funzioni della `dos.library` dovete
usare la riga seguente::

  #include <proto/dos.h>

Il vostro compilatore o ambiente di build può inoltre aprire alcune librerie
per voi, quindi non dovete aprirle manualmente. Leggete il manuale del vostro
compilatore per imparare questa funzionalità. Nei paragrafi che seguono verrà
spiegato il modo con cui questo viene fatto dai tools AROS e come aprire le
librerie manualmente.

Apertura automatica di gcc dall'SDK di AROS
'''''''''''''''''''''''''''''''''''''''''''

Il compilatore gcc dall'SDK di AROS apre automaticamente le seguenti librerie
principali:

- aros.library
- asl.library
- commodities.library
- cybergraphics.library
- datatypes.library
- diskfont.library
- dos.library
- expansion.library
- gadtools.library
- graphics.library
- icon.library
- iffparse.library
- intuition.library
- keymap.library
- layers.library
- locale.library
- muimaster.library (fornita da ZUNE su AROS)
- partition.library
- realtime.library
- utility.library
- workbench.library

Potete disabilitare l'auto apertura di queste librerie specificando il flag
``-nostdlibs`` al compilatore gcc. Per le librerie più vecchie fornite da AROS
potete usare la corrispondente libreria link-time che avrà cura di aprire la
libreria. Quindi, se i vostri programmi usano la reqtools.library aggiungete
``-lreqtools`` al comando gcc.

.. Note:: Ricapitolando: quando usate il compilatore GCC AROS l'uso delle
   librerie condivise diventa molto semplice e può essere gestito in due passi:

   + Usare un istruzione include per dichiarare le funzioni della libreria::

       #inclue <proto/reqtools.h>

   + Aggiungere una libreria link extra se la libreria non viene aperta
     automaticamente da gcc::

       % i386-linux-aros-gcc ... -lreqtools
       
Apertura automatica con il build system di AROS
'''''''''''''''''''''''''''''''''''''''''''''''

L'auto apertura delle librerie con il build system è molto a quella con il
compilatore gcc di AROS. Analogamente allo specificare l'opzione ``-l`` 
specificate le librerie che usate con il parametro ``uselibs`` alle macro
``%build_prog`` e ``%build_module``. Maggiori informazioni potete trovarle nel
`tutorial del build system`__.

__ buildsystem#build-system-tutorial

Apertura manuale delle librerie
'''''''''''''''''''''''''''''''

Per aprire una libreria dovete usare una funzione di `exec.library`::

    #include <proto/exec.h>

    struct Library *OpenLibrary( STRPTR name, ULONG version );

`OpenLibrary()` prende due argomenti:

name
    punta al nome della libreria. Normalmente questo è semplicemente il nome, ma
    può anche essere il path completo (assoluto o relativo) della libreria.    

    .. Note:: I path non funzionano con le librerie kernel-based (es. librerie
              incluse nel kernel). Usate solo path assoluti, se sapete
              esattamente quello che state facendo!

version
    è la versione minima della libreria da aprire. Se la libreria specificata
    viene trovata, ma la sua versione è inferiore a quella specificata in
    `version`, la libreria non verrà aperta, ma verrà restituito un errore.
    Le versioni sono importanti, perchè le librerie sono concepite per essere
    espandibili. Alcune funzioni sono disponibili solo a partire da una certa
    versione della libreria. Per esempio la funzione `AllocVec()` della
    `exec.library` è stata introdotta nella versione 36 della libreria. Se
    provate a chiamare questa funzione con una versione inferiore della
    `exec.library` installata, succederanno cose imprevedibili (molto
    probabilmente l'applicazione crasherà).
    
La seguente procedura viene usata per caricare la libreria da aprire:

1. Prima, il nome della libreria viene cercato nella lista delle librerie già
   caricate. Se questa libreria è stata caricata in memoria precedentemente (es.
   da un programma diverso) ed è ancora lì, va tutto been e `OpenLibrary()`
   torna subito.

   Le librerie nel kernel sono sempre sulla lista delle librerie caricate.

   .. Note:: I confronti in questa lista sono case sensitive! Accertatevi di
             usare il giusto case in `name`. Normalmente tutti i caratteri in
             un nome di libreria sono minuscoli.

2. Se la libreria non viene trovata nella lista e in `name` è stato specificato
   un path, viene tentata l'apertura del file specificato. Se questa fallisce,
   `OpenLibrary()` restituisce un errore.

3. Se viene specificato solo il nome della libreria, questa viene cercata prima
   nella `directory corrente`. Se non viene trovata lì, viene cercata nella
   directory `LIBS:`.


`OpenLibrary()` restituisce un puntatore a una struttura, che descrive la
libreria (`struct Library *` definita in ``exec/libraries.h``) o `NULL`, che
significa che l'apertura della libreria è fallita per qualche ragione. Il
puntatore risultante deve essere memorizzato per il compilatore. Normalmente
viene memorizzato in una variabile della forma: `<nomelibreria>Base`, es.
`IntuitionBase` per il puntatore alla *intuition.library*.

Dopo aver aperto la libreria, potete usarne le funzioni semplicemente
chiamandole come qualunque altra funzione nel vostro programma. Ma per far
sapere al compilatore cosa fare dovete includere il file header specifico per
la libreria. Questo è normalmente chiamato *proto/<nomelibreria>.h* per i
compilatori C.

Quando avete finito di usare la libreria dovete chiuderla per liberare le
risorse da essa occupate. Questa operazione viene eseguite con::

    #include <proto/exec.h>

    void CloseLibrary( struct Library *base );

`CloseLibrary()` chiude la libreria puntata da `base`. Questo puntatore può
anche essere `NULL`, in quel caso `CloseLibrary()` non fa nulla.

Dimostreremo l'uso delle librerie creando un piccolo programma, un hello-world
grafico. Invece di stampare ``Hello World!`` in console, lo faremo apparire in
un requester. Una funzione per mostrare un requester è `EasyRequestArgs()`,
che è una funzione di *intuition.library*. Non parleremo del suo utilizzo qui.
Per maggiori informazioni, guardate la sezione sui `Requesters`.



Esempio d'uso delle librerie::

    #include <proto/exec.h>          /* OpenLibrary() e CloseLibrary() */
    #include <exec/libraries.h>      /* struct Library */
    #include <dos/dos.h>             /* RETURN_OK e RETURN_FAIL */
    #include <proto/intuition.h>     /* EasyRequestArgs() */
    #include <intuition/intuition.h> /* struct EasyStruct */

    /* Questa variabile conterrà il puntatore a intuition.library */    
    struct IntuitionBase *IntuitionBase;

    int main(int argc, char *argv[])
    {
        /* Necessario a EasyRequestArgs(). */
        struct EasyStruct es = {
          sizeof(struct EasyStruct), 0UL,
          "Requester", "Hello World!", "Ok"
        };
        
        /* Prima, apriamo intuition.library. Ci serve la versione 36 o
           successiva, perchè EasyRequestArgs() è stata introdotta in questa
           versione di intuition.library
        */
        IntuitionBase = (struct IntuitionBase *)OpenLibrary("intuition.library", 36);        

        /* Dobbiamo controllare se intuition.library è stata aperta con
           successo. In caso contrario, non dobbiamo chiamarne funzioni, quindi
           usciamo immediatamente con un errore.
        */
        if (!IntuitionBase)
            return RETURN_FAIL;
        
        /* Dopo aver aperto intuition.library, chiamiamo EasyRequestArgs(). */
        EasyRequestArgs(NULL, &es, NULL, NULL);
        
        /* Infine, dobbiamo chiudere intuition.library */
        CloseLibrary((struct Library *)IntuitionBase);

        return RETURN_OK;
    }

Provate a compilare questo programma. Dovrebbe mostrarvi un grazioso requester
hello-world.

Versioning delle librerie
.........................

Le librerie condivise possono evolvere nel tempo e possono essere introdotte
nuove funzionalità. Quando un programma usa una caratteristica di una versione
recente e viene lanciato su una macchina che ha una versione più vecchia della
libreria, probabilmente causerà un crash. Per questo è stato introdotto il
versioning delle librerie, cosicchè i programmi possono controllare la versione
di una libreria e uscire elegantemente o ridurre le funzionalità. Su AROS e sui
sistemi amiga-like la versione viene determinata da un numero maggiore e un
numero minore (chiamati anche rispettivamente versione e revisione). Un nuovo
numero maggiore indica l'introduzione di nuove caratteristiche e un numero
minore incrementato indica alcune ottimizzazioni o bug fix ma mantenendo la
compatibilità. Una versione di una libreria viene spesso presentata così:
maggiore.minore [#]_ e può essere recuperata col comando dos version:

  5.System:> version dos.library
  dos.library 41.7

Durante l'apertura di una libreria potete fornire un numero di versione e
l'apertura fallirà se la versione della libreria è minore di questo valore::

  mylibbase = OpenLibrary("my.library", 2);

Questo restituirà NULL se solo la versione 1 della my.library è installata. Se
usate l'apertura automatica delle libreria, la libreria verrà aperta con la
versione della libreria usate durante la fase di linking. La versione può essere
sovrascritta con una variabile chiamata libbasename_version. Al momento la
versione della dos.library è la 41 e ciò significa che i programmi compilati
gireranno solo su altri sistemi che hanno la versione 41 della dos.library. Se
siete sicuri di usare funzioni fino alla versione 36 potete lasciare il
programma su questi sistemi con la seguente istruzione da qualche parte nel
vostro codice::

  const LONG DOSBase_version = 36;
  
La conseguenza per le librerie è che devono sempre essere retrocompatibili: se
la versione della tua libreria è la 41 ma il programma è stato compilato per la
versione 36 deve sempre girare senza problemi. Per questo una funzione a un
certo punto della tabella di lookup deve sempre eseguire la stessa funzione
anche nella nuova versione della libreria.

Se volete proprio cambiare il comportamento di una funzione con un certo nome
potreste farlo mettendola in un altro punto della tabella di lookup. Alla
vecchia locazione mettete la funzione di compatibilità che è ancora
compatibile col comportamento nelle versioni vecchie della libreria. Questo
viene fatto ad esempio per la funzione exec `OpenLibrary`, nella prima versione
di AmigaOS essa non aveva un parametro di versione e fu messa alla locazione 68.
In una versione successiva fu inclusa una funzione `OpenLibrary` che includeva
un parametro di versione e fu messa alla locazione 92. La funzione nella
posizione 68 fu rinominata `OldOpenLibrary`.

.. [#] Contrariamente a quanto alcune persone pensano, la versione
       la versione maggiore.minore non è un valore numerico: la revisione
       successiva a 1.9 è 1.10 e 1.09 non è un numero di versione valido su
       AmigaOS.

Differenze con altri systemi di librerie run-time
.................................................

Le librerie condivise di AROS hanno un'architettura unica con i suoi vantaggi
e svantaggi. Alcuni aspetti saranno discussi successivamente in questo
capitolo. La maggior parte delle volte possono essere presi come riferimento
sistemi come Windows e gli UNIX(-like).

Caricamento delle librerie condivise
''''''''''''''''''''''''''''''''''''

Su AROS le librerie a collegamento dinamico sono oggetti ELF riallocabili. La
prima volta che una libreria viene aperta viene caricata da disco e riallocata
con l'indirizzo iniziale su cui è stata caricata. I sistemi AROS e amiga like
condividono una grossa regione di memoria tra tutto il codice che gira sul
sistema. Questo significa che tutti i programmi possono usare la libreria
caricata nella memoria su cui è stata caricata.

Altri sistemi, inclusi Windows e UNIX, hanno un diverso spazio di indirizzamento
virtuale per ogni processo. Anche qui l' OS tenta di caricare la libreria
condivisa una volta sola e quindi prova a mappare la stessa libreria nello
spazio di indirizzo di ognuno dei processi che la usano. La libreria può così
essere localizzata a indirizzi diversi in spazi diversi e l'OS deve gestire
questa situazione.

Su Windows uno cerca di localizzare la libreria condivisa a una certa locazione
di memoria e prova a mapparla nella stessa memoria in ogni processo che usa
quella libreria. Se ciò non è possibile la libreria verrà duplicata in memoria.
Su molti sistemi UNIX questo problema viene evitato lasciando generare al
compilatore del codice indipendente dalla posizione, es. codice che funziona
a ogni posizione in memoria senza dover riallocare il codice. A seconda
dell'architettura, questo tipo di codice può avere più o meno impatto sulla
velocità del codice generato.

Linking dinamico delle funzioni
'''''''''''''''''''''''''''''''

I programmatori che usano linguaggi a più alto livello per accedere alle
funzioni in una libreria condivisa useranno il nome della funzione che vogliono
usare. Quando un microprocessore esegue un programma usa indirizzi di memoria
per saltare a una certa funzione. A un certo punto il nome usato dal
programmatore deve essere tradotto in un indirizzo di memoria.

Su amiga, la traduzione avviene quando il codice viene compilato o quando un
programma o un modulo vengono linkati. Ogni libbase di una libreria AROS
contiene una tabella di lookup per le funzioni della libreria. Durante la
compilazione (o il linking) il nome di una funzione viene tradotto in una
posizione in questa tabella dove può essere trovato l'indirizzo della funzione
[#]_. Le funzioni delle librerie condivise di AROS vengono quindi raggiunte
con un livello di indirezione. A seconda delle architetture CPU questo livello
di indirezione può avere più o meno influenza sulla velocità del codice.
Fortunatamente tipi simili di indirezione sono usati per chiamare le funzioni
virtuali delle classi C++ e le moderne CPU sono ottimizzate per gestire le
indirezioni senza (grossi) impatti sulla velocità. Quando la tabella di lookup
viene legata alla libbase ha bisogno di essere duplicata per le librerie che
usano una base per ogni opener.

Su Windows e i sistemi UNIX-like la traduzione di un nome di una funzione to un
indirizzo viene fatta quando il programma viene caricato e linkato a run-time
con la libreria condivisa [#]_. Quando un programma viene linkato in fase di
compilazione viene messa una lista di librerie nell'eseguibile insieme a una
lista delle funzioni utilizzate. Queste liste sono stringhe ASCII. Quando il
programma viene quindi caricato, convertirà i nomi di funzioni ai loro
indirizzi (o a un puntatore a una tabella di lookup). Prima vengono aperte le
librerie nella lista di librerie, dopo ognuna delle funzioni viene localizzata
nelle librerie. Vengono usati meccanismi diversi per il lookup dei nomi delle
funzioni. Per esempio su Windows le funzioni disponibili vengono messe in un
array ordinato in modo tale che possa venir eseguita una ricerca binaria e su
Linux vengono usati gli hash per velocizzare il lookup.

Variabili globali e statiche nelle librerie
'''''''''''''''''''''''''''''''''''''''''''

Come spiegato nel paragrafo precedente, le librerie condivise di AROS sono
caricate e inizializzate una volta sola. Questo ha anche un impatto sul modo
con cui vengono gestite le variabili globali e statiche. Potete dichiarare una
variabile globale nel sorgente della vostra libreria nel modo seguente::

  int globvar;
  
Questo creerà una variabile globale accessibile in tutte le parti della
libreria. Una volta che la libreria condivisa viene caricata in memoria, la tua
variabile verrà caricata anch'essa nella memoria occupata dalla libreria e sarà
sempre nella stessa locazione fino a quando la libreria non viene scaricata
dalla memoria. Le variabili statiche definite in una funzione vengono gestite
in modo analogo. Questo significa anche che il codice nella libreria che
accede a una variabile globale andrà sempre nella stessa locazione a
prescindere da quante volte la libreria viene aperta o da quale programma ha
chiamato il codice della libreria. Ottualmente il solo modo di avere una
variabile che ha un valore diverso per ogni apertura della libreria è avere una
libreria con una base per ogni apertura e memorizzate la libreria in questa
base. Al momento anche le variabili globali non vengono esportate dalle
librerie condivise di AROS. Possono essere utilizzate solo all'interno della
libreria stessa, i programmi che usano una libreria non possono accedere alle
variabili globali della libreria direttamente. Per questo le variabili nelle
librerie condivise di AROS sono gestite in modo diverso da quelle nelle
librerie link-time. Una variabile globale definita in una libreria link-time è
anche accessibile dal programma a cui è stata linkata la libreria e ogni
programma linkato con la stessa libreria link-time avrà la propria versione
della variabile globale.

Su UNIX, le librerie condivise furono introdotte dopo che le librerie link-time
furono usate pesantemente. Uno degli obiettivi di progettazione fu quello di
rendere il comportamento delle librerie condivise lo stesso di quelle link-time.
Per questo viene effettuata una copia delle variabili ogni volta che un
programma apre una libreria condivisa. In questo modo, ogni programma che ha
aperto una libreria condivisa avrà il proprio insieme di variabili globali.
Inoltre, anche le variabili globali di una libreria condivisa vengono
automaticamente esportate da quella libreria, cosicchè possano essere usate
direttamente nel programma che usa quella libreria.

Su Windows è possibile decidere il comportamento delle variabili globali, se
renderlo come quello di AROS o come quello di UNIX, ma di default vengono
gestite come quelle di UNIX.

Per portare le librerie condivise su AROS o su Amiga, bisogna tener conto di
questa diversa gestione delle variabili. Alcune librerie dipendono da come
vengono gestite le variabili sulle librerie condivise in UNIX e Windows e
possono essere difficili da portare su AROS.

For porting shared libraries to AROS or amiga this different handling of
variables has to be taken into account. Some libraries depend on how
variables are handled in UNIX and Windows shared libraries and may be
difficult to port to AROS.

.. Note::
   La spiegazione in questo paragrafo descrive come funzionava la gestione
   dei dati nelle librerie condivise al momento in cui il testo è stato
   scritto. A quel tempo c'erano ancora discussioni su come estendere tutto
   questo per permettere anche gestioni simili a quelle effettuate da altri
   tipi di libreria.

Librerie che usano altre librerie
'''''''''''''''''''''''''''''''''

Una libreria può aprire un'altra libreria. Quando una libreria apre un'altra
libreria ottiene il libbase per quella libreria. Questo significa che una
libreria che ha una base per ogni opener ritornerà un libbase unico a un'altra
libreria. Quando un programma apre una libreria con una base per ogni opener
otterrà indietro un libbase. Adesso, quando il programma apre una seconda
libreria che apre di nuovo la prima libreria allora verrà usato un libbase
diverso nella seconda libreria e nel programma. I programmatori di librerie con
un libbase per opener devono tenere conto di tutto ciò.

Come discusso precedentemente su UNIX e Windows tutto è basato sui processi.
Quando un programma viene caricato viene creato un nuovo processo, ogni
libreria condivisa usata in quel processo viene linkata dinamicamente una volta
sola a quel processo. Questo significa che un programma e una libreria
condivisa che accedono entrambe a una seconda libreria condivisa useranno la
stessa istanza di quella libreria condivisa. Inoltre questo comportamento
diverso può rendere difficile portare librerie condivise da UNIX/Windows.

.. Note::
   Ancora, la spiegazione in questo paragrafo descrive come funzionaba la
   gestione dell'apertura delle librerie condivise al momento della stesura
   di questo testo.
   In quel momento c'era anche una discussione su come estendere tutto questo
   per permettere una gestione simile a quella di altri tipi di libreria.   

.. [#] In realtà, in certi casi, questa tabella può contenere qualcosa in più
       dei soli puntatori a funzioni. Su AROS per 68k, infatti, dove la
       compatibilità binaria con AmigaOS (TM) è un problema, ogni voce della
       tabella contiene un'istruzione JMP seguita dall'indirizzo della funzione
       (che è parte, quindi, dell'opcode del JMP), e i programmi dell'utente
       non saltano all'indirizzo nel vettore, ma saltano al vettore stesso, e
       quindi l'istruzione JMP reindirizza il flusso del programma alla giusta
       funzione.

.. [#] FIXME: a.out librerie condivise, cardinal su Windows, ...

Fornire argomenti aggiuntivi con le taglist
-------------------------------------------

Ogni funzione di libreria prende un numero fisso di argomenti. Questo pone
qualche problema con funzioni complesse che potrebbero richiedere un gran
numero di argomenti. Per evitare questo problema furono introdotte le
cosidette taglist (liste di tag). In ``utility/tagitem.h`` troviamo una
struttura `TagItem`, che contiene i membri `ti_Tag` e `ti_Data`. Una taglist
contiene un array di queste strutture. La dimensione della lista non è
limitata. Il campo `ti_Tag` è un identificatore (spesso chiamato Tag) che
dichiara cosa contiene `ti_Data`. `ti_Data` può essere sia un intero che un
puntatore. E' garantito che sia almeno delle dimensioni di una long-word o di
un puntatore (che è più grande).

Nella descrizione di una funzione che usa una tag-list, sono elencati tutti i
possibili tag. Le funzioni devono ignorare i tag sconosciuti e usare i valori
di default per i tag non specificati, quindi le taglist sono un modo molto
flessibile di fornire argomenti a una funzione.

Ci sono alcuni tag speciali che tutte le funzioni comprendono (definiti in
``utility/tagitem.h``):


`TAG_DONE` e `TAG_END`
    Definiscono la fine di una taglist. Ogni taglist deve terminare con uno
    di questi. Un successivo `ti_Data` deve essere ignorato dalla funzione
    chiamata, quindi non deve esistere in memoria.    

`TAG_IGNORE`
    Significa che il contenuto di `ti_Data` deve essere ignorato. Questo tag
    è particolarmente utile per l'inclusione condizionale dei tag.    

`TAG_MORE`
    Usando questo tag, potete collegare insieme più taglist. `ti_Data` punta a
    un'altra taglist. L'elaborazione della taglist corrente sarà interrotta e
    quella nuova verrà elaborata al posto suo. Questo tag determina, inoltre,
    la taglist corrente.    

`TAG_SKIP`
    Forza il parser a saltare i successivi tag `ti_Data`. Essi non saranno
    processati.
   
Potete sempre fornire `NULL` al posto di un puntatore a una taglist. Tutte le
funzioni devono essere in grado di gestire i puntatori `NULL`. Sono equivalenti
a delle taglist con `TAG_DONE` come primo tag.

Una funzione che ha bisogno di una taglist è::

    #include <proto/intuition.h>

    struct Window *OpenWindowTagList
    (
        struct NewWindow *newwin, struct TagList *taglist
    );

Questa funzione sarà discussa in dettaglio nel 
.. FIXME:: *capitolo sulle finestre*

Per ora dovete solo sapere che questa funzione apre una nuova finestra.
Settiamo l'argomento `newwin` a `NULL`. I soli tag che vediamo per ora sono:

==========  ===============================  ========
Tag         Descrizione                        Tipo
==========  ===============================  ========
WA_Width    Larghezza finestra in pixel      UWORD
WA_Height   Altezza finestra in pixel        UWORD
WA_Title    Titolo della finestra            STRPTR
==========  ===============================  ========

Un'altra funzione che ci serve per il nostro piccolo esempio è::

    #include <proto/intuition.h>

    void CloseWindow( struct Window *window );

Questa funzione si usa per chiudere una finestra aperta.

Adesso diamo un'occhiata a un altro piccolo programma hello-world. Questo apre
una finestra che dice "Hello World!" nella barra del titolo, per due secondi::

    #include <proto/exec.h>
    #include <exec/libraries.h>
    #include <proto/dos.h>
    #include <proto/intuition.h>
    #include <intuition/intuition.h>

    struct DosLibrary    *DOSBase;
    struct IntuitionBase *IntuitionBase;

    int main(int argc, char *argv[])
    {
        int error = RETURN_OK;
        
        /* Questo ci serve dopo per la funzione Delay(). */
        DOSBase = (struct DosLibrary *)OpenLibrary("dos.library", 36);
        if (DOSBase)
        {
            IntuitionBase = (struct IntuitionBase *)OpenLibrary("intuition.library", 36);
            if (IntuitionBase)
            {
                struct Window *win;
                /* Settiamo i nostri tag. */
                struct TagItem tags[] =
                {
                    { WA_Width, 100                  },
                    { WA_Height, 50                  },
                    { WA_Title, (IPTR)"Hello World!" },
                    { TAG_DONE, 0UL                  }
                };

                win = OpenWindowTagList(NULL, tags);
                if (win)
                {
                    /* Ora aspettiamo due secondi, in modo da poter vedere
                       la nostra simpatica finestra.                    
                    */
                    Delay(100);

                    /* Chiudiamo la finestra. */
                    CloseWindow(win);
                }

                CloseLibrary((struct Library *)IntuitionBase);
            }
            else
                error = RETURN_FAIL;

            CloseLibrary((struct Library *)DOSBase);
        } else
            error = RETURN_FAIL;

        return error;
    }

Ovviamente, questo metodo di settare le taglist è abbastanza complicato. Così
per la maggior parte delle funzioni che usano le taglist sono disponibili delle
scorciatoie. La link-library `amiga.lib` fornisce queste scorciatoie per tutte
le funzioni interne di AROS. Queste versioni varargs possono essere usate in
questo modo:

    #include <proto/alib.h>

    Function( arg1, ..., argn, TAG1, data1, ..., TAG_DONE );

Il nostro esempio di sopra avrebbe questo aspetto, usando la versione vararg di
`OpenWindowTagList()`, chiamata `OpenWindowTags()`::

    [...]

    if( IntuitionBase )
    {
        struct Window *win;

        win = OpenWindowTags
        (
            NULL, WA_Width, 100, WA_Height, 20,
            WA_Title, "Hello World!", TAG_DONE
        );
        )
        if( win )
        {

    [...]

Più semplice, non è vero?


Ottenere maggiore documentazione
================================

Un "Hello, World!" non è un museo del Talento dei Programmatori, quindi
potreste chiedervi se c'è di più per AROS. Certo che c'è. Ma questa guida non è
una Guida del Programmatore e neanche una Guida Di Riferimento. Questo genere
di guide potrebbero essere scritte in futuro, ma per ora, le migliori guide
per il programmatore AROS che potete trovare sono i libri che sono stati
scritti per l'Amiga, e i migliori riferimenti per AROS sono gli
`autodocs <./../autodocs/index>`__ di AROS. (gli autodoc sono descrizioni delle
librerie di funzioni di AROS create parsando i sorgenti di AROS).
Ma questi sono principalmente utili per i programmatori Amiga avanzati:
forniscono solamente una spiegazione molto breve di ogni funzione. Se dovete
imparare la programmazione AROS dall'inizio, dovreste davvero tentare di
trovare qualche vecchio libro Amiga, o comprare il CDRom per gli sviluppatori
Amiga.
