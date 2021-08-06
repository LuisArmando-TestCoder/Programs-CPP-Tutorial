echo off

echo Executing at %0

echo . . .

echo A: Creating "programs/p%100/p%1%20/p%1%2%3/a.cpp" if needed

py utils/generateProgram.py %1 %2 %3

echo . . .

echo B: Compiling "programs/p%100/p%1%20/p%1%2%3/a.cpp"

g++ -std=c++0x -o programs/p%100/p%1%20/p%1%2%3/a programs/p%100/p%1%20/p%1%2%3/a.cpp

echo . . .

echo C: Starting "programs/p%100/p%1%20/p%1%2%3/a.exe"

echo . . .

start programs/p%100/p%1%20/p%1%2%3/a.exe
