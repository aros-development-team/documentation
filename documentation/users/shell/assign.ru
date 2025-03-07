======
Assign
======

.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <ask>`_ `Next <avail>`_ 

---------------

::

 Assign [(name):] [{(target)}] [LIST] [EXISTS] [DISMOUNT] [DEFER]

Шаблон
~~~~~~
::


     NAME, TARGET/M, LIST/S, EXISTS/S, DISMOUNT/S, DEFER/S, PATH/S, ADD/S,
     REMOVE/S, VOLS/S, DIRS/S, DEVICES/S


Расположение
~~~~~~~~~~~~
::


     Workbench:C


Функции
~~~~~~~
::

     ASSIGN создаёт ссылку(указатель) на файл или директорию. Ссылка - это 
     логическое имя устройства, позволяющее просто описывать объект ссылки,
     используя ссылку вместо пути.

     Если указаны NAME и TARGET, ASSIGN назначает заданное логическое имя 
     выбранной цели. Если заданное имя (NAME) уже присвоено файлу или 
     директории, новая цель заменит предыдущую. После аргумента NAME 
     необходимо указывать двоеточие. 
     
     Если задано только имя (NAME), то удаляются все указатели, с ним связанные.
     Если не задно ни одного аргумента, выводится список назначенных 
     ссылок (указателей).
     

Ввод
~~~~
::


     NAME      --  имя ссылки, которое следует присвоить файлу или директории
     TARGET    --  один файл/директория, или более для назначения NAME
     LIST      --  вывести список назначенных указателей
     EXISTS    --  если NAME ещё не присвоено, выставить флаг состояния WARN
     DISMOUNT  --  убрать том или устройство NAME из списка DOS
     DEFER     --  выполнить ASSIGN для пути или директории, не обязательно
                   существующей в момент назначения. При первом упоминании NAME 
                   оно будет присвоено объекту.
     PATH      --  для пути назначается non-binding assign. Это означает, что 
                   указатель переопределяется каждый раз при создании ссылки на
                   NAME. Как и для DEFER, путь не обязательно должен 
                   существовать при выполнении команды.                  
     ADD       --  не заменять указатель для NAME, а добавить к нему объект
                   (множественные указатели)
     REMOVE    --  убрать указатель
     VOLS      --  показывать назначенные тома вместе с LIST
     DIRS      --  показывать назначенные директории вместе с LIST
     DEVICES   --  показывать назначенные устройства вместе с LIST
     


