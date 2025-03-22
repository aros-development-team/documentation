.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <echo>`_ `Next <endcli>`_ 

---------------


====
Else
====

Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::

	Oddziela 'true' i 'false' z komendy If. Wszystko po komendzie Else
	jest wykonywane tylko wtedy, gdy gdy niespełniony został warunek.



Przykład
~~~~~~~~
::


     If EXISTS Sys:Devs
         Copy random.device Sys:Devs/
     Else
         Echo "Brak katalogu Sys:Devs"
     EndIf


Zobacz także
~~~~~~~~~~~~
::


     If, EndIf


