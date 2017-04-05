#
#  To sa opcje dla kompilacji
#
CPPFLAGS = -c -g -Iinc -Wall -pedantic

Testownik.out: obj/main.o obj/iTestowany.o obj/iZegar.o obj/Zegar.o obj/iLista.o obj/Lista.o obj/iStos.o obj/Stos.o obj/iKolejka.o obj/Kolejka.o
	g++ -Wall -pedantic -o Testownik.out obj/main.o obj/iTestowany.o obj/iLista.o obj/Lista.o obj/iStos.o obj/Stos.o obj/iKolejka.o obj/Kolejka.o obj/iZegar.o obj/Zegar.o

obj/main.o: src/main.cpp inc/iTestowany.hh inc/iZegar.hh inc/Zegar.hh inc/iLista.hh inc/Lista.hh inc/iStos.hh inc/Stos.hh inc/iKolejka.hh inc/Kolejka.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/iTestowany.o: src/iTestowany.cpp inc/iTestowany.hh
	g++ ${CPPFLAGS} -o obj/iTestowany.o src/iTestowany.cpp

obj/iZegar.o: src/iZegar.cpp inc/iZegar.hh
	g++ ${CPPFLAGS} -o obj/iZegar.o src/iZegar.cpp

obj/Zegar.o: src/Zegar.cpp inc/Zegar.hh
	g++ ${CPPFLAGS} -o obj/Zegar.o src/Zegar.cpp

obj/iLista.o: src/iLista.cpp inc/iLista.hh
	g++ ${CPPFLAGS} -o obj/iLista.o src/iLista.cpp

obj/Lista.o: src/Lista.cpp inc/Lista.hh
	g++ ${CPPFLAGS} -o obj/Lista.o src/Lista.cpp

obj/iStos.o: src/iStos.cpp inc/iStos.hh
	g++ ${CPPFLAGS} -o obj/iStos.o src/iStos.cpp

obj/Stos.o: src/Stos.cpp inc/Stos.hh
	g++ ${CPPFLAGS} -o obj/Stos.o src/Stos.cpp

obj/iKolejka.o: src/iKolejka.cpp inc/iKolejka.hh
	g++ ${CPPFLAGS} -o obj/iKolejka.o src/iKolejka.cpp

obj/Kolejka.o: src/Kolejka.cpp inc/Kolejka.hh
	g++ ${CPPFLAGS} -o obj/Kolejka.o src/Kolejka.cpp

clean:
	rm -f obj/*.o Testownik.out