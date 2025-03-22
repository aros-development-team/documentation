==========================
Short introduction to AROS
==========================

:Authors:   Aaron Digulla, Stefan Rieken, Matt Parsons, Adam Chodorowski, Paolo Besser 
:Copyright: Copyright © 1995-2009, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Almost finished, I think...


.. Include:: index-abstract.it.rst


Obiettivi
=========

Il principale obiettivo degli sviluppatori di AROS è ottenere un sistema 
operativo che:

1. Sia il più possibile compatibile ad AmigaOS 3.1.

2. Possa essere portato su più piattaforme e processori 
   come x86, PowerPC, Alpha, Sparc, HPPA e altri.

3. Debba essere compatibile a livello binario su Amiga e a livello
   di sorgenti sul resto dell'hardware.
  
4. Possa girare in maniera nativa caricando direttamente dall'hard disk 
   all'avvio del computer o possa girare in finestra su un altro sistema
   operativo per favorire lo sviluppo di applicazioni e, nel contempo, 
   far girare nativamente le applicazioni su Amiga.

5. Migliori le funzioni originali di AmigaOS.

Per raggiungere questo obiettivo, noi facciamo uso di diversi strumenti, 
in particolare Internet. Potete contribuire al progetto anche scrivendo una
singola funzione del sistema operativo. La versione più aggiornata del
codice sorgente è accessibile 24 ore al giorno e le patch possono essere inserite 
in ogni momento. Un piccolo database assicura che non si faccia lo stesso lavoro 
due volte.


Storia
======

Nell'ormai lontano 1993, la situazione della piattaforma Amiga apparì in qualche 
modo più drammatica del solito e alcuni fan cominciarono a discutere sul da  
farsi, per mantenere vivo l'interesse sul loro computer preferito. Il motivo 
principale del suo scarso successo apparì chiaro: era la sua mancata diffusione. 
L'Amiga avrebbe dovuto essere una macchina più diffusa per risultare più  
attraente, sia per gli utenti sia per gli sviluppatori. Così cominciarono a pensare 
a un piano per risolvere il problema. Si pensò di correggere i bug di AmigaOS, 
o ancora di creare un sistema operativo più moderno. Nacque il progetto AOS.

Ma cos'era esattamente un bug? E come correggerlo? Quali sono le caratteristiche 
che un sistema *moderno* dovrebbe avere? E come inserirle all'interno di 
AmigaOS?

Due anni dopo, le persone stavano ancora litigando e non avevano scritto neanche 
una riga di codice (o per lo meno nessuno l'ha mai visto). Le discussioni 
erano giunto a un punto in cui qualcuno diceva "dobbiamo assolutamente..." e 
qualcuno rispondeva "leggi le vecchie email" o "non si può fare perché..."
e qualcuno aggiungeva "ti sbagli in quanto..." e così via. 

Nell'inverno del 1995, Aaron Digulla si stufò di queste discussioni e inviò una 
RFC (request for comments) alla mailing list di AOS in cui chiedeva quale fosse 
la base minima da cui partire. Arrivarono diverse risposte e alla fine si stabilì  
che tutti avrebbero desiderato un OS aperto che fosse compatibile ad 
AmigaOS 3.1 (kickstart 40.68), su cui eventualmente discutere in tempi  
successivi cosa fosse possibile migliorare e cosa no.

I lavori iniziarono e nacque AROS.

