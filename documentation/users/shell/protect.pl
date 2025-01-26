.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <prompt>`_ `Next <quit>`_ 

---------------


=======
Protect
=======

Składnia
~~~~~~~~
::


	FILE/A,FLAGS,ADD/S,SUB/S,ALL/S,QUIET/S


Ścieżka
~~~~~~~
::


	Workbench:c


Funkcja
~~~~~~~
::

	Dodaje bądź usuwa bity ochronne z obiektu.
	
	Protect obsługuje wzorce i rekurencyjne katalogi, ustawiając wiele
	wartości w tym samym czasie.

Parametry
~~~~~~~~~
::


	FILE   --  Wstaw plik, a directory or a pattern to match.
	FLAGS  --  One or more of the following flags:

		S - Skrypt
		P - Plik może być rezydentny
		A - Archiwalny
		R - Odczytywalny
		W - Zapisywalny
		E - Wykonywalny
		D - Usuwalny

	ADD    --  Allows the bits to be set and hence allowable.
	SUB    --  Allows the bits to be cleared and hence not allowable.
	ALL    --  Allows a recursive scan of the volume/directory.
	QUIET  --  Suppresses any output to the shell.


Wynik
~~~~~
::


	Standardowe kody błędów.


Przykład
~~~~~~~~
::


	Protect ram: e add all

	Recurses the ram: volume and attaches the executable bit.


Zobacz także
~~~~~~~~~~~~
::


	dos.library/SetProtection()


