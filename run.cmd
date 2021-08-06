echo off
echo The following commands are executing at %~dp0

echo g++ -std=c++0x -o programs/p%100/p%1%20/p%1%2%3/a programs/p%100/p%1%20/p%1%2%3/a.cpp
g++ -std=c++0x -o programs/p%100/p%1%20/p%1%2%3/a programs/p%100/p%1%20/p%1%2%3/a.cpp

echo start programs/p%100/p%1%20/p%1%2%3/a.exe
start programs/p%100/p%1%20/p%1%2%3/a.exe
