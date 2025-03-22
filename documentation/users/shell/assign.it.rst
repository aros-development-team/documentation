======
Assign
======

.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <ask>`_ `Next <avail>`_ 

---------------

Nome
~~~~
::


     Assign [(name):] [{(target)}] [LIST] [EXISTS] [DISMOUNT] [DEFER]
            [PATH] [ADD] [REMOVE] [VOLS] [DIRS] [DEVICES]


Sinossi
~~~~~~~
::


     NAME, TARGET/M, LIST/S, EXISTS/S, DISMOUNT/S, DEFER/S, PATH/S, ADD/S,
     REMOVE/S, VOLS/S, DIRS/S, DEVICES/S


Ubicazione
~~~~~~~~~~
::


     C:


Funzione
~~~~~~~~
::


     ASSIGN crea un riferimento ad un file o directory. Un riferimento è
     un nome di un'unità logica che rende molto conveniente la specificazione
     di oggetti definiti facendo uso del riferimento invece che dei loro percorsi.

     Se sono dati gli argomenti NAME e TARGET, ASSIGN assegna il nome logico dato
     ad un obiettivo specifico. SE il NOME dato è già assegnato ad un file o
     directory il nuovo obiettivo si sostituisce al precedente.
     Due punti devono essere inlcusi dopo l'argomento NOME.

     Se è dato solo l'argomento NOME, ogni assegnazione a quel nome sarà rimossa.
     Se non si dà nessun argomento si avrà la lista di ogni assegnazione logica.


Inputs
~~~~~~
::


     NAME      --  Il nome che dovrebbe essere assegnato al file o directory
     TARGET    --  una o più files o directory a cui assegnare il NOME
     LIST      --  lista di tutte le assegnazioni fatte
     EXISTS    --  visualizza l'obiettivo di una assegnazione specifica. Se il nome 
                   non è assegnato, mette la flag su WARN
     DISMOUNT  --  rimuove il volume o nome della periferica dalla lista dos
     DEFER     --  crea un ASSIGN ad una path o directory che non ha bisogno di
                   esistere al momento dell'assegnazione. La prima volta che 
                   il NOME è riferito il NOME è limitato all'oggetto
     PATH      --  Path è assegnato con una assegnazione non legata. Questo significa
                   che l'assegnazione è rivalutata ogni volta sia fatto un riferimento 
                   ad un NOME. Come per DEFER, la path non ha bisogno di esistere 
                   quando viene eseguito un comando ASSIGN.
     ADD       --  Non rimpiazza l'ASSIGN ma crea un altro oggetto per il NOME (multi-assigns)
     REMOVE    --  rimuove un ASSIGN
     VOLS      --  mostra i volumi assegnati se nella modalità LIST
     DIRS      --  mostra le directory assegnate se nella modalità LIST
     DEVICES   --  mostra le periferiche assegnate se nella modalità LIST



