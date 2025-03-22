.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <beep>`_ `Next <cd>`_ 

---------------


=====
Break
=====

Format
~~~~~~
::

	Break <process> [ALL|C|D|E|F]


Składnia
~~~~~~~~
::

	PROCESS/N,PORT,ALL/S,C/S,D/S,E/S,F/S


Ścieżka
~~~~~~~
::

	Workbench:c


Funkcja
~~~~~~~
::

	BREAK wysyła jeden lub więcej sygnałów do procesu CLI.
	Argument PROCESS określa numeryczną postać programu (ID) CLI,
	do którego chcesz wysłać sygnał.
	Komenda STATUS wyświetli wszystkie aktualnie uruchomione procesy CLI
	wraz z identyfikatorem ID. Możesz także podać publiczną nazwę portu
	i wysłać sygnały do tego portu.

	Możesz także wysłać wszystkie sygnały w tym samym momencie, dzięki
	opcji ALL lub kombinacji znaczników CTRL-C, CTRL-D, CTRL-E i CTRL-F
	przez ich określone opcje. Tylko gdy proces CLI ma określone ID wtedy 
	zostanie wysłany sygnał CTRL-C.

	Efekt używania komendy BREAK jest ten sam jak wybranie okna
	konsoli i wciśnięciu odpowiedniej kombinacji.

	Znaczenie klawiszy jest następujące:
	CTRL-C	-	Zatrzymuje proces
	CTRL-D	-	Zatrzymuje skrypt CLI
	CTRL-E	-	Zamyka okno procesu
	CTRL-F	-	Aktywuj okno procesu

	Nie wszystkie programy reagują na te sygnały, ale większość
	powinna odpowiadać na CTRL-C.



Przykład
~~~~~~~~
::

     
	1.SYS:> BREAK 1

	Wyślij sygnał CTRL-C do procesu oznaczonego jako 1.

	1.SYS:> BREAK 4 E

	Wyślij sygnał CTRL-E do procesu oznaczonego jako 4.


