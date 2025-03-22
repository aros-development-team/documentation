=======================
Lavorare con Subversion
=======================

:Authors:   Aaron Digulla, Adam Chodorowski 
:Copyright: Copyright (C) 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.
:Abstract: 
    Subversion (abbreviato SVN) è un tool di controllo versione che mantiene un
    database dei file in un progetto. Con SVN, è possibile ispezionare e
    controllare le modifiche apportate a uno specifico file: quali modifiche
    sono state fatte e quando, chi ha fatto queste modifiche, quale era il
    motivo (sempre che sia specificato), possibilmente annullando modifiche
    sbagliate, unire le modifiche fatte da persone diverse e tanto altro.
    
    Sostanzialmente, rende *molto* più facile per un gruppo di persone la
    collaborazione a un progetto comune, permettendo a ognuno di sapere cosa
    sta succedendo ai file, assicurando che qualcuno non danneggi per errore le
    modifiche di un altro sulla rete. Naturalmente, noi lo usiamo per
    collaborare ad AROS.


.. Contents::



Introduzione
============

Il server mantiene un "repository" centrale, che è il database principale che
contiene il codice comune del progetto. I singoli sviluppatori hanno le loro
"copie di lavoro", che sono copie locali del database a partire da un certo
momento, insieme alle modifiche locali che lo sviluppatore non ha ancora
caricato sul server. Quando uno sviluppatore vuole condividere le sue modifiche
con il resto del gruppo semplicemente "committa" le sue modifiche sul server
usando il programma client, che avrà cura di caricarle e unirle con le
modifiche fatte da altri sviluppatori.



Il Software
===========

UNIX
----

Se state usando Linux, FreeBSD o un altro clone UNIX moderno dovete semplicemente
installare il software SVN ufficiale, versione 1.0 o successiva, per il vostro OS.
Tutte le distribuzioni di Linux comuni hanno SVN incluso al loro interno.

C'è anche un'interfaccia GUI QT a svn chiamata `eSVN <http://esvn.umputun.com/>`__,
disponibile per gli Unix (distribuzioni GNU/Linux, FreeBSD,Sun Solaris e altre),
Mac OS X e Windows. 

.. Note:: Il server gira su subversion 1.1 al quale si può accedere con i client
          nelle versioni 1.0, 1.1 o 1.2.

SVN non funzione con la localizzazione UTF-8. Dovete settare il locale a ISO8859
prima di ogni azione SVN.


AmigaOS
-------

Se state usando AmigaOS, avete bisogno di uno stack TCP/IP e qualche port
installato. Una opzione è il port Amiga di Olaf Barthel che potete trovare su
AmiNET__ (cerca "subversion").

__ http://main.aminet.net/


Windows
-------

Se state usando Microsoft Windows (TM) potete usare il client TortoiseSVN__,
specialmente se vi piace usare Windows Explorer. Questo programma è Open Source
e libero, ha tante caratteristiche ed è supportato. Per favore assicuratevi anche
che i file che aggiungete hanno dei fine riga in stile UNIX, altrimenti potreste
*ostacolare* la generazione del codice. Se i file che state modificando hanno
un set proprietario di SVN eol-style:native (non vale per i nuovi file comunque)
potete anche non pensarci, e i fine riga (EOL) saranno automaticamente
convertiti. Esempi di editor che salvano con questi EOL sono
`Notepad++ <http://notepad-plus.sourceforge.net>`__, TigerPad (versione gratuita
e migliorata di Notepad), `DOS Navigator OSP <http://dnosp.com/>`__, e altri.
E' disponibile anche eSvn, come specificato sopra.

__ http://www.tortoisesvn.net/


MacOS X
-------

Se state usando MaxOS X potete usare uno dei tanti port SVN disponibili, come
il `Port subversion`__ di Martin Ott. Dopo aver fatto questo, potreste volere
installare una GUI SVN aggiuntiva come Versions o `svnX`__. svnX è il client SVN più
aggiornato e supporta anche l'integrazione, fra gli altri, del texteditor
freeware `Textwrangler`__ (precedentemente noto come BBedit Lite).
Notate che quando usare Textwrangler o altri editor di testo Mac, dovete
cambiare la codifica dei caratteri da 'Macos roman' a 'ISO latin 1' (ISO8859)
per i vostri documenti (cambiatelo nelle preferenze). Per quanto rigurda TW
tutte le altre impostazioni sono corrette di default. Tutte le applicazioni
specificate sono freeware e disponibili come Universal Binary per i Mac PPC e
Intel. C'è anche il client eSvn, come specificato sopra.

