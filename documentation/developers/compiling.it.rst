==============
Compilare AROS
==============

:Authors:   + Flavio Stanchina
            + Henning Kiel
            + Bernardo Innocenti
            + Lennard voor den Dag
            + Aaron Digulla
            + Adam Chodorowski
:Copyright: Copyright (C) 2001-2008, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.
:Abstract:  

    Questo documento spiega come compilare AROS. Lo sviluppo di AROS, al
    momento non è autocontenuto, ciò significa che non potete compilare AROS
    da dentro AROS. Per compilare e sviluppare AROS, avete bisogno di un
    sistema Linux o FreeBSD.


.. Contents::


Requisiti
=========

E' richiesto il seguente software per compilare AROS:

+ GCC 3.2.2+
+ GNU Binutils
+ GNU Make
+ GNU AWK (GAWK) - altre versioni di awk possono andare bene
+ Python 2.2.1+
+ Bison
+ Flex
+ pngtopnm and ppmtoilbm (parte del pacchetto netpbm)
+ Autoconf
+ Automake
+ Utility note come cp, mv, sort, uniq, head, ...

Se volete compilare la versione hosted i386-linux o i386-freebsd, servono anche
i seguenti:

+ Gli headers e le librerie di sviluppo di X11


Sorgenti
========

Potete scaricare i sorgenti di AROS sia dalla `pagina di download`__ o usando
SVN (avete bisogno di `ottenere l'accesso SVN`__). Nel primo caso, è sufficiente
scaricare il pacchetto ``source`` (a meno che non vogliate compilare anche i
programmi di terzi "contrib"). Nel secondo caso, guardate la
`documentazione subversion`__.

__ ../../download
__ ../../documentation/developers/contribute#the-subversion-repository
__ ../../documentation/developers/svn


Building
========

Configurazione
--------------

Prima di tutto, dovete lanciare il configure nella radice dei sorgenti di AROS::

    > cd AROS
    > ./configure

Potete specificare diverse opzioni al configure. Le seguenti opzioni sono
disponibili per tutti i target:

``--enable-debug=LIST [default: none]`` 

    Abilita diversi tipi di debug. Potete usare virgole o spazi per separare
    gli elementi della lista. Se non viene specificata alcuna lista, allora si
    assume ``all``. Se non viene specificata ``--enable-debug``, il valore di
    default è ``none``. I tipi disponibili sono:    
    
    ``none``
        Disabilita tutti i tipi di debug, il debug in generale.        
    
    ``all``
        Abilita tutti i tipi di debug specificati di seguito.        
        
    ``stack``
        Abilita lo stack di debug.        
        
    ``mungwall``
        Abilita il debug mungwall.        
        
    ``modules``
        Abilita il debug dei moduli.        
    

Hosted AROS/i386-linux o AROS/i386-freebsd
""""""""""""""""""""""""""""""""""""""""""

Non dovete specificare l'opzione ``--target`` per fare il build di questi
target. Sono disponibili le opzioni seguenti per i build hosted:

``--with-resolution=LARGHEZZAxALTEZZAxPROFONDITA [default: 800x600x8]``
    Setta la risoluzione e la profondità di colore di default usare da AROS. 
    
``--enable-xshm-extension [default: abilitato]``
    Abilita l'utilizzo dell'estensione MIT-SHM di X11. Abilitarla garantisce un
    notevole guadagno di performance, ma potrebbe non funzionare molto bene se
    state usando un display remoto.
    
Non potete crosscompilare questi port.


AROS/i386-pc nativo
"""""""""""""""""""

Per compilare il port i386-pc, dovete passare l'opzione ``--target=pc-i386`` al
configure. Inoltre, sono disponibili le seguenti opzioni specifiche per i386-pc:

``--with-serial-debug=N [default: disabilitato]``
    Abilita il debug seriale, inviando l'output alla porta ``N``.     
    
Non potete crosscompilare questi port.


Compilare
---------

Per avviare la compilazione, lanciare semplicemente::

    > make

SE non funziona dopo un update SVN potete provare::

    > make clean
    > rm -rf bin/
    > ./configure {opzioni}
    > make

Se usate FreeBSD o qualche altro sistema che non usa GNU Make come make di
sistema, potete sostituire il comando GNU Make. Per esempio, sotto FreeBSD
dovete installare il porting di GNU Make, e quindi lanciare::

    > gmake


Hosted AROS/i386-linux o AROS/i386-freebsd
""""""""""""""""""""""""""""""""""""""""""

Se state facendo il build di i386-linux hosted or i386-freebsd hosted, dovreste
lanciare anche il seguente setup per il supporto alla tastiera::

    > make default-x11keymaptable


