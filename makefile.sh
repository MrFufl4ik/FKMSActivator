#!/bin/bash

x86_64-w64-mingw32-windres adminAccess.rs -o adminAccess.o #res file
x86_64-w64-mingw32-g++ --static adminAccess.o main.cpp -o FKMSActivator.exe