__ http://www.codingmonkeys.de/mbo/
__ http://www.lachoseinteractive.net/en/community/subversion/svnx/
__ http://www.barebones.com/products/textwrangler/



Loggarsi sul server
===================

A differenza di CVS, non avete bisogno di loggarti sul server. Invece, SVN ti
chiederà login e password quando serve.

.. Note:: 

    Il repository di AROS gira su un server protetto da password, ciò significa
    che `devi ottenerne l'accesso`__ per poter collaborare allo sviluppo. Su
    richiesta di Amiga Inc., l'accesso anonimo di sola lettura al repository è
    stato disabilitato.    
          
__ contribute#joining-the-team



Ottenere i sorgenti di AROS
===========================

Per avere una copia dei sorgenti di AROS potete usare il comando "checkout",
così::

    > svn checkout https://svn.aros.org/svn/aros/trunk/AROS

Questo creerà una directory chiamata AROS e la popolerà con tutti i sorgenti,
può impiegarci un po' di tempo se avete una connessione lenta. Il modulo
"contrib" contiene i programmi di terze parti che sono stati portati su AROS.
Dovete farne il checkout al fine di compilarli::

    > cd AROS
    > svn checkout https://svn.aros.org/svn/aros/trunk/contrib

.. Tip:: 

    Dopo il checkout, SVN ricorderà da dove vengono i sorgenti.    



Ottenere i sorgenti extra
=========================

Oltre ai sorgenti principali di AROS che abbiamo scaricato nella sezione
precedente, ci sono anche altre cose sul server SVN non direttamente legate al
cuore del sistema operativo. Per esempio, i moduli "binaries" che contengono
immagini come screenshot, sfondi e roba simile, e il modulo "documentation" che
contiene i sorgenti del sito web.

Potete ottenere una lista dei moduli disponibili col comando::

    > svn ls https://svn.aros.org/svn/aros/trunk/



Aggiornare i sorgenti
=====================

Dopo aver fatto il checkout dei sorgenti, potreste volerli aggiornare
periodicamente per avere le ultime modifiche che gli altri sviluppatori hanno
committato. Per far ciò usate il comando "update"::

    > cd AROS
    > svn update
    
Questo unirà tutte le modifiche che altri sviluppatori hanno fatto ai vostri
sorgenti e scaricherà inoltre nuovi file e directory che sono state aggiunti.
Se qualcuno ha committato modifiche a un file che anche voi avete modificato
localmente, SVN tenterà di unire le modifiche automaticamente. Se entrambi
avete modificato le stesse righe, SVN potrebbe fallire nell'intento di unire i
sorgenti. Quando questo succede, SVN si lamenterà e inserirà **entrambe** le
versioni nel file, separate da ``<<<<`` Dovrete quindi modificare il file e
risolvere il conflitto manualmente.

.. Warning:: 

    Solo perchè SVN ha unito con successo le tue modifiche con quelle degli
    altri sviluppatori non significa che tutto è a posto. SVN tratta solo il
    *contenuto* testuale; potrebbero sempre esserci dei conflitti *di logica*
    dopo l'unione (es. un altro sviluppatore potrebbe aver modificato le
    semantiche di qualche funzione che avete usato nelle vostre modifiche).
    Dovete sempre verificare i file che avete unito per vedere se hanno ancora
    senso.    



Committare le modifiche
=======================

Se avete fatto qualche modifica e sentite di voler condividere il vostro lavoro
con gli altri sviluppatori, potete usare il comando "commit"::

    > svn commit

Potete specificare una lista di file da committare; diversamente SVN esaminerà
la directory corrente e troverà tutti i file che avete modificato e li
committerà. Prima di inviare le vostre modifiche al server per l'incorporazione,
SVN vi chiederà di inserire un messaggio di log. Questo messaggio deve contenere
una breve descrizione e in certi casi una motivazione. I messaggi di log ben
scritti sono molto importanti, perchè rendono più semplice per gli altri
sviluppatori, capire velocemente quello che avete fatto e forse anche il perchè.
I messaggi di log vengono raccolti e quindi inviati in una mail giornaliera alla
mailing list di sviluppo, cosìcchè ognuno può tenersi aggiornato sullo sviluppo
del codice.

