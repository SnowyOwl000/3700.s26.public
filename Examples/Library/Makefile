CFLAGS = -c -I$(HOME)/Programming/include
LFLAGS = -L$(HOME)/Programming/lib
LIBS = -ldataStructures

libdataStructures.a: ../src/fraction.o
	ar r libdataStructures.a ../src/fraction.o
	ranlib libdataStructures.a
	
../src/fraction.o: ../src/fraction.cpp ../include/fraction.h
	g++ $(CFLAGS) -o ../src/fraction.o ../src/fraction.cpp

