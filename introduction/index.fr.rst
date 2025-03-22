==========================
Courte introduction à AROS
==========================

:Authors:   Aaron Digulla, Stefan Rieken, Matt Parsons, Adam Chodorowski 
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Almost finished, I think...


.. Include:: index-abstract.fr.rst


Objectifs
=========

Les objectifs du projet AROS sont de créer un OS qui:

1. est compatible autant que possible avec AmigaOS 3.1.

2. peut être porté à différents types de configurations matérielles et processeurs
   comme le x86, PowerPC, Alpha, Sparc, HPPA, etc.

3. devrait être compatible au niveau binaire exécutable et dans les codes
   source avec les autres configurations matérielles.
  
4. doit pouvoir démarrer d'une façon autonome qui s'initialise à partir du disque
   dur et comme émulation qui ouvre une fenêtre sur un OS existant pour développer
   des logiciels et pour lancer des applications Amiga et natives en même temps.

5. Améliorer les contionnalités d'AmigaOS.

Pour atteindre ce but, nous employons un certain nombre de techniques. Tout d'abord, 
nous avons une utilisation massive d'Internet. Vous pouvez participer à notre projet 
même si vous ne pouvez écrire qu'une simple fonction d'OS. La version en cours de
la source est accessible 24/24 tous les jours et les patches correctifs peuvent être 
fusionnées à tout moment. Une petite base de données où sont répertoriées les tâches
assure que le travail n'est pasfait en double. 


Historique
==========

Il y a quelques années, en 1993, la situation de l'Amiga était vue quelque peu
pire que d'habitude et quelques fan d'Amiga se réunirent et discutère de ce qui
devrait être fait pour promouvoir de notre machine bien aimée. Immédiatement,
la raison principale de l'absence de succès de l'Amiga est devenue claire :
c'était la propagation, ou plutôt son manque. L'Amiga devrait obtenir une base
plus étendue pour la rendre plus attrayante, afin que chacun l'emploie et
développe dessus. Ainsi des plans ont été faits pour atteindre ce but. Un des
objectifs était de fixer les bugs de l'AmigaOS, un autre était de rendre ce
système d'exdploitation plus moderne. Le projet AOS était né.

Mais exactement qu'est ce qu'était un bug ? Et comment les bugs devraient-ils
être fixés ? Quels sont les dispositifs qu'un OS *modern* doit avoir ? Et
comment doivent-ils être mis en place dans l'AmigaOS ?

Deux ans après, les gens argumentaient toujours sur ce sujet et aucune ligne de
code n'avait été écrite (ou du moins, personne n'avait jamais vu de code). Les
discussions étaient toujours du type où quelqu'un déclarait "nous devons avoir..."
et quelqu'un répondait "lis les anciens messages" ou "c'est impossible à faire,
parce que..." qui a était suivi de "tu as tord car..." et ainsi de suite.

Pendant l'hiver de 1995, Aaron Digulla en eu assez de cette situation et envoya
un RFC (Request For Comments) à la mailing list d'AOS dans laquelle il demanda
ce que devait être la base minimale commune. Plusieurs options eurent été données
et la conclusion fut que presque chacun voulait voir un OS libre et compatible
avec AmigaOS 3.1 (Kickstart 40.68) sur lequel d'autres discussions pourraient
être basées, pour voir ce qui est possible et ce qui n'est pas.

Ainsi le travail commença et AROS naquit.

