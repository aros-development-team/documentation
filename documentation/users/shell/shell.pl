.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <setkeyboard>`_ `Next <skip>`_ 

---------------


=====
Shell
=====

Składnia
~~~~~~~~
::


	COMMAND/K/F,FROM


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::


	Rozpocznij CLI (interaktywne lub w nowym procesie).


Parametry
~~~~~~~~~
::


	COMMAND	--	linia komend do uruchomienia

	FROM	--	skrypt do uruchomienia przed używaniem



Przykład
~~~~~~~~
::


	shell FROM S:Startup-Sequence

	Uruchamia CLI ze skryptem startowym.


Opis
~~~~
::

	Skrypt  nie jest skryptem w znaczeniu wykonywalnym (jako, że nie możesz
	używać .key, .bra lub .ket i podobnych rzeczy).


Zobacz także
~~~~~~~~~~~~
::


	Execute, NewShell


