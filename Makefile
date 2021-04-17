CC = g++
C11STD = -std=c++11
DEBUG = -g
CFLAGS = $(C11STD) -Wall -c $(DEBUG)
LFLAGS = $(C11STD) -Wall $(DEBUG)
OBJS = readPoints.o readLines.o printLinesByCoords.o\
       
mainProg : $(OBJS)
$(CC) $(LFLAGS) $(OBJS) -o mainProg
Funct1.o : funct1.h Funct1.cpp funct2.h funct3.h
$(CC) $(CFLAGS) Funct1.cpp