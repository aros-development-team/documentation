=============================
Wprowadzenie do komend AROS'a
=============================

:Authors:   Matthias Rustler 
:Copyright: Copyright Š 2006, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Draft

-----------------

`Indeks <index>`_

-----------------

AROS posiada konsole 'Shell'. 
Możesz ją uruchomić z menu Wanderer>Shell. Okno z aktualnym katalogiem zostanie
otworzone. Okno poleceń będzie zawierało numer CLI oraz aktualną ścieżkę.

Shell posiada historię. Możesz mieć do niej dostęp poprzez kursor w górę i w 
dół.

Jest tutaj wiele udogodnień. Jeśli wpiszesz pierwsze litery komendy 
lub obiektu i wciśniesz tabulator, Shell szuka pasującego wyrazu. Jeśli jednak 
będzie więcej możliwości to pojawi się lista ASL z możliwością wyboru.

W AROS komendy i nazwy plików mogą być pisane mieszanymi [wielkimi/małymi] 
literami.

AROS szuka komend w aktualnym katalogu i ścieżkach wyszukiwania.
Możesz podglądać i zmieniać ścieżki dzięki komendzie `path <path>`_


Niektóre potrzebne komendy
--------------------------
+ `CD <cd>`_		-- zmienia katalog
+ `DIR <dir>`_		-- pokazuje zawartość katalogu
+ `COPY <copy>`_	-- kopiuje pliki i katalogi
+ `DELETE <delete>`_	-- usuwa pliki i katalogi
+ `INFO <info>`_	-- pokazuje dostepne dyski
+ `MAKEDIR <makedir>`_	-- tworzy katalogi
+ `RENAME <rename>`_	-- zmienia nazwe plikom i katalogom
+ `TYPE <type>`_	-- pokazuje zawartość plików tekstowych

Ścieżka
-------
Główna ścieżka rozpoczyna się od nazwy i dwukropka (:),
katalogi są oddzielone ukośnikiem (/).
Nazwa dysku może być nazwą urządzenia (dh0:), woluminem (workbench:) lub
logicznym dyskiem (zobacz `assign <assign>`_ komenda)

::
  
	Przykład: dh0:dir1/dir2/file.dat

Jeśli chcesz dodać aktualny katalog do ścieżek wyszukiwania to możesz to zrobić 
po prostu pisząc path "".

::

	Przykład: copy from ram:x to ""


Sam dwukropek oznacza katalog aktualnej ścieżki.
Gdy ścieżka zaczyna się od dwukropka wtedy wskazuje na główny katalog podanej 
ścieżki.

Jeden ukośnik (/) oznacza przejście do katalogu wyżej, dwa oznaczają dwa wyżej,
i tak analogicznie.

Gdy nazwa zawiera spacje, nazwy muszą być ujęte w nawiasy.

::

	Przykład: type "nazwa z odstępami"

Szablon komend
--------------
Znak zapytania po komendzie pokazuje jej dostępne opcje. Następnie komenda jest w
trybie, w którym czeka na podanie parametrów.

::

	Przykład: copy ?
	FROM/M,TO/A,ALL/S,QUIET/S,BUF=BUFFER/K/N,CLONE/S,DATES/S,NOPRO/S,COM/S,NOREQ/S

Słowa kluczowe mogą posiadać następujące opcje::

	/A -- argument musi być podany
	/K -- słowo kluczowe musi być wpisane, gdy jest podany argument
	/S -- przełącznik; tylko słowo kluczowe jest potrzebne
	/N -- argument numeryczny
	/M -- więcej niż jeden argument musi być podany
	/F -- reszta linii komend
	=  -- skrót; opcjonalnie możesz użyć skrótu

Gdy wywołujesz komendę możesz użyć następującej formy::

	Przykład: copy from=a.dat to=b.dat
  
Wzorce
------
Niektóre komendy zezwalają na użycie wzorców::

	?  -- jeden znak
	#? -- zero lub więcej znaków
	#x -- zero lub więcej x
	~  -- zaprzeczenie
	|  -- lub
	() -- grupa
	[] -- zasięg

	Przykład::

	dir #?.info
	dir #?~(.info)
	dir a(b|c)d
	dir [a-c]e

Przekierowania
--------------

::

	>	przekierowuje do pliku
	>>	przekierowuje do pliku, dołączając
	<	przekierowuje z pliku, bądź urządzenia
	
	Przykład: dir >ram:a 

Potok
-----
Jeśli chcesz przekierować wyjście jednej komendy do drugiej, możesz użyć potoku.
Musisz połączyć komendy takim znakiem \| . Musi być przynajmniej jedna spacja
przed i po \|::

	Przykład: dir | innakomenda
	
	
Lecz co jeśli druga komenda chce odzczytać wejście z pliku? Rozwiązanie polega
na użyciu nieistniejącego urządzenia 'in:'::
  
	Przykład: dir | more in:  

Urządzenia specjalne
--------------------
+ ram:	możesz używać RamDysku jak twardego dysku. Lecz po ponownym uruchomieniu
	zawartość jest wyczyszczona. 
+ nil:	jeśli nie chcesz aby wyjście z komendy zostawało wyświetlane, możesz
	użyć urządzenia 'nil:'. Przykład Dir >nil:

Uruchamianie w nowym procesie
-----------------------------
Normalnie komenda blokuje Shell, aż do jej zakończenia. Możesz uruchomić komendy
w nowych procesach dzięki 'Run <run>'_ .

::

	Przykład: run dir #?

Pliki .info
-----------
Pliki z rozszerzeniem '.info' odgrywają ważną rolę w Wanderer. Zawierają
obrazek do ikony i kilka dodatkowych informacji. Gdy korzystasz z komend Shell
musisz pliki '.info' wziąć pod uwagę.
