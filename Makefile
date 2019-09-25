# MakeFile to build the Sample US CENSUS Name Data lookup program 
# For CSC3004 Software Development
# C++ compiler to use
CC= g++

#For Optimization
#CFLAGS= -O2
#For debugging
CFLAGS= -std=c++14

RM= /bin/rm -f

all: main

dataEntry.o: dataEntry.cpp dataEntry.h
	$(CC) $(CFLAGS) dataEntry.cpp -c

dataLookup.o: dataLookup.cpp dataLookup.h dataEntry.h
	$(CC) $(CFLAGS) dataLookup.cpp -c

extraFunctions.o: extraFunctions.cpp extraFunctions.h
	$(CC) $(CFLAGS) extraFunctions.cpp -c

main.o: main.cpp dataEntry.h dataLookup.h extraFunctions.h
	$(CC) $(CFLAGS) main.cpp -c

main: main.o dataEntry.o dataLookup.o extraFunctions.o
	$(CC) $(CFLAGS) main.o dataEntry.o dataLookup.o extraFunctions.o -o main

clean:
	rm -f *.o  main
