==========================
Frequently Asked Questions
==========================

:Autoren:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright (C) 1995-2026, The AROS Development Team
:Version:   $Revision$
:Datum:     $Date$
:Status:    Erledigt.

.. Inhalt::

Allgemeine Fragen
=================

Kann ich eine Frage stellen?
----------------------------

Natürlich können Sie. Es gibt mehrere Orte, an denen Sie Fragen stellen, über
AROS diskutieren und Hilfe finden können. Die AROS-Entwickler-Mailinglisten und
Slack-Kanäle sind im `Wiki des AROS-Git-Repositories`__ aufgeführt. Außerdem
gibt es Community-Foren und Diskussionen in verschiedenen Amiga-bezogenen Foren,
in denen Sie Personen mit Erfahrung im Umgang mit AROS und anderen Amiga-ähnlichen
Systemen finden können.

Darüber hinaus ist online eine beträchtliche Menge an Dokumentation und Literatur
über AROS, AmigaOS und verwandte Amiga-ähnliche Systeme verfügbar, die nützliche
Hintergrund- und Praxisinformationen liefern kann.

Dieses FAQ wird aktualisiert, sobald sich nützliche Fragen und Antworten ergeben,
allerdings enthalten die Community-Diskussionen und die Entwicklungskanäle
wahrscheinlich aktuellere Informationen.

__ https://github.com/aros-development-team/AROS/wiki


Was ist AROS?
-------------

Bitte lesen Sie die Einführung_.

.. _einführung: ../../introduction/index


Was ist der rechtliche Status von AROS?
---------------------------------------

Die Europäische Gesetzgebung sagt, dass es legal ist Reverse Engineering Techniken
anzuwenden um Interoperabilität zu erreichen. Sie sagt ebenfalls aus, dass es
nicht legal ist das gewonnene Wissen aus derartigen Techniken zu verteilen. 
Grundsätzlich bedeutet es, dass man jede Software disassemblieren oder Auswerten
darf um etwas Kompatibles zu schreiben (zum Beispiel wäre es legal Word zu 
disassemblieren um ein Programm zu schreiben, das Worddokumente in ASCII Text
umsetzt).

Natürlich sind EInschränkungen vorhanden: Es ist nicht erlaubt Software zu disassemblieren
wenn die gewonnene Information aus diesem Prozess für andere Zwecke verwendet werden kann.
Man darf das Gelernte auch nicht and Dritte weitergeben. Ein Buch wie z.B.
"Windows inside" ist daher illegal oder zumindest von fragwürdiger Legalität.

Das oben genannte trifft nicht direkt auf AROS zu, da wir 
Disassemblierungstechniken vermeiden und stattdessen allgemein verfügbares
Wissen verwenden (welches auch Programmierhandbücher beinhaltet), das nicht unter
irgendeine NDA fällt. Was hier zählt ist die Absicht des Gesetzes: Es ist
erlaubt Software zu schreiben, die mit anderer Software kompatibel ist.
Daher glauben wir, dass AROS durch das Gesetz geschützt ist.

Obwohl Patente und Header Dateien ein anderes Thema darstellen. In Europa können
wir patentierte Algorithmen einsetzen, da die europäische Gesetzgebung keine
Patente auf Algorithmen zulässt. Allerdings kann Code patentierte Algorithmen
verwendet, die in den USA patentiert sind nicht in die USA importiert werden.
Beispiele solcher patentierter Algorithmen in AmigaOS beinhalten das ziehen
von Bildschirmen und die besondere Art und Weise in der Menüs arbeiten. Daher 
vermeiden wir es diese Funktionen in exakt derselben Weise zu implementieren.
Header Dateien müssen dagegen zum Original kompatibel aber so unterschiedlich
wie möglich sein.

Um jeglichen Ärger zu vermeiden haben wir ein offizielles "OK" von Amiga Inc.
angefragt. Sie äußerten sich positiv über die Bemühungen, aber Sie zeigten
sich unsicher über die rechtlichen Konsequenzen. Wir schlagen vor Sie
akzeptieren die Tatsache dass Amiga Inc. uns keine Unterlassungserklärung
zukommen lies als ein positives Zeichen. Unglücklicherweise wurde keine
rechtsgültige Vereinbarung getroffen, außer beidseitigen guten Absichten.


