echo off

echo Executing at %0

echo . . .

set index=%1
set baseFolders=programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%

echo A: Creating %baseFolders%/program.cpp if needed

py utils/generateProgram.py %index:~0,1% %index:~1,1% %index:~2,1%

echo . . .

echo B: Compiling %baseFolders%/program.cpp

g++ -std=c++0x -o %baseFolders%/program %baseFolders%/program.cpp

echo . . .

echo C: Starting %baseFolders%/program.exe

echo . . .

start %baseFolders%/program.exe