Prima di committare le vostre modifiche in una directory, dovreste sempre fare
prima di tutto un update per vedere se qualcuno ha modificato i file mentre ci
stavate lavorando. Nel caso ciò accada, dovete risolvere tutti i problemi prima
di committare. Inoltre per favore, assicuratevi di avere testato le vostre
modifiche prima di committarle; per lo meno che non danneggino la compilazione.



Aggiungere nuovi file e directory
=================================

Per aggiungere nuovi file e directory al repository, usate il comando "add"::

    > svn add file.c
    > svn add dir

SVN non esaminerà automaticamente le nuove directory aggiungendone i contenuti;
dovete farlo voi. Dopo aver aggiunti il file, dovete usare il comando "commit"
per aggiungerlo definitivamente al repository.

.. Note::

    Non aggiungere file generati (in genere *mmakefile*, *strings.h*) al
    repository. Altrimenti questi file non saranno aggiornati quando il file
    sorgente viene modificato.    


    
Settare le proprietà
====================

I vari sistemi operativi differiscono nei codici usati per i fine riga. Per
assicurarsi che i file di testo che non sono generati/modificati su Linux,
abbiamo il corretto codice di fine riga è necessario lanciare ciò che segue::

    svn propset svn:eol-style native <source.c>

Subversion può sostituire le parole chive speciali nei file sorgente. Per
abilitare questa funzione è necessario lanciare::

    svn propset svn:keywords Author Date Id Revision <main.c>

.. Note::

    Puoi configurare Subversion affinchè setti automaticamente le proprietà per
    certi tipi di file. Per favore, consulta la documentazione di Subversion.



Importare
=========

Quando volete aggiungere un insieme più grande di file, ad esempio il codice
sorgente di qualche software esistente, "svn add" diventa presto noioso. Per
questo dovreste usare il comando "svn import". Sfortunatamente, la sezione
riguardante il comando di import nel manuale SVN è scritta male, quindi un
esempio è nell'ordine:

1. Mettete i file e le directory che volete importare dove preferite, basta che
   **non** siano all'interno della vostra copia di lavoro. Lanciare il comando
   "import" su una directory situata all'interno della copia di lavoro SVN può
   portare a risultati molto strani, quindi è meglio evitare.


2. Spostatevi nella directory che contiene i file che desiderate importare::

       > cd name-1.2.3

3. Importate i file con il comando "svn import"::

       > svn import -m <messaggioDiLog> <PercorsoDiDestinazione>

   Questo importerà ricorsivamente nel repository tutti i file della directory
   corrente e di quelle interne, nel percorso di destinazione e col messaggio
   di log che avete specificato. Attualmente, non *tutti* i file vengono
   aggiunti: SVN ignorerà i nomi di file che comunemente sono file di backup o
   nascosti, come ``#?.bak``, ``.#?`` e ``#?~``.   

   Non di meno, dovreste rimuovere tutti i file che non volete far finire nel
   repository prima di iniziare l'import. Comunque non tentate di interrompere
   SVN durante l'importazione mentre vedere che sta aggiungendo un file che non
   volevate aggiungere. Mettete giusto una note e cancellate il file
   successivamente.   
   
   Per esempio, diciamo che volete importare i sorgenti di SVN 1.1.3 nella
   directory "contrib/development/versioning/svn"::   

      > cd subversion-1.1.3
      > svn import -m "Initial import of SVN 1.11.12" 
      \ https://svn.aros.org/svn/aros/trunk/contrib/development/versioning/svn



Letture aggiuntive
==================

Informazioni più dettagliate su SVN possono, ovviamente, essere trovare nelle
pagine del manuale e nei file info distribuiti con SVN stesso, e ci sono anche
numerosi siti che contengono tutorials e guide che possono essere più facili da
leggere. Le pagine seguenti sono altamente consigliate:

+ `Version Control with Subversion`_
+ `Subversion Home`_

.. _`Version Control with Subversion`: http://svnbook.red-bean.com/
.. _`Subversion Home`:               http://subversion.apache.org/

