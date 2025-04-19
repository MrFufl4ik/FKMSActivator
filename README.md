# FKMSActivator
Why you should give preference to FKMSActivator:
  * The program is open source
  * The program is automated and selects the key for your system itself
  * The program weighs extremely little (up to 3 MB, and that's because of '--static' during compilation)
  * The program does not use junk third-party libraries

Compability:
  * Windows 11
  * Windows 10
  * Windows 8.1

Download:
 For download use a [release list](https://github.com/MrFufl4ik/FKMSActivator/releases), and download latest version.

Using:
  1. Run `FKMSActivator.exe`
  2. Wait for the program to complete

# Complinig (only LINUX)
Requirement:
  1. `git`
  2. `mingw64`

Install requirement (Arch Linux based example): `pacman -S git mingw64`

Cloning repository: `git clone https://github.com/MrFufl4ik/FKMSActivator.git`

There are two ways after that:
  * Execute `makefile.sh`
  * Execute `x86_64-w64-mingw32-windres adminAccess.rs -o adminAccess.o и x86_64-w64-mingw32-g++ --static adminAccess.o main.cpp -o FKMSActivator.exe` in code folder
