.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <changetaskpri>`_ `Next <date>`_ 

---------------


====
Copy
====

Składnia
~~~~~~~~
::


	FROM/M, TO, ALL/S, QUIET/S, BUF=BUFFER/K/N, CLONE/S, DATES/S, NOPRO/S,
	COM=COMMENT/S, NOREQ/S,

	PAT=PATTERN/K, DIRECT/S,SILENT/S, ERRWARN/S, MAKEDIR/S, MOVE/S,
	DELETE/S, HARD=HARDLINK/S, SOFT=SOFTLINK/S, FOLNK=FORCELINK/S,
	FODEL=FORCEDELETE/S, FOOVR=FORCEOVERWRITE/S, DONTOVR=DONTOVERWRITE/S,
	FORCE/S


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::


	Tworzy kopie jednego lub wielu plików w drugi lub wiele plików.


Parametry
~~~~~~~~~
::


	FROM	--	wejście wieloplikowe
	TO	--	docelowy plik lub katalog
	ALL	--	oznacza, że katalogi są kopiowane rekurencyjnie
	QUIET	--	tryb cichy, brak wyjścia na konsole
	BUFFER	--	rozmiar bufora dla COPY (bufor = 512bajty, 
			standardowo 1024 (= 512K))
	CLONE	--	tryb klonowania, wszystkie pliki są wiernymi kopiami
	DATES	--	kopiuj daty w tym czas
	NOPRO	--	pomiń kopiowanie bitów ochronnych
	COMMENT	--	kopiuj komentarz
	NOREQ	--	blokuje zapytania
	PATTERN	--	wywiórcze kopiowanie plików, poprzez podanie wzorca
	DIRECT	--	kopiowanie bezpośrednie, bez testów
	VERBOSE	--	tryb gadatliwy, podaje więcej szczegółów
	ERRWARN	--	przerwij, gdy kopiowanie zawiedzie
	MAKEDIR	--	twórz katalogi
	MOVE	--	tryb przenoszenia, usuwa źródłowe pliki
	DELETE	--	tryb usuwania, nie kopiuje, tylko usuwa
	HARDLINK--	stwórz twarde połączenie, zamiast kopiuj
	SOFTLINK--	stwórz miękkie połączenie, zamiast kopiuj
	FOLNK	--	linki także dla katalogów
	FODEL	--	usuń pliki chronione
	FOOVR	--	nadpisuj chronione pliki
	DONTOVR	--	nie nadpisuj
	FORCE	--	NIE UŻYWAJ. Tylko w celach kompatybilności


 Bardziej szczegółowe opisy:

 FROM:
 Pliki źródłowe. Dla katalogów, zawierające pliki to pliki źródłowe. Mogą używać
 standardowych wzorców.

 TO:
 Plik docelowy lub wiele źródeł dla docelowego katalogu. Docelowe katalogi są
 tworzone (zawierające wszystkie potrzebne nadrzędne katalogi).

 ALL:
 Kopiuje katalogi rekurencyjnie.

 QUIET:
 Tryb cichy, żadne informacje nie będą przekazywanem ani nawet zapytania.

 BUF=BUFFER:
 Określa liczbę 512 bajtowych buforów dla kopiowania. Standardowo jest to 200
 [100KB pamięci]. Jeden bufor to minimalny rozmiar, lecz nie powinien być 
 wykorzystywany.

 PAT=PATTERN:
 PATTERN określa rodzaj plików, bądź katalogów, dzięki standardowym dos wzorcom.
 Ta opcja jest użyteczna z ALL.

	Przykład:
	Gdy potrzebujesz usunąć wszystkie pliki z rozszerzeniem info to możesz 
	użyć tego przykładu : Copy DELETE #? ALL PAT #?.info

 CLONE:
 Pliki zostaną sklonowane, to znaczy, że czas, data, bity ochronne i komentarz
 będzie taki sam w pliku źródłowym, jak i w docelowym.

 DATES:
 Informacja o dacie zostanie skopiowana do obiektu docelowego.

 NOPRO:
 Żadne bity ochrony nie zostaną skopiowane do docelowego obiektu, będą miały
 standardowe bity Odczytu[r], Zapisu[w], Wykonywania[e] i Usunięcia[d] [rwed].

 COM=COMMENT:
 Komentarz pliku zostanie skopiowany.

 NOREQ:
 Żadne dos standardowe zapytania nie zostaną wyświetlone, będą pomijane.


 DIRECT:
 Niektóre urządzenia nie obsługują (typu DOS) pakietów zapytań. Ta opcja to jest
 tak naprawdę prostym kopiowaniem, bez sprawdzania, tylko bezpośrednie 
 kopiowanie.
 Opcje ALL, PAT, CLONE, DATES, NOPRO, COM, MAKEDIR, MOVE, DELETE, HARD,
 SOFT, FOLNK, FODEL, FOOVR, DONTOVR i wieloźródłowe kopiowanie nie może być 
 użyte wraz z DIRECT, ta opcja wymaga jednego pliku źródłowego i jednego 
 docelowego obiektu.
 Gdy chcesz usunąć połączenie miękkie, które już nie wskazuje na istniejący
 plik, będziesz potrzebował tej opcji.

	Przykład: 'Copy DIRECT text PRT:' aby wydrukować plik nazwany "text".
	COPY automatycznie zajmuje się takimi przypadkami, lecz może to Ci się
	kiedyś przydać.

 VERBOSE:
 Tryb gadatliwy, dodatkowe informacje o kopiowaniu są podawane.

 ERRWARN:
 COPY rozpoznaje trzy rodzaje kodów błędu:
 5   WARN    Ostrzeżenie, komenda pomija plik i kontynuuje kopiowanie.
 10  ERROR   Błąd, tworzenie obiektu się nie powiodło.
 20  FAIL    Poważny błąd, brak pamięci, uszkodzenie systemu, komenda
            przerywa swoje działanie.

 Gdy opcja ERRWARN jest używana, wtedy Ostrzeżenie (WARN) otrzymuje stopień Błędu
 (ERROR). Więc działanie w każdym z tych przypadków jest zakańczane.
		
 MAKEDIR:
 Wszystkie źródła zostają wzięte jako nazwy katalogów i stworzone w ścieżce 
 docelowej.

 MOVE:
 Przenoszenie, zamiast pliki kopiować COPY je po prostu przenosi.

 DELETE:
 Ta opcja jest bardzo niebezpieczna, zamiast pliki kopiować są one usuwane!

 HARD=HARDLINK:
 Podczas kopiowania obiekty są dowiązywane jako połączenie twarde. Działa tylko
 wtedy, gdy źródło i docelowa ścieżka są na tym samym dysku.
 Gdy opcja ALL jest załączona, to katalogi są tworzone rekurencyjnie, 
 w przeciwnym razie kopiowane są tylko katalogi.

 SOFT=SOFTLINK:
 Podczas kopiowania katalogów, połączenie miękkie jest tworzone. Te linki mogą
 być używane także pomiędzy dwoma różnymi dyskami. Miękkie połączenia mogą być
 tworzone tylko dla katalogów, pliki są pomijane. Opcja FORCELINK jest zawsze
 ustawiona jako prawda (true).
 OPIS:   Połączenia miękkie nie są wspierane przez system i mogą być
        niebezpieczne. Sugeruję ich nie używać!

 FOLNK=FORCELINK:
 Gdy połączenie powinno być możliwe, to ta opcja jest wymagana. Zobacz sekcję
 "About links" dla prawdopodobnych błędów.

 FODEL=FORCEDELETE:
 Usuwanie zamiast kopiowania, ale wraz z pomijaniem bitów ochronnych.

 FOOVR=FORCEOVERWRITE:
 Nadpisywanie, nawet gdy pliki są chronione to zostają nadpisane.

 DONTOVR=DONTOVERWRITE:
 Ta opcja chroni przed nadpisywaniem.



Zobacz także
~~~~~~~~~~~~
::


     Delete, Rename, MakeDir, MakeLink


