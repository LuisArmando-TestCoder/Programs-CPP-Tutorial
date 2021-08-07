echo off

echo Executing at %0

set index=%1
set baseFolders=programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%

echo A: Creating %baseFolders% and program.cpp, if needed

py utils/generateProgram.py %index:~0,1% %index:~1,1% %index:~2,1%

echo B: Compiling %baseFolders%/program.cpp

g++ -std=c++0x -o %baseFolders%/program %baseFolders%/program.cpp

echo C: Starting %baseFolders%/program.exe

start %baseFolders%/program.exe
