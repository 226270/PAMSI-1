#ifndef KOLEJKA_HH
#define KOLEJKA_HH

#include "iKolejka.hh"
#include "iTestowany.hh"
#include <cstdlib>

class Kolejka : public iKolejka,
				public iTestowany {
public:
	Kolejka(int rozmiar);				 //konstruktor

	void push(int wartosc);			 //dodaje element na tyl Kolejki
	void pop();				 //usuwa element z przodu Kolejki
	void size();			 //zwraca aktalny rozmiar kolejki
	void find(int Szukana);			 //szuka elementu w kolejce
	void show();			 //wyswietla stos
	int pierwszy();
	void wykonaj_test(int ilosc);	 //procedura testowa
private:
	int *MOJA_KOLEJKA;
	int ROZMIAR;
	int GLOWA;
	int OGON;
	int DLUGOSC;
};

#endif