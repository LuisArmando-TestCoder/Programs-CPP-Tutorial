echo off

echo Executing at %0

set index=%1
set baseFolders=programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%

echo If non existent, creating %baseFolders%/program.cpp

py utils/generateProgram.py %index:~0,1% %index:~1,1% %index:~2,1%

echo Compiling C++ code at %baseFolders%/program.cpp

g++ -std=c++2a -Wall -O2 -o %baseFolders%/program -I %baseFolders%/head %baseFolders%/*.cpp

echo Starting %baseFolders%/program.exe

start %baseFolders%/program.exe
