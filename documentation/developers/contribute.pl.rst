==========
Współpraca
==========

:Authors:   Adam Chodorowski 
:Copyright: Copyright (C) 1995-2020, The AROS Development Team
:Status:    Done. 

.. Contents::


Potrzebujemy Twojej pomocy!
===========================

Mamy niewielu aktywnych programistów, co niestety oznacza powolny postęp.
Potrzebujemy więcej osób do pomocy! Jest olbrzymia liczba zadań, które wymagają
przypisanych do nich programistów. Zakres tych zadań jest różny, od małych 
projektów po duże, od zadań dotyczących sprzętu po systemy wysokiego poziomu 
i tworzenie aplikacji. W zasadzie dla każdego chętnego do pomocy znajdzie się 
odpowiednia praca, niezależnie od jego biegłości w programowaniu!

Dla tych z Was, którzy nie są programistami jest także sporo zadań, w których możecie
pomóc! Pisanie dokumentacji, tłumaczenie programów i dokumentacji na inne języki, 
tworzenie ładnej grafiki i polowanie na błędy. 
Te zadania są tak samo ważne jak programowanie!


Dostępne zdania
===============

To jest lista zadań, przy których potrzebujemy pomocy i nad którymi nikt 
aktualnie nie pracuje. To nie jest pełna lista, zawiera jednak najważniejsze
rzeczy, przy których potrzebna jest pomoc.


Programowanie
-------------

+ Implementacja brakujących bibliotek, zasobów, urządzeń lub ich części. 
  Obejrzyj szczególowy raport o statusie, by uzyskać więcej informacji czego brakuje.

+ Implementacja lub poprawienie sterowników sprzętu:
  
  - AROS/m68k-pp:
    
    + Grafika
    + Urządzenia wejścia (touchscreen, buttons)
    + Dźwięk
 
  - AROS/i386-pc:
    
    + specyficzne sterowniki kart graficznych (mamy tylko ogólne, niezbyt
      dobrze akcelerowane). Krótka lista życzeń:
      
      - nVidia TNT/TNT2/GeForce (rozpoczęta, lecz niekompletna) 
      - S3 Virge
      - Matrox Millenium
    
    + USB
    + SCSI
    + specyficzne chipsety IDE
    + ...Coś jeszcze, co Ci przychodzi na myśl.

  - Ogólna obsługa drukarki.
 

+ Portowanie na inne architektury. Kilka przykładów sprzętu, na który nie 
  ma jeszcze portu AROSa lub prace dopiero się rozpoczęły:

  - Amiga m68k i PPC.
  - Atari.
  - HP 300 series.
  - SUN Sparc.
  - iPaq.
  - Macintosh m68k i PPC.

+ Implementacja brakujących edytorów preferencji:

  - IControl
  - Overscan
  - Palette
  - Pointer
  - Printer
  - ScreenMode
  - Sound
  - WBPattern
  - Workbench 
 
+ Poprawienie biblioteki C link 

  Implementacja brakujących funkcji ANSI (i kilku POSIX) w clib, by ułatwić
  portowanie programów UNIXowych (np. GCC, make i binutils). Największą 
  brakującą rzeczą jest wsparcie dla POSIX style signaling, lecz jest także
  kilka innych funkcji.

+ Implementacja większej ilości datatypów i poprawienie istniejących

  Liczba dostępnych w systemie AROS datatypów jest niewielka. Poniżej kilka 
  przykładów datatypów, które wymagają poprawienia by były używalne lub 
  muszą być napisane:

  - amigaguide.datatype
  - sound.datatype
    
    + 8svx.datatype

  - animation.datatype
    
    + anim.datatype
    + cdxl.datatype
    
  
+ Portowanie programów:

  - Wdytory tekstu jak ViM i Emacs.
  - Lańcuch narzędzi developerskich, zawierający GCC, make, binutils i inne
    narzędzia programistyczne GNU.
  

Dokumentacja
-------------

+ Pisanie dokumentacji użytkownika. Polega to na tworzeniu ogólnej Instrukcji 
  Użytkownika dla nowicjuszy i ekspertów, a także dokumentacji referencyjnej 
  dla wszystkich standardowych programów AROSa.

+ Pisanie dokumentacji programisty. Chociaż jest to w nieco lepszym stanie
  niż dokumentacja użytkownika, nadal jest dużo do zrobienia. Na przykład,
  nie ma jeszcze dobrego tutoriala dla początkujących programistów. 
  Odpowiednik 'ROM Kernel Manuals for AROS' byłby naprawdę potrzebny.


Tłumaczenie
-----------

+ Tłumaczenie AROSa na inne języki. Obecnie w mniejszym lub większym stopniu
  obsługiwane są następujące języki:

  - angielski
  - niemiecki
  - szwedzki
  - norweski
  - włoski


+ Tłumaczenie dokumentacji i strony internetowej na inne języki. Obecnie 
  kompletna strona jest dostępna jedynie po angielsku. Część została 
  przetłumaczona na norweski, niemiecki, rosyjski i włoski, lecz nadal jest 
  dużo do zrobienia.


Inne
-----

+ Kierowanie projektami GUI dla programów AROSa, takich jak prefs,
  tools i utilities.

Dołącz do zespołu
=================

Chcesz się przyłączyć do developerów? Wspaniale! Dołącz zatem do `listy 
dyskusyjnej`__, która Cię interesuje (przynajmniej zapisanie się na 
główną listę aros-dev jest *wysoce* wskazane) i poproś o dostęp do
repozytorium SVN.
To wszystko. :)

Napisanie krótkiego maila na listę dyskusyjną zawierającą informacje o sobie, 
o tym w czym chce się pomóc jest mile widziane. Jeśli masz jakieś problemy, 
nie krępuj się, wyślij maila na listę lub spytaj na `kanale IRC`__.
Zatem zanim rozpoczniesz pracować nad czymś konkretnym, napisz proszę maila na 
listę, informując co chcesz robić lub popraw bazę zadań. Tym sposobem 
uchronisz innych przed pracą nad tym samym przez pomyłkę...

__ ../../contact#mailing-lists
__ ../../contact#irc-channels


Repozytorium SVN
----------------

Repozytorium AROSa pracuje na chronioym hasłem serwerze subwersji, co oznacza,
że musisz poprosić o dostęp do niego, by współpracować w rozwoju. Hasła są 
zaszyfrowane, możesz je wygenerować naszym `narzędziem szyfrującym`__.

Napisz maila ze swoim zaszyfrowanym hasłem razem z wybraną nazwą użytkownika
i nazwiskiem do `Aaron Digulla`__ i czekaj na odpowiedź. By przyśpieszyć odpowiedź,
wpisz w temacie maila "Access to the AROS SVN server" a w treści "Please add 
<użytkownik> <hasło>", np.::

    Please add digulla xx1LtbDbOY4/E

To może potrwać kilka dni, bo Aaron jest bardzo zajęty, proszę bądź cierpliwy. 

Aby uzyskać informacje jak używać serwera SVN, przeczytaj proszę "`Praca z SVN`__".
Nawet jeśli już wiesz jak używać SVN to warto tam zajrzeć, ponieważ znajdziesz
tam informacje i porady specyficzne dla repozytorium AROSa (takie jak się do 
niego zalogować).

__ http://aros.sourceforge.net/tools/password.html 
__ mailto:digulla@aros.org?subject=[Access%20to%20the%20AROS%20SVN%20server]
__ svn
 
