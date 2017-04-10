#ifndef TABLICA_HH
#define TABLICA_HH

#include "iTablica.hh"
#include "iTestowany.hh"
#include <cstdlib>


class Tablica : public iTablica,
				public iTestowany{
public:
	int wypisz(int indeks);		//odczytuje z tablicy (jeden element)
	int zwroc_rozmiar();  		//zwraca rozmiar
	void zapisz(int indeks , int wartosc);	//zapisje w tablicy	
	void wypisz_tablice ();	//wypisuje calo tablice	
	void wykonaj_test(int ilosc);	//procedura testowa
	Tablica(int rozmiar);	//konstruktor

private:	
	int	aktualny_rozmiar;
	int *tablica;
	int *powieksz(int stara_tablica[], int nowy_rozmiar);			//powieksza tablice	

};

#endif