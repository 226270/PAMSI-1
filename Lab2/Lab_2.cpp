#include <iostream>
#include <cstdlib>
using namespace std;


class tab_dynamic
{
public:
	void POKAZ_ROZMIAR(tab_dynamic tab);  						//zwraca rozmiar
	tab_dynamic ZAPISZ(int indeks , int wartosc);				//zapisje w tablicy
	tab_dynamic ODCZYTAJ(int indeks , int wartosc);				//odczytuje z tablicy

private:
	int	AKTUALNY_ROZMIAR  ;										//aktualny rozmiar tablicy
	int TABLICA [];						
	tab_dynamic POWIEKSZ(tab_dynamic tab, int rozmiar);			//powieksza tablice	
	tab_dynamic POMNIEJSZ(tab_dynamic tab, int rozmiar);		//zmiejsza tablice

};



void tab_dynamic :: POKAZ_ROZMIAR ( tab_dynamic tab ){
	
	cout << "Aktualny rozmiar tablicy to: " << tab.AKTUALNY_ROZMIAR << endl;
}


//tab_dynamic tab_dynamic :: ZAPISZ (int indeks, int wartosc){




int main(){

	tab_dynamic *tabliczka = new tab_dynamic[10];

	return 0;
}






/*

 w domu sprawdzic jaka roznica jak zwiekszam o 1 albo jak wiekszam dwukrottnie

N                |     T
potegi dziesiatki|	czas wypelniania
to 10 elementow

tworzone tablice maja rozmiar 10

*/