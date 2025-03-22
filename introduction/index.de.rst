========================
Kurze Einführung in AROS
========================

:Authors:   Aaron Digulla, Stefan Rieken, Matt Parsons, Adam Chodorowski 
:Copyright: Copyright © 1995-2015, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Fertig


.. Include:: index-abstract.de


Ziel
====

Das Ziel des AROS-Projekts ist es, ein Betriebssystem zu erzeugen, welches:

1. so kompatibel wie möglich zu AmigaOS3.1 ist.

2. auf verschiedene Hardware-Architekturen und Prozessoren wie x86, PowerPC,
   Alpha, Sparc, HPPA und andere portiert werden kann.

3. binärkompatibel auf dem Amiga und quellkodekompatibel auf anderer Hardware ist.
  
4. sowohl als eigenständiges Betriebssystem direkt von Festplatte bootet als
   auch emuliert unter einem vorhandenen Betriebssystem läuft, um die
   Softwareentwicklung zu vereinfachen.

5. die Funktionalität von AmigaOS erweitert.


Geschichte
==========

Vor einiger Zeit im Jahr 1993 sah es um den Amiga schlechter als sonst aus
und ein paar Amigafans kamen zusammen und diskutierten darüber, was getan
werden muss, um die Akzeptanz unserer geliebten Maschine zu verbessern.
Schnell wurde der Hauptgrund für den fehlenden Erfolg klar: es war die
fehlende Verbreitung. Der Amiga sollte auf eine verbreitetere Basis gestellt werden,
so dass es attraktiver werden würde, für ihn zu entwickeln. Es wurden Pläne
erstellt, wie dieses Ziel erreicht werden könnte. Einer dieser Pläne war,
die Fehler im AmigaOS zu verbessern, ein anderer ein modernes Betriebssystem
zu erstellen. Das AOS-Projekt war geboren. 

Aber was genau war ein Fehler? Und wie sollten die Fehler behoben werden?
Was sind die Eigenschaften, die ein modernes Betriebssystem haben muss?
Und auf welche Weise sollten sie in das AmigaOS integriert werden?

Zwei Jahre später diskutierten die Leute immer noch darüber, und keine einzige
Zeile Kode war geschrieben worden (zumindest hat niemand diesen Kode gesehen).
Diskussionen verliefen immer noch nach dem Schema "wir brauchen unbedingt ..."
und jemand anders antwortete "lies die alten Mails" oder "dies ist unmöglich, weil",
kurz darauf folgte "das stimmt nicht, weil ..." und so weiter.

Im Winter 1995 hatte Aaron Digulla die Schnauze voll und schrieb ein "RFC"
(Aufforderung zur Stellungnahme) an die AOS-Mailing-Liste. Darin fragte er,
was denn der kleinste gemeinsame Nenner sei. Es gab verschiedene Möglichkeiten.
Das Ergebnis war, dass die meisten ein Betriebssystem sehen wollten,
welches kompatibel zu AmigaOS 3.1 (Kickstart 40.68) ist. Auf dieser Basis
sollte dann diskutiert werden, was möglich ist und was nicht.

Die Arbeit begann und AROS war geboren.