Warum streben Sie nur eine Kompatibilität mit 3.1 an?
-----------------------------------------------------

Es gab Diskussionen darüber, ein fortschrittliches Betriebssystem mit den
Funktionen des AmigaOS zu schreiben. Das wurde aus gutem Grund verworfen.
Erstens waren sich alle einig, dass das aktuelle AmigaOS verbessert werden
müsste, aber niemand wusste, wie das zu tun sei, oder war sich auch nur einig,
was verbessert werden müsste oder was wichtig sei. Manche wollten zum Beispiel
Speicherschutz, scheuten aber dessen Preis (eine umfangreiche Neufassung der
vorhandenen Software und Geschwindigkeitseinbußen).

Am Ende endeten die Diskussionen entweder in Streitereien oder in der
Wiederholung der immer gleichen Argumente. Also haben wir beschlossen, mit
etwas zu beginnen, mit dem wir umzugehen wissen. Wenn wir dann die Erfahrung
haben, um zu sehen, was möglich ist und was nicht, können wir über
Verbesserungen entscheiden.

Wir wollen außerdem auf Amiga-Computern binärkompatibel zum ursprünglichen
AmigaOS sein. Der Grund dafür ist einfach, dass ein neues Betriebssystem ohne
Programme, die darauf laufen, kaum eine Überlebenschance hat. Deshalb versuchen
wir, den Umstieg vom ursprünglichen Betriebssystem auf unser neues so
schmerzlos wie möglich zu gestalten (aber nicht so weit, dass wir AROS danach
nicht mehr verbessern könnten). Wie immer hat alles seinen Preis, und wir
versuchen sorgfältig abzuwägen, wie hoch dieser Preis sein könnte und ob wir
und alle anderen bereit wären, ihn zu zahlen.


Können Sie nicht die Funktion XYZ umsetzen?
-------------------------------------------

Nein, da:

a) Wenn es wiklich wichtig gewesen wäre, dann wäre es bereits im ursprünglichen Betriebssystem. :-) 
b) Warum machen Sie es nicht selbst und senden uns einen Patch?

Der Grund für diese Einstellung ist dass es viele Menschen gibt die denken
dass Ihre Funktion die Wichtigste ist und dass AROS keine Zukunft hätte
wenn diese Funktion nicht sofort integriert wird. Unsere Einstellung ist,
daß AmigaOS - das AROS implementieren soll - alles kann was ein modernes
Betriebssystem können sollte. Wir sehen dass es Bereiche gibt in welchen
AmigaOS verbessert werden könnte, aber wer würde den Rest des Betriebssystems
schreiben, wenn wir das tun würden? Am Ende würden wir eine Vielzahl an netten
Verbesserungen für das ursprüngliche AmigaOS haben, welche den Grpßteil der
verfügbaren Software inkompatibel machen würden aber nichts Wert wären da
der Rest des Betriebssystems fehlt.

Wir haben uns daher entschieden jeden Versuch größere neue Funktionen in das
Betriebssystem zu implementieren abzuwehren bis es mehr oder weniger komplett ist.
Wir kommen diesem Ziel nun sehr nahe und es gab einige Innovationen die in AROS
eingebaut wurden und nicht in AmigaOS verfügbar sind.

Wie kompatibel ist AROS mit AmigaOS?
------------------------------------

Sehr kompatibel. Wir erwarten dass AROS bestehende Software auf dem Amiga
ohne Probleme ausführen wird. Auf anderer Hardware muß die bestehende
Software neu kompiliert werden. Wir werden einen Preprozessor anbieten den
Sie mit Ihrem Code ausführen können und jeden Code ändert oder Warnungen
zu solchem Code ausgibt der inkompatibel zu AROS sein könnte.

