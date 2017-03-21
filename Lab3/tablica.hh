#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Tablica
{
public:
	
	int zwroc_rozmiar();  						//zwraca rozmiar
	int wypisz(int indeks);						//odczytuje z tablicy (jeden element)
	
	void zapisz(int indeks , int wartosc);		//zapisje w tablicy
	void wypisz_tablice ();						//wypisuje calo tablice
	
	void Testuj();								//procedura testowa
	
//	Tablica(int rozmiar);						//konstruktor
	Tablica();									//konstruktor
	
private:
	
	int	aktualny_rozmiar;
	int *tablica;
	int * powieksz(int stara_tablica[], int nowy_rozmiar);			//powieksza tablice	

};