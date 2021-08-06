echo off

echo Executing at %0

echo . . .

echo A: Creating "programs/%100/%1%20/%1%2%3/program.cpp" if needed

py utils/generateProgram.py %1 %2 %3

echo . . .

echo B: Compiling "programs/%100/%1%20/%1%2%3/program.cpp"

g++ -std=c++0x -o programs/%100/%1%20/%1%2%3/program programs/%100/%1%20/%1%2%3/program.cpp

echo . . .

echo C: Starting "programs/%100/%1%20/%1%2%3/program.exe"

echo . . .

start programs/%100/%1%20/%1%2%3/program.exe