Das Portieren von AmigaOS zu AROS besteht meistens aus einer einfachen Neukompilierung
mit vereinzelten Änderungen hier und da. Es gibt natülich Programme für die das nicht
zutrifft, allerdings gilt es für die Neuesten.


Für welche Hardwarearchitekturen ist AROS verfügbar?
----------------------------------------------------

Derzeit ist AROS in einem recht brauchbaren Zustand als native und gehostete
Version (unter Linux) für die i386-Architektur (d.h. IBM-PC-AT-kompatible
Klone) sowie für X86_64 verfügbar. Portierungen auf 68k-Amigas und den
Raspberry Pi sind in unterschiedlichen Stadien der Fertigstellung.


Wird es eine Portierung von AROS auf PowerPC geben?
---------------------------------------------------

Sie ist bereits verfügbar. Die gepflegten PowerPC-Portierungen von AROS sind
sam440-ppc und darwin-ppc.


Warum verwenden Sie Linux und X11?
----------------------------------

Wir verwenden Linux und X11 um die Entwicklungszeit zu reduzieren. Wenn Sie zum
Beispiel eine neue Funktion schreiben, die ein Fenster öffnet, dann können Sie
einfach diese eine Funktion schreiben, ohne hunderte anderer Funktionen in der
layers.library, graphics.library, eine Reihe Gerätetreiber und den Rest zu schreiben
den die Funktion möglicherweise verwendet.

Das Ziel für AROS ist natürlich unabhängig von Linux und X11 zu sein (aber es
wird weiterhin dort laufen wenn die Menschen das wirklich wollen) und das wird
mit den nativen AROS Versionen langsam zu einer Realität. Wir müssen immer noch
Linux für die Entwicklung verwenden, da einige Entwicklungswerkzeuge noch nicht
nach AROS portiert wurden. 


Wie stellen sie sich vor AROS portabel zu machen?
-------------------------------------------------

Eine der wichtigsten neuen Funktionen im Vergleich zu AmigaOS von AROS ist das 
HIDD (hardwareunabhängige Gerätetreiber) System, das es uns erlaubt AROS
sehr einfach auf neue Hardware zu portieren. Grundsätzlich haben die zentralen 
Bibliotheken des Betriebssystems keinen Durchgriff auf die Hardware sondern
gehen nur über die HIDDs, die mit einem objektorientierten System programmiert
wurden das den Austausch der HIDDs und die Wiederverwendung des Quellcodes
vereinfacht.


Warum denken Sie, dass es AROS schafft?
---------------------------------------

Wir hören von vielen Menschen täglich, dass AROS es nicht schafft. Die meisten
davon wissen nicht was wir tun oder denken dass der Amiga bereits tot ist.
Wenn wir den zuvor genannten erklärt haben was wir tun bestätigen die meisten
dass es möglich ist. Die letzteren machen mehr Probleme. Gut, ist der Amiga schon tot?
Diejenigen die Ihre Amigas immer noch im Einsatz haben werden ihnen vermutlich
sagen dass er es nicht ist. Ist Ihr A500 oder A4000 explodiert als Commodore
pleite ging? Explodierte er als es Amiga Technologies tat?

Fakt ist, dass nur wenig neue Software für den Amiga entwickelt wird (obwohl
Aminet immer noch ganz nett vor sich hin tuckert) und dass Hardware auch
langsamer entwickelt wird (aber die meisten überasschenden Entwickungen
tauchen gerade heute auf). Die Amiga Community (die immer noch am Leben ist)
scheint da zu sitzen und abzuwarten. Und wenn einer ein Produkt veröffentlicht
dass ein wenig wie der Amiga von 1984 ist dann wird diese Maschine wieder einen
Boom erleben. Und wer weiß, vielleicht bekommen Sie mit der Maschine eine CD
mit dem Aufdruck "AROS". :-)


Was kann ich tun wenn AROS nicht kompiliert?
--------------------------------------------

