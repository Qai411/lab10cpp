#!bin/sh

g++ -std=c++17 -c readPoints.cpp

g++ -std=c++17 -c readLines.cpp

g++ -std=c++17 -c printLineByCoords.cpp

g++ -std=c++17 -c getStabbedLines.cpp

g++ -std=c++17 -c testStabbedLonePorg.cpp

g++ -std=c++17 testStabbedLonePorg.o readPoints.o readLines.o printLineByCoords.o getStabbedLines.o testStabbedLonePorg.o

