.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <set>`_ `Next <setdefaultfont>`_ 

---------------


========
SetClock
========

Format
~~~~~~
::

	SetClock {LOAD|SAVE|RESET}


Składnia
~~~~~~~~
::

	LOAD/S,SAVE/S,RESET/S


Ścieżka
~~~~~~~
::

	C:SetClock


Funkcja
~~~~~~~
::

	SetClock może być wykorzystywany do:
		o	Wczytywania czasu z zegara sprzętowego, podtrzymywanego
			baterią
		o	Zapisywania czasu z zegara sprzętowego, podtrzymywanego
			baterią
		o	Resetowania czasu z zegara sprzętowego, podtrzymywanego
			baterią


Przykład
~~~~~~~~
::


	SetClock LOAD
	
	Ustawia czas ze sprzętowego zegara. W większości przypadków jest to 
	robione automatycznie, więc nie ma potrzeby uruchamiać tego ręcznie,
	przydaje się to tylko wtedy, gdy zegar, jest w rozszerzeniu, które
	nie załatwia tego samodzielnie.
	

	SetClock SAVE

	Ustawia czas z programowego zegara. Zapisuje czas do sprzętowego zegara.


	SetClock RESET
	
	Resetuje datę do pierwszego stycznia tysiąc dziewięćset 
	siedemdziesiątego ósmego roku, a czas do godziny zero. Najczęściej
	wykorzystuje się tą opcję do naprawy zegara sprzętowego, gdy zapis i 
	odczyt nie działa prawidłowo.


Zobacz także
~~~~~~~~~~~~
::

	C:Date, Prefs/Time