Bitte geben Sie Details zum Problem an, einschließlich des Befehls, mit dem Sie
AROS gebaut haben, sowie aller erhaltenen Fehlermeldungen, und bitten Sie auf der
`AROS-Entwickler-Mailingliste`__ oder im AROS-Slack-Kanal um Hilfe. Dies sind die
geeigneten Orte, um Build-Probleme und andere Themen rund um die AROS-Entwicklung
zu besprechen, und dort können Entwickler und andere mit dem Build-System vertraute
Personen bei der Diagnose des Problems helfen.

Sie müssen kein etablierter AROS-Entwickler sein, um bei einem Build-Problem um
Hilfe zu bitten. Wenn Sie AROS aus den Quellen bauen, arbeiten Sie bereits mit der
Entwicklungsumgebung.

__ https://www.aros.org/


Wird AROS Speicherschutzm, SVM, RT... unterstützen?
---------------------------------------------------

Mehrere hundert Amiga-Experten (und Leute, die sich dafür hielten) haben drei
Jahre lang versucht, einen Weg zu finden, Speicherschutz (MP) für AmigaOS zu
implementieren. Sie hatten keinen Erfolg. Das deutet darauf hin, dass es recht
unwahrscheinlich ist, dass das normale AmigaOS jemals MP wie Unix oder Windows
NT haben wird.

Aber es ist nicht alles verloren. Es gibt Pläne, eine Variante von MP in AROS
zu integrieren, die zumindest neue Programme schützt, die davon wissen. Einige
Bemühungen in diesem Bereich sehen wirklich vielversprechend aus. Außerdem ist
es nicht wirklich ein Problem, wenn Ihr Rechner abstürzt. Das Problem ist eher,
dass:

1. Sie keine gute Vorstellung davon haben, warum er abgestürzt ist. Im Grunde
   stochern Sie dann mit einer 30-Meter-Stange in einem Sumpf voller dichtem
   Nebel herum.
2. Sie Ihre Arbeit verlieren.

Den Rechner neu zu starten ist wirklich kein Problem.

Was wir versuchen könnten zu bauen, ist ein System, das zumindest warnt, wenn
etwas Zweifelhaftes passiert, das Ihnen sehr detailliert sagen kann, was beim
Absturz vor sich ging, und das es Ihnen erlaubt, Ihre Arbeit zu speichern und
*dann* abzustürzen. Es bräuchte außerdem eine Möglichkeit zu prüfen, was
gespeichert wurde, damit Sie sicher sein können, nicht mit beschädigten Daten
weiterzuarbeiten.

Dasselbe gilt für SVM (auslagerbarer virtueller Speicher), RT
(Ressourcenverfolgung) und SMP (symmetrisches Multiprocessing). Wir planen
derzeit, wie wir sie implementieren, und stellen sicher, dass das Hinzufügen
dieser Funktionen schmerzlos sein wird. Sie haben im Moment allerdings nicht
die höchste Priorität. Ein sehr grundlegendes RT wurde jedoch bereits
hinzugefügt.


Kann ich ein Betatester werden?
-------------------------------

Na klar, kein Problem. Tatsächlich möchten wir so viele Betatester wie
nur irgend möglich - es ist jeder willkommen! Wir haben jedoch keine Liste
der Betatester, also ist alles was Sie tun müssen AROS herunter zu laden und
zu testen was sie möchten und uns einen Bericht zu senden.


Wie ist die Beziehung zwsichen AROS und UAE?
--------------------------------------------

UAE ist ein Amiga-Emulator und hat als solcher ein etwas anderes Ziel als
AROS. UAE will selbst für Spiele und hardwarenahen Code binärkompatibel sein,
während AROS native Anwendungen haben will. Deshalb ist AROS viel schneller als
UAE, aber unter UAE kann man mehr Software ausführen.

Wir stehen in losem Kontakt mit dem Autor von UAE, und es besteht eine gute
Chance, dass Code aus UAE in AROS auftaucht und umgekehrt. Die UAE-Entwickler
sind zum Beispiel an den Quellen des Betriebssystems interessiert, weil UAE
manche Anwendungen viel schneller ausführen könnte, wenn einige oder alle
OS-Funktionen durch nativen Code ersetzt würden. Andererseits könnte AROS von
einer integrierten Amiga-Emulation profitieren.

