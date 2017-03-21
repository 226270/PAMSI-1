#
#	TO SA OPCJE DLA KOMPILACJI
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++11

__start__: Program
	./Program

Program: main.o tablica.o czas.o
	g++ -Wall -pedantic -o Program main.o\
		tablica.o czas.o

main.o: main.cpp czas.hh tablica.hh
	g++ ${CPPFLAGS} -o main.o main.cpp

czas.o: czas.cpp czas.hh
	g++ ${CPPFLAGS} -o czas.o czas.cpp

tablica.o: tablica.cpp tablica.hh
	g++ ${CPPFLAGS} -o tablica.o tablica.cpp

clean: rm -f *.o Program