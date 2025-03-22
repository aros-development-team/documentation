=================================================
Klassische Amiga Anwendungen aus Wanderer starten
=================================================

:Autoren:   Matthias Rustler
:Copyright: Copyright ? 2007, The AROS Development Team
:Version:   $Revision$
:Datum:     $Date$
:Status:    Erledigt.

.. Inhalt::

Einleitung
----------

E-UAE emuliert klassische Amiga hardware und ermöglicht die Ausführung alter Anwendungen
unter modernen Betriebssystemen. Es ist sogar möglich UAE von einem Wanderer Icon aus in
der Art zu starten, dass es eine Anwendung lädt. Der Trick besteht darin ein Skript zu verwenden,
das E-UAE mit bestimmten Parametern startet. Das Skript erhält ein Icon mit "iconx" als
Standardwerkzeug.


E-UAE Vorbereiten
-----------------

E-UAE für AROS ist im Contribarchiv des nächtlichen Builds verfügbar und liegt im Pfad
*System:Extras/Emu/E-UAE*.

Für E-UA werden ROM Images benötigt. Die legalen Wege sie zu bekommen ist der Kauf von
Cloanto Amiga Forever oder Amiga Classix CD-Roms. Oder sie lesen Sie aus einem echten
Amiga mit dem Werkzeug "TransRom" aus. Kopieren Sie die Images irgendwo auf die AROS
Festplatten. Das folgende Beispiel setzt voraus, dass Sie den Ordner "uae" unter dem
Laufwerk "work:" erstellt haben. (Hinweis: Die Images der Cloanto CD sind verschlüsselt.
Sie benötigen zusätzlich die Datei rom.key.)

Verändern Sie die standard Konfigurationsdatei *System:Extras/Emu/E-UAE/.uaerc* mit einem
Editor. Sie sollten auf jeden Fall die Pfade zu den ROM Images angeben. Beispiel::

    amiga.rom_path     = work:uae
    amiga.use_dither   = false
    cpu_type           = 68020
    chipset            = ecs
    chipmem_size       = 4
    cachesize          = 4096
    fastmem_size       = 8
    gfx_linemode       = double
    kickstart_rom_file = $(FILE_PATH)/kick13.rom
    #kickstart_key_file = $(FILE_PATH)/rom.key
    sound_output       = none

Jetzt ist es Zeit für einen Test. Öffnen Sie eine Shell mit dem Pfad *System:Extras/Emu/E-UAE* und
geben Sie *i386-aros-uae* ein. Wenn nach einiger Zeit die Abfrage nach den Workbench Disketen erscheint
(z.B. die Hand für Kickstart 1.3) dann haben Sie die erste Hürde genommen. Auch wenn es funktioniert
sollten Sie die Fehlermeldungen prüfen und beheben.


Konfiguration
-------------

E-UAE hat viele Optionen, die in Konfigurationsdateien und Kommandozeilen angegeben werden können.
Lesen Sie die Dokumentation von E-UAE. Wenn Sie UAE wie folgt starten:
E-UAE has a lot of options which can be specified in configuration files and command line options.
``i386-aros-uae -f config1 -option1 -option2``
dann lädt es zuerst die Datei *.uaerc*. Anschließend wird die Datei unter der Option -f geladen
und die vorhergehenden EIistellungen überschrieben. Danach verwendet es die angegebenen Kommandozeilenoptionen
und überschreibt wieder die bis dahin vorgenommenen Einstellungen.

Es ist empfehlenswert, dass Sie Konfigurationsdateien erstellen, die echte Maschinen emulieren:

* a500-13.uaerc: 68000 Processor, ecs, kick1.3, keine Beschleunigung
* a1200-31.uaerc: 68020, aga, kick 3.1, Speicherwerweiterung
* a4000-31.uaerc: Keine Einschränkungen

Anbei ein Beispiel für eine *a500-13.uaerc*::

    cpu_type=68000
    cpu_speed=real
    kickstart_rom_file=$(FILE_PATH)/kick13.rom