Da die meisten Programme nicht von Anfang an für AROS verfügbar sein werden,
hat Fabio Alemagna UAE auf AROS portiert, sodass Sie alte Programme zumindest
in einer Emulationsumgebung ausführen können.

In Contrib ist außerdem `E-UAE`__ verfügbar, ein um einige Funktionen aus
`WinUAE`__ erweitertes UAE.

__ http://www.rcdrummond.net/uae/
__ https://www.winuae.net/


Was ist die Beziehung zwischen AROS und Haage & Partner?
--------------------------------------------------------

Haage & Partner hatten Teile von AROS wie zum Beispiel das Colorwheel und
das Gradientslider Gadget und das neue SetENV Kommando in AmigaOS 3.5 und 3.9 
eingesetzt. Das bedeutet in gewisser Weise dass AROS ein Teil des offiziellen
AmigaOS wurde. Das bedeutet jedoch nicht, dass es eine formale Beziehung
zwischen AROS und Haage & Partner gibt. AROS ist ein Open Source Projekt und
jeder kann unseren Quellcode in seinen eigenen Projekten verwenden vorausgesetzt
sie beachten die Lizenz.


Was ist die Beziehung zwischen AROS und Morphos?
------------------------------------------------

Die Beziehung zwischen AROS und MorphOS ist grundsätzlich die selbe wie zwischen
AROS und Haage & Partner. MorphOS verwendet Teile von AROS um Ihren Entwicklungsfortschritt 
zu beschleunigen - unter den Bestimmungen unserer Lizenz. Wie auch mit Haage & Partner
ist das gut für beide Teams da MorphOS durch AROS eine Beschleunigung in seiner 
Entwicklung wiederfährt und AROS vom MorphOS Team gute Verbesserungen in unserem
Quellcode erhält. Es besteht keine formale Beziehung zwischen AROS und MorphOS -
so fuktioniert einfach Open Source Entwicklung.


Welche Programmiersprachen sind verfügbar?
------------------------------------------

GCC (C, C++) ist sowohl als nativer als auch als Cross-Compiler verfügbar.

Nativ verfügbar sind die Sprachen Python_, Regina_, Lua_ und Hollywood_:

+ Python ist eine Skriptsprache, die wegen ihres schönen Designs und ihrer
  Funktionen (objektorientierte Programmierung, Modulsystem, viele nützliche
  mitgelieferte Module, klare Syntax, ...) recht populär geworden ist. Für die
  AROS-Portierung wurde ein eigenes Projekt gestartet, das unter
  https://pyaros.sourceforge.net/ zu finden ist.

+ Regina ist ein portabler, ANSI-konformer REXX-Interpreter. Ziel der
  AROS-Portierung ist die Kompatibilität mit dem ARexx-Interpreter des
  klassischen AmigaOS.

+ Lua ist eine mächtige, schnelle, leichtgewichtige und einbettbare
  Skriptsprache. Die AROS-Portierung wurde um zwei Module erweitert: siamiga
  und zulu. Ersteres enthält einige einfache Grafikbefehle, letzteres ist eine
  Schnittstelle zu Zune.

+ Hollywood ist eine kommerzielle Programmiersprache für Multimedia-Anwendungen
  einschließlich Spielen. Sie können eine Version für i386-aros (ABI v0) kaufen.

.. _Python: https://www.python.org/
.. _Regina: https://regina-rexx.sourceforge.io/
.. _Lua: https://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/


Warum gibt es keinen m68k Emulator in AROS?
-------------------------------------------

Es gibt bereits einen Versuch, den Emulator janus-uae zu integrieren.

Aber warum implementieren wir nicht einfach eine virtuelle m68k-CPU, um
Software direkt unter AROS auszuführen? Nun, das Problem ist, dass
m68k-Software die Daten im Big-Endian-Format erwartet, während AROS auch auf
Little-Endian-CPUs läuft. Die Little-Endian-Routinen im AROS-Kern müssten mit
den Big-Endian-Daten der Emulation arbeiten. Eine automatische Umwandlung
scheint unmöglich zu sein (nur ein Beispiel: es gibt ein Feld in einer
Struktur im AmigaOS, das manchmal ein ULONG und manchmal zwei WORDs enthält),
weil wir nicht erkennen können, wie ein paar Bytes im RAM kodiert sind.