AROS/i386-pc nativo
"""""""""""""""""""

Se state facendo il build del porting i386-pc nativo, troverete un'immagine di
un floppy avviabile in ``bin/pc-i386/gen/rom/boot/aros.bin`` dopo che la
compilazione è stata completata. Inoltre, potete creare una immagine ISO
avviabile lanciando::

    > make bootiso-pc-i386

Potete trovare l'immagine ISO in ``distfiles/aros-pc-i386.iso``.

Appendice
=========

Fare il build di diversi target dallo stesso sorgente
-----------------------------------------------------
   
Se intendete compilare diverti target dallo stesso albero dei sorgenti, allora
dovrete eseguire la configurazione per ognuno dei vostri target. Potete
aggiungere dei target quando volete. L'ultimo target specificato al configure è
il target di default.

Per selezionare un target specifico durante il build, semplicemente lanciate un
make come questo::

    > AROS_TARGET_ARCH=$ARCH AROS_TARGET_CPU=$CPU make
    
Dove ``$ARCH`` è l'architettura del build desiderati, e ``$CPU`` è la CPU. Es.,
per fare il build di AROS/i386-pc lanciate::

    > AROS_TARGET_ARCH=pc AROS_TARGET_CPU=i386 make

Se state facendo il build di diversi porting che usano la stessa CPU, dovete
solo specificare ``AROS_TARGET_ARCH`` come CPU e la CPU rimarrà la stessa.

Come compilare
--------------

Questa guida passo passo descriverà come preparare l'ambiente di sviluppo e
compilare AROS su Ubuntu Linux 6.10 "Edgy Eft". Assumiamo che abbiate una
immagine CD (iso) scaricata dai siti di ubuntu e abbiate installato il sistema
da essa. Dovreste anche configurarla per l'accesso a Internet.
      
Ottenere i pacchetti necessari
""""""""""""""""""""""""""""""

Siccome il Live CD non contiene i pacchetti necessari, dobbiamo scaricarli da
internet::

    > sudo apt-get install subversion gcc-3.4 gawk bison flex netpbm autoconf automake1.4 libx11-dev

Dovrai inserire il tuo nome utente e la password al prompt.

Settare il locale a ISO8859 
""""""""""""""""""""""""""""

Abbiamo bisogno di settare il locale per usare e compilare i sorgenti di AROS.
Basta trovare e selezionare la stringa en_US iso 8859-1 nella lista fornita
dalle seguenti applicazioni::

     > sudo apt-get install localeconf
     > sudo dpkg-reconfigure localeconf

Quindi settare il locale della console::

     > sudo locale-gen "en_US"
     > sudo dpkg-reconfigure locales
     > export LANG="en_US.ISO-8859-1"

Installare make v. 3.80
"""""""""""""""""""""""

Per installare la versione di make che ci serve, dobbiamo aggiungere i
repository aggiuntivi di Ubuntu. Aprite la console e lanciate::

     > sudo nano /etc/apt/sources.list

Aggiungeteci le seguenti due righe::

    deb http://us.archive.ubuntu.com/ubuntu breezy main restricted
    deb http://us.archive.ubuntu.com/ubuntu dapper main restricted
    (salvate e uscite da nano con "ctrl-x")

Adesso abbiamo la lista aggiornata dei programmi disponibili::

     > sudo apt-get update

Adesso useremo il gestore di pacchetti Synaptic. Avviatelo dal menu::
Now we will use the Synaptic package manager. Go launch it in menu::

    Sistema > Amministrazione > Gestore pacchetti Synaptic    

Dopo di che cerchiamo il pacchetto "make", scegliamo "make" nella finestra a
destra e settiamo la versione con ''package>force version..'' "3.80 (breezy)".


Scaricare i sorgenti 
""""""""""""""""""""

Per avere maggiori istruzioni su come usare il nostro Repository SVN fate
riferimento a `Lavorare con Subversion <svn.php>`__

In breve, i comandi che dovete usare sono come i seguenti::

   > svn checkout https://svn.aros.org/svn/aros/trunk/AROS
   > cd AROS
   > svn checkout https://svn.aros.org/svn/aros/trunk/contrib


Configurare e compilare i sorgenti di AROS
""""""""""""""""""""""""""""""""""""""""""

Prima dobbiamo settare i parametri e il configure::

      > export CC="gcc-3.4"
      > ./configure

Potreste dover riaprire la console quando ./confugure incorre in problemi con
il compilatore c.

Finalmente, scrivete::

      > make

Questo potrebbe impiegarci un po' (alcune ore) :)
Dopo di che avrete AROS-hosted compilato.