Das Schreiben von Konfigurationsdateien ist der schwierigste Teil dieser Anleitung. Wenn Sie die
Amiga Classix CD-Rom besitzen können Sie in den verfügbaren Konfigurationsdateien nachlesen um
Hinweise zu erhalten.
Oder sie können ``i386-aros-uae -h >uaecommands`` eingeben, um einen Ausgangspunkt mit allen
verfügbaren Optionen zu erhalten.


Installation eines Spiels
-------------------------

Sie benötigen für die Anwendung die Sie ausführen möchten. Diese Images haben die Dateiendung *.adf*.
Sie können diese an geeigneten Stellen ablegen. In unserem Beispiel verwenden wir *work:uae*.


Erstellen eines Startscripts mit Icon
-------------------------------------

Der nächste Schritt ist das Erstellen einer Skriptdatei die E-UAE startet mit einem Texteditor. Hier ist
ein Beispiel für das Spiel Zarathrusta das mit 2 Disketten daherkommt::

    cd system:emu/e-uae
    i386-aros-uae -f work:uae/a500-13.uaerc -0 work:uae/Zarathrusta1.adf -1 work:uae/Zarathrusta2.adf

Die erste Zeile macht das E-UAE Verzeichnis zum aktuellen Verzeichnis. Anschließend starten wir E-UAE
mit der Konfigurationsdatei *a500-13.uaerc* und legen die Diskettenimages in die Laufwerke 0 und 1.

Speichern Sie die Datei unter dem Namen *Zarathrusta* in *work:uae*.

Zum Schluß fügen wir dem Skript ein Icon hinzu. Nachdem Sie den Ordner *work:uae* in Wanderer geöffnet haben
klicken Sie das Icon des Skripts an und wählen aus dem Menü den Punkt *Icon/Information*. Geben Sie *c:iconx*
als standard Werkzeug an. (Das Werkzeug IconX führt Textdateien als DOS Skripte aus). Auf der Seite Tooltypes
der Icon Information geben Sie *WINDOW=con:0/20//600/Zarathrusta/AUTO* ein. Dies macht das Ausgabefenster größer,
damit wir die möglichen Fehlermeldungen sehen können.

Ein Doppelklick auf das Icon sollte nun E-UAE mit Ihrer Anwendung starten.


Festplatten
-----------

E-UAE erlaubt den Einsatz von Verzeichnissen des Hostsystems und Hardfiles als Festplatten. Sie können
detaillierte Informationen darüber in der Datei *Extras/Emu/E-UAE/docs/configuration.txt* finden. Die
folgenden Beispiele zeigen wie Sie die Verzeichnisse *work:uae/workbench* und *work:uae/programs* als
Festplatte nutzen::

    filesystem2=rw,:Workbench:work:uae/workbench,0
    filesystem2=rw,:Programs:work:uae/programs,-1

Sie können sogar AmigaOS auf einem solchen Laufwerk installieren und davon starten. Das Laufwerk von dem
gestartet werden soll muss die höchste Startpriorität besitzen (letzter Parameter der Option filesystem2).


Grafik
------

Unglücklicherweise verfügt AROS E-UAE nicht über die Picasso Emulation. Dadurch sind Sie auf Bildschirme
mit Maximal 256 Farben eingeschränkt.

Einige Hinweise um bessere Auflösung und Leistung zu erhalten:

+ Verwenden Sie die Konfigurationsoption *chipmem_size = 16*. Das ermöglicht 16*512 = 8 MB Chip RAM.
+ Verwenden Sie die Konifgurationsoption *z3mem_size=x* wobei *x* ein Wert aus 1,2,4,6,8,16 oder 32 sein muß.
+ Wählen Sie im Präferenzeditor für den Bildschirmmodus High Res Laced in aus.
+ Wählen Sie im Präferenzeditor für Overscan das maximal mögliche.
+ Installieren Sie das Werkzeug *FBlit*. Es stellt einige Patches bereit, die Fast RAM anstatt Chip RAM verwenden.
