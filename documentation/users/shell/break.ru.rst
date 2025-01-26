=====
Break
=====

.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <beep>`_ `Next <cd>`_ 

---------------

::

 Break 

Вид команды
~~~~~~~~~~~
::

     Break <process> [ALL|C|D|E|F]


Шаблон
~~~~~~
::

     PROCESS/N,PORT,ALL/S,C/S,D/S,E/S,F/S


Расположение
~~~~~~~~~~~~
::

     Workbench:c


Функции
~~~~~~~
::
     BREAK посылает один или несколько сигналов процессу CLI. Аргумент PROCESS
     определяет номер (ID) процесса CLI, которому необходимо отправить сигнал. 
     Команда STATUS выводит перечисление всех запущенных CLI-процессов вместе с
     их ID.
     
     Также можно выбрать общее имя порта и посылать сигналы задаче через
     этот порт.
     (You can also specify a public port name and send signal's to the
     port's task.)
     
     Можно посылать все доступные сигналы за один раз при использовании опции
     ALL, а также любые комбинации флагов CTRL-C, CTRL-D, CTRL-E и CTRL-F с 
     помощью соответствующих опций. Когда задан только ID процесса CLI, будет 
     послан сигнал CTRL-C.


     Результат выполнения команды BREAK тот же, как при выборе соответствующего
     процесса в окне консоли и нажатии соответствующей комбинации клавиш.
     

     Обычное назначение клавиш таково:
         CTRL-C      -       Остановить процесс
         CTRL-D      -       Остановить скрипт shell
         CTRL-E      -       Закрыть окно процесса
         CTRL-F      -       Сделать окно процесса активным

     Не все программы подчиняются этим сигналам, однако большинство должно 
     воспринимать CTRL-C.
     

Примеры
~~~~~~~
::

     
     1.SYS:> BREAK 1

         Послать сигнал CTRL-C процессу с номером 1.

     1.SYS:> BREAK 4 E

         Послать сигнал CTRL-E процессу с номером 4.

         
См. также
~~~~~~~~~
::

     Status


