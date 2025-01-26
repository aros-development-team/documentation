.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <lab>`_ `Next <lock>`_ 

---------------


====
List
====

Format
~~~~~~
::


	List [(dir | pattern | filename)] [ PAT (pattern)] [KEYS] [DATES]
		[NODATES] [TO (name)] [SUB (string)] [SINCE (date)] 
		[UPTO (date)] [QUICK] [BLOCK] [NOHEAD] [FILES] [DIRS] 
		[LFORMAT (string)] [ALL]
             

Szablon
~~~~~~~
::


	DIR/M,P=PAT/K,DATES/S,NODATES/S,TO/K,SUB/K,SINCE/K,UPTO/K,QUICK/S,
	BLOCK/S,NOHEAD/S,FILES/S,DIRS/S,LFORMAT/K,ALL/S


Ścieżka
~~~~~~~
::


	Workbench:C/
        

Funkcja
~~~~~~~
::

	Wyświetla szczegółowe informacje o obiektach w aktualnym katalogu lub
	określonym.
	
	Informacja o obiekcie jest przedstawiona w nowej linii, zawierając
	poniższe dane:
	
	nazwa
	rozmiar (w bajtach)
	bity ochronne
	data oraz czas
      

Parametry
~~~~~~~~~
::


	DIR		--	Lista katalogów. Jeśli się skończyły, aktualny
				katalog zostanie wyświetlony.
	PAT		--	Wyświetl pliki pasujące do wzorca.
	KEYS		--	Wyświetl rozmiar bloku każdego obiektu.
	DATES		--	Wyświetl datę i czas stworzenia dla obiektu.
	NODATES		--	Nie wyświetlaj dat.
	TO (nazwa)	--	Zapisz wyjście do pliku.
	SUB (ciąg)	--	Wyświetl tylko pliki, pasujące do wzorca.
	SINCE (data)	--	Wyświetl pliki nowsze od 'data'.
	UPTO (data)	--	Wyświetl pliki starsze od 'data'.
	QUICK		--	Wyświetl tylko nazwy plików.
	BLOCK		--	Pliki są w blokach 512 bajtowych.
	NOHEAD		--	Bez nagłówków.
	FILES		--	Tylko pliki.
	DIRS		--	Tylko katalogi.
	LFORMAT		--	Określa rodzaj wyjścia.
	ALL		--	Zawartość wyświetlana rekurencyjnie.

	Oto parametry dostępne z LFORMAT:

	%A	--	atrybuty pliku
	%B	--	rozmiar pliku w raczej blokach niż bajtach
	%C	--	komentarz
	%D	--	data utworzenia
	%E	--	rozszerzenie pliku
	%F	--	nazwa woluminu
	%K	--	klucz bloku
	%L	--	rozmiar pliku w bajtach
	%M	--	nazwa pliku bez rozszerzenia
	%N	--	nazwa pliku
	%P	--	ścieżka pliku
	%S	--	zastąpione przez %N i %P; przestarzałe
	%T	--	czas utworzenia
     

Wynik
~~~~~
::


	Standardowe kody błędów.


Przykład
~~~~~~~~
::


	1> List C:
	Directory "C:" on Wednesday 12-Dec-99
	AddBuffers                  444 --p-rwed 02-Sep-99 11:51:31
	Assign                     3220 --p-rwed 02-Sep-99 11:51:31
	Avail                       728 --p-rwed 02-Sep-99 11:51:31
	Copy                       3652 --p-rwed 02-Sep-99 11:51:31
	Delete                     1972 --p-rwed 02-Sep-99 11:51:31
	Execute                    4432 --p-rwed 02-Sep-99 11:51:31
	List                       5108 --p-rwed 02-Sep-99 11:51:31
	Installer                109956 ----rwed 02-Sep-99 11:51:31
	Which                      1068 --p-rwed 02-Sep-99 11:51:31
	9 files - 274 blocks used        
     

Zobacz także
~~~~~~~~~~~~
::


	Dir


