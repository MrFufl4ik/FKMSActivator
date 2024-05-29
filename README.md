# FKMSActivator - простейщий активатор!
Почему стоит отдать предпочтение FKMSActivator:
  * Программа с открытым исходным кодом
  * Программа автоматизированна и выбирает ключ под вашу систему сама
  * Программа весит крайне мало (до 3-х мб, и то из за --static при компиляции)
  * Программа не используються мусорные сторонние библиотеки

Совместимость:
  * Windows 11
  * Windows 10
  * Windows 8.1

Использование:
  1. Запустить FKMSActivator.exe
  2. Дождать завершения выполнение VBS скриптов
  3. Увдеить заветное окно Windows активированна!

# Компилирование (только LINUX)
Зависимости:
  1. git
  2. mingw64

Клонируем репу:
https://github.com/MrFufl4ik/FKMSActivator.git

После есть два пути:
  * Запускаем makefile.sh
  * Выполняем x86_64-w64-mingw32-windres adminAccess.rs -o adminAccess.o и x86_64-w64-mingw32-g++ --static adminAccess.o main.cpp -o FKMSActivator.exe в папке с кодом