.. _UAE: http://www.amigaemulator.org/


Wird es ein AROS Kickstart ROM geben?
-------------------------------------

Sie sind bereits im Paket amiga-m68k-boot-iso im Verzeichnis boot/amiga
verfügbar.


Nightly Builds
==============

Was sind die Nightly Builds?
----------------------------

Die AROS Nightly Builds sind Entwicklungs-Builds, die aus dem aktuellen Stand des
AROS-Quellbaums erzeugt werden. Sie richten sich in erster Linie an Entwickler,
Tester und Personen, die die neuesten Entwicklungen in AROS verfolgen und damit
experimentieren möchten. Sie sollten daher als fortlaufender Entwicklungs-Snapshot
und nicht als ausgereifte, auf Endanwender ausgerichtete Veröffentlichung betrachtet
werden. Ihre Konfiguration soll dementsprechend eine konsistente Umgebung zum Testen
der aktuellen AROS-Entwicklung bieten und keine endgültige Entscheidung über das
Erscheinungsbild des Desktops oder das Benutzererlebnis darstellen.

Warum verwenden die Nightly Builds keine "schönen" Themes?
----------------------------------------------------------

Das Problem ist, dass "schön" subjektiv ist. Es gibt kein Standard-Theme, das
allen gefällt, und die Vorgabe des Projekts jedes Mal zu ändern, wenn sie jemandem
nicht gefällt, macht aus Ästhetik nur einen endlosen Kreislauf von "macht es wieder
rückgängig".

Deshalb ist die Unterscheidung zwischen AROS selbst und den einzelnen Distributionen
wichtig. Den Betreuern einer Distribution steht es frei zu entscheiden, wie ihre
Distribution aussieht und mit welchen Voreinstellungen sie ausgeliefert wird.

Die Nightly Builds sollen kein ausgefeiltes Desktop-Produkt mit festgelegtem Geschmack
sein; sie sind eine konsistente Umgebung für Entwicklung und Tests. Wenn Sie ein
anderes Aussehen bevorzugen, passen Sie es an oder bauen Sie eine Distribution um
diese Vorliebe herum.

Persönliche Vorlieben sind ein völlig legitimer Grund, das eigene System anzupassen,
aber keine besonders gute Grundlage, um die Voreinstellungen des Upstream-Projekts
zu ändern.


Fragen zur Software
===================

Was ist Zune?
-------------

Falls Sie auf dieser Seite über Zune lesen: Es ist einfach eine Open Source
Neuimplementierung von MUI, das ein mächtiges (sowohl Benutzer- als auch
Entwicklerfreundlich) objektorientierte Shareware GUI Toolkit ist und faktisch
der Standard auf AmigaOS. Zune ist das bevorzugte GUI Toolkit zur Entwicklung
nativer AROS Anwendungen. Der Name selbst bedeutet nichts, er hört sich nur 
gut an.


Was ist der Grafik- und anderer Speicher in Wanderer?
-----------------------------------------------------

Diese Speicheraufteilung ist größtenteils ein Relikt der Amiga Vergangenheit,
als Grafikspeicher der Anwendungsspeicher war, bevor anderer Speicher, genannt FAST
RAM hinzugefügt wurde; Ein Speicher in dem Anwendungen abgelegt wurden, während
Grafiken, Sounds und einige Systemstrukturen immer noch im Grafikspeicher verblieben.

Im gehosteten AROS gibt es keinen anderen Speicher (FAST) als den Grafikspeicher. 
Auf nativem AROS kann Grafikspeicher eine maximale Größe von 16MB besitzen, obwohl
es nicht den Zustand des Grafikkartenspeichers reflektiert... Es hat keinen Bezug
zum Speicher auf Ihrer Grafikkarte.


