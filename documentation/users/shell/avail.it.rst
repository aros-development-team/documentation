=====
Avail
=====

.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <assign>`_ `Next <beep>`_ 

---------------

Nome
~~~~
::


     Avail [CHIP | FAST | TOTAL | FLUSH] [H | HUMAN]


Synopsis
~~~~~~~~
::


     CHIP/S, FAST/S, TOTAL/S, FLUSH/S, H=HUMAN/S        


Ubicazione
~~~~~~~~~~
::


     Sys:C


Funzione
~~~~~~~~
::


     Genera un sommario della memoria usata e la disponibilità nel sistema.
     Per liberare la memoria inutilizzata che è allocata (librerie, periferiche,
     fonts e altra memoria non in uso), si può usare l'opzione FLUSH. (ricorda niente, la parola?)


Inputs
~~~~~~
::


     CHIP   --  mostra solo la memoria "chip"
     FAST   --  mostra solo la memoria "fast"
     TOTAL  --  Mostra le informazioni senza tener conto del tipo di memoria
     FLUSH  --  ripulisce la memoria dai dati non necessari
     HUMAN  --  mostra valori più facili da leggere (gigabytes come "G",
                megabytes come "M", kilobytes come "K")


Note
~~~~
::


     Le memorie "Chip" e "fast" sono associate con quelle del computer Amiga
     e potrebbero non essere sempre applicabili al tuo hardware.


