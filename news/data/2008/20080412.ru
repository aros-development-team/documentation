===========
Обновление!
===========

:Author:   Paolo Besser
:Date:     2008-04-12

Дистрибутивы
------------

Недавно было выпущено два дистрибутива AROS - VmwAROS LIVE! и
новая версия WinAROS. Первый является загрузочным CD, готовым для
установки, который основан на среде VmwAROS, второй - виртуальная
машина для QEMU, содержащая обновленную интегрированную среду 
разработки. Более подробная информация о них содержится на нашей 
`странице`__ закачек. Пользователи и разработчики ПО приглашаются 
к опробованию.

Последние новости
-----------------

Krysztof Smiechowicz и Alain Greppin представили вниманию публики
бинарные пакеты gcc/g++ 3.3.1 для AROS-i386-native, основанные на 
патчах от Fabio. Пакеты можно скачать на AROS-Archives. Несомненно,
это приятная новость для всех интересующихся разработкой и портированием
программ на AROS. Также на Archives находится новая версия Murks!IDE, 
лучшей (правда, единственной) интегрированной среды разработки для AROS,
разработанной Krysztof Smiechowicz и Heinz-Raphael Reinke.

Также нашлось время и исправлению ошибок. Krysztof Smiechowicz начал
просмотр API на предмет завершённости. Barry Nelson пересмотрел,
отсортировал и взял в шефство наш баг-трекер. Множество уже 
исправленных ошибок было удалено из списков.

Nic Andrews и Alain Greppin полностью ввели поддержку загрузчика GRUB2 
на AROS. Nic представил замечательный `скриншот`__ на Aros-Exec. Главной
особенностью этого нововведения является возможность загрузки с системных
разделов в SFS, вместо медленных и ненадёжных разделов FFS. Впрочем, пока
эта возможность не используется по умолчанию, ввиду существующих 
проблем с совместимостью отдельных программ с SFS.

Alain Greppin завершил работу над заданием AROS DHCP и его программой 
dhclient. Теперь AROS может автоматически получать IP-адрес (например,
при использовании AROS в виртуальных средах). Также он портировал 
`TeXlive`__ на AROS.

Tomasz Wiszkowski и Michal Schulz продолжают работу над улучшением 
ata.device. Была добавлена первоначальная поддержка некоторых
Serial ATA-контроллеров: "Контроллеры SATA, поддерживающие работу в 
legacy-режиме, уже должны работать(это значит, что поддержки AHCI пока 
нет)."


__ http://aros.sourceforge.net/download.php
__ http://i175.photobucket.com/albums/w131/Kalamatee/AROS/grub2gfx-1.jpg
__ http://www.chilibi.org/aros/texlive