*Die in die Länge gezogene Antwort*
Grafikspeicher in i386-native bezeichnet die unteren 16 MB des Speichers im
System. Diese unteren 16MB ist der Bereich in dem ISA Karten DMA Zugriff ausführen
können. Speicheranforderung mit MEMF_DMA oder MEMF_CHIP werden aus diesem Bereich
bedient, alle anderen Anforderungen aus dem restlichen (FAST) Speicher.

Verwenden Sie das C:Avail HUMAN Kommando für mehr Informationen.


Was macht überhaupt das Wanderer Kommando Snapshot <all/window> ?
-----------------------------------------------------------------

Dieses Kommando speichert die Iconpositionen aller Fenster (oder eines
einzelnen Fensters).


Welche Kommandozeilenoptionen sind für das gehostete AROS verfügbar?
--------------------------------------------------------------------

Sie erhalten eine Liste davon durch Ausführen des Kommandos ./aros -h.


Welche AROS-nativen Kernel Optionen werden in der GRUB Zeile verwendet?
-----------------------------------------------------------------------

Hier einige::

    floppy=<disabled/nomount>   Legt die Optionen des Trackdisk-Geräts fest
        disabled                - deaktiviert die Initialisierung von
                                  trackdisk.device vollständig
        nomount                 - initialisiert trackdisk.device, erzeugt aber
                                  keine DOS-Geräte

    ATA=32bit           - Aktiviert 32-Bit-I/O im Festplattentreiber (sicher)
    forcedma            - Erzwingt die Aktivierung von DMA im Festplattentreiber
                          (sollte sicher sein, könnte es aber nicht sein)
    gfx=<hidd name>     - Verwende den genannten HIDD als Grafiktreiber
    lib=<name>          - Lade und initialisiere den genannten HIDD/die genannte
                          Bibliothek

Bitte beachten Sie, dass diese Optionen Groß-/Kleinschreibung berücksichtigen.


Wie kann ich ein DOS-Skript erstellen, das für ein installiertes Paket automatisch ausgeführt wird?
---------------------------------------------------------------------------------------------------

1) Erstellen Sie ein Unterverzeichnis S und legen Sie darin eine Datei namens
   'Package-Startup' mit dem DOS-Skript für dieses Paket an, das bei jedem
   Start ausgeführt werden soll.

2) Erzeugen Sie in der Datei envarc:sys/packages eine Variable, die den Pfad
   zum Unterverzeichnis S Ihres Pakets enthält.

Beispiel für die Verzeichnisstruktur::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup

Die Variable in envarc:sys/packages könnte den Namen 'myapp' haben (der Name
ist nur ein Beispiel); der Inhalt wäre dann 'sys:extras/myappdir'.

Das Package-Startup-Skript würde dann von der Startup-Sequence aufgerufen.


Fragen zur Hardware
===================

Wo kann ich die AROS Hardware Kompatibilitätsliste finden?                   
----------------------------------------------------------

Sie können eine auf der `AROS Wiki <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__
Seite finden. Es können weitere durch AROS Anwender erstellte Listen vorhanden sein.


Warum kann AROS nicht von meinem SLAVE - IDE - Laufwerk starten?
----------------------------------------------------------------

Nun, AROS sollte starten wenn das Laufwerk SLAVE ist, allerdings nur dann wenn
es auch ein MASTER Laufwerk gibt. Das ist eine korrekte Verbindung mit Rücksicht
auf die IDE Spezifikation und AROS setzt diese um.


Mein System hängt sich mit einem roten Zeiger auf dem Bildschirm oder einem leeren Bildschirm auf
-------------------------------------------------------------------------------------------------

Ein Grund dafür kann die Verwendung einer seriellen Maus sein (diese wird noch
nicht unterstützt). Sie müssen mit AROS derzeit eine PS/2-Maus verwenden. Eine
andere Ursache könnte sein, dass Sie im Bootmenü einen Videomodus gewählt
haben, den Ihre Hardware nicht unterstützt. Starten Sie neu und probieren Sie
einen anderen.
