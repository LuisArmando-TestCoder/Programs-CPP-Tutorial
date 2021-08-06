echo off

echo Executing at %0

echo . . .

set index=%1

echo A: Creating "programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%/program.cpp" if needed

py utils/generateProgram.py %index:~0,1% %index:~1,1% %index:~2,1%

echo . . .

echo B: Compiling "programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%/program.cpp"

g++ -std=c++0x -o programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%/program programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%/program.cpp

echo . . .

echo C: Starting "programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%/program.exe"

echo . . .

start programs/%index:~0,1%00/%index:~0,1%%index:~1,1%0/%index:~0,1%%index:~1,1%%index:~2,1%/program.exe
