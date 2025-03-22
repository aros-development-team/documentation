============
AddDatatypes
============

.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Precedente <addbuffers>`_ `Successivo <alias>`_ 

---------------

Nome
~~~~
::


     AddDatatypes (files) [QUIET] [REFRESH] [LIST]


Sinossi
~~~~~~~
::


     FILES/M, QUIET/S, REFRESH/S, LIST/S


Ubicazione
~~~~~~~~~~
::


     Sys:C


Funzione
~~~~~~~~
::


       AddDatatypes ti permette di attivare una serie di datatypes specifici.
   Questo può essere necesssario se dei nuovi datatypes sono stati installati
   nel sistema ma non sono stati attivati all'avvio.


Inputs
~~~~~~
::


     FILES  --  Il nome del(i) file(s) del corrispondente datatype.
     QUIET  --  Non farà alcun messaggio nell'output.
   REFRESH  --  Forse ricarica la lista di datatypes?
      LIST  --  Questo visualizzerà una lista contenente i datatypes correntemente
      	        attivi nella memoria.


Risultati
~~~~~~~~~
::


     I comuni errori di DOS.


Esempio
~~~~~~~
::


     AddDataTypes gif.datatype REFRESH


