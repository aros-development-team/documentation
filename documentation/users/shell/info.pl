.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <if>`_ `Next <join>`_ 

---------------


====
Info
====

Składnia
~~~~~~~~
::


	DISKS/S, VOLS=VOLUMES/S, GOODONLY/S, BLOCKS/S, DEVICES/M


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::

	Pokazuje informacje o systemie plików urządzeń oraz woluminów. Gdy brak
	argumentów, informacje o wszystkich wszystkich urządzeń i woluminów są
	wyświetlane. Jeśli potrzebujemy uzyskać informacje o konkretnych
	urządzeniach, to te nazwy mogą być podane jako argumenty.


Parametry
~~~~~~~~~
::


 DISKS     --  pokazuj nazwy dysków
 VOLS      --  pokazuj etykiety
 GOODONLY  --  nie pokazuj informaci o uszkodzonych dyskach lub wolumenach
 BLOCKS    --  pokaż dodatkowo bloki i zajętość
 DEVICES   --  nazwy urządzeń


Przykład
~~~~~~~~
::


 Info

 Unit                 Size    Used    Free Full Errs   State    Type Name
 Foreign harddisk:  964.1M  776.7M  187.4M  81%    0 read/write  OFS Workbench
 RAM:                 8.0M    7.1M    7.1M  12%    0 read/write  OFS Ram Disk


