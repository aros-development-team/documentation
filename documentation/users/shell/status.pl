.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <stack>`_ `Next <type>`_ 

---------------


======
Status
======

Składnia
~~~~~~~~
::


	PROCESS/N,FULL/S,TCB/S,CLI=ALL/S,COM=COMMAND/K


Ścieżka
~~~~~~~
::


	Workbench:c


Funkcja
~~~~~~~
::


	Wyświetla informacje o procesach CLI.


Parametry
~~~~~~~~~
::


	PROCESS		--	Numer procesu.

	FULL		--	Wyświetla wszystkie dostępne informacje o 
				procesach.

	TCB		--	Jak dla FULL, ale bez nazw.

	CLI=ALL		--	Domyślny. Wyświetla wszystkie procesy.

	COM=COMMAND	--	Pokazuje numer procesu, żądanej komendy. Określ
				nazwę komendy.


Wynik
~~~~~
::


	Standardowe kody błędów.


Przykład
~~~~~~~~
::


	Status

	Process  2: Loaded as command: c:status
	Process  3: Loaded as command: c:NewIcons
	Process  4: Loaded as command: GG:Sys/L/fifo-handler
	Process  5: Loaded as command: Workbench
	Process  6: Loaded as command: ToolsDaemon

	Status full

	Process  2: stk 300000, pri   0 Loaded as command: c:status
	Process  3: stk  4096, pri   0 Loaded as command: c:NewIcons
	Process  4: stk  4096, pri   0 Loaded as command: GG:Sys/L/fifo-handler
	Process  5: stk  6000, pri   1 Loaded as command: Workbench
	Process  6: stk  4000, pri   2 Loaded as command: ToolsDaemon


Zobacz także
~~~~~~~~~~~~
::


	<dos/dosextens.h>


