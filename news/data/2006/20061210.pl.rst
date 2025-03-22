=============
Status update
=============

:Autor:   Paolo Besser
:Data:     2006-12-10

Ostatni Status Update ma już 3 miesiące, lecz to nie znaczy, że nic nie
robiliśmy. Wykonano sporo poprawek i usprawnień w wielu komponentach 
AROSa.

Nightly build dla wersji PPC-hosted AROSa jest już dostępne na naszej 
stronie `Download`__.

Christoph Szczecina dodał do Wanderera inicjalną wersję kopiowania 
drag'n'drop, umożliwiając łatwiejsze zarządzanie plikami. 
Obecna wersja pozwala na razie kopiować pojedyńczy plik z jednego 
katalogu do drugiego, lecz to dopiero początek. Beta testerzy mogą 
znaleźć tą cechę w ostatnich nightly builds. Inni developerzy 
dodali zapamiętywanie pozycji okna i wsparcie dla listowania ikon.

Staf Verhaegen zaktualizował dokumentację dla programistów. Wiele rzeczy 
zmieniło się w ciągu minionych 24 miesięcy i nasze strony z dokumentacją 
były już trochę nieaktualne. Dzięki Stafowi, nowi programiści AROSa 
mogę znaleźć na tej stronie przydatne informacje.

Dzięki pracy Bernda Roescha i Georga Stegera, wszystkie ważne właściwości 
niezbędne do zastąpienia MUI w wielu amigowych programach zostały dodane 
do Zune. Michał Schulz dodał wsparcie dla zapisu do datatypu PNG, czyniąc
łatwiejszymi tworzenie ikon i edycję obrazów.

__ http://aros.sourceforge.net/download.php

AROS w newsach
--------------

OSNews opublikował `artykuł`__ traktujący o projektach systemów
operacyjnych nazwanych w artykule "rekreacyjnymi". Autor przyjrzał się 
krytycznie dwóm platformom i dostępnym dla nich "rekreacyjnym" systemom 
operacyjnym, z których jednym był AROS.
AROS Show przeprowadził wywiad z liderem naszego projektu Aaronem Digulla. 
Kliknij `tutaj`__ by go przeczytać.

__ http://www.osnews.com/story.php/16543
__ http://arosshow.blogspot.com/2006/12/interview-with-aaron-digulla-who.html

Oprogramowanie
--------------

*AutoDocReader*, program do przeglądanie plików tekstowych dokumentacji 
developerskiej w formacie AutoDoc został przeniesiony na AROSa. 
Marcin Kielesiński portował *AmiGG* 0.44.3. To pierwszy komunikator dla AROSa 
umożliwiający prowadzenie rozmów z użytkownikami sieci Gadu-Gadu i Tlen.
AmiGG umożliwia ponadto otrzymywanie powiadomień o przychodzącej poczcie e-mail. 
Możesz obejrzeć AmiGG na 2 zrzutach ekranu: `tutaj`__ i `tutaj`__, a binaria 
znajdziesz `tutaj`__.

*Murks!* to zintegrowane środowisko programistyczne dla AROSa. Murks! używa 
tego samego formatu zapisu projektów co AmiDevCpp, jest więc możliwa 
między nimi wymiana danych. By użyć Murks!, potrzebujesz natywnej wersji GCC. 
Użytkownicy Windows mogą wypróbować Murks! używając ostatniej wersji WinAros 
zawierającej natywne GCC. Pełna historia na `AROS-EXEC`__.

__ http://ministerq.integradesign.org/31.PNG
__ http://ministerq.integradesign.org/32.PNG
__ http://amigg.integradesign.org/amigg_beta.lha
__ https://ae.amigalife.org/modules/news/article.php?storyid=185

