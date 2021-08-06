echo off

echo Executing at %0

echo . . .

echo A: Compiling "programs/p%100/p%1%20/p%1%2%3/a.cpp"

g++ -std=c++0x -o programs/p%100/p%1%20/p%1%2%3/a programs/p%100/p%1%20/p%1%2%3/a.cpp

echo . . .

echo B: Starting "programs/p%100/p%1%20/p%1%2%3/a.exe"

echo . . .

start programs/p%100/p%1%20/p%1%2%3/a.exe
