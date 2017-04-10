#include <iostream>
#include "Zegar.hh"
#include "Tablica.hh"
#include "Stos.hh"
#include "Kolejka.hh"
#include "Lista.hh"


using namespace std;



/////////////////////////////////////////////////////////////
int main(){


	// TWORZE ZMIENNA DO POMIARU CZASU
	Zegar Stoper;
	
	// ZMIENNA POMOCNICZA
	
	int ilosc_pomiarow = 20; /*
	int poczatkowy_rozmiar = 1000000;
	int wielkosc_problemu =  1000000;
	*/
	int wielkosc_problemu , poczatkowy_rozmiar;
	cout << "PODAJ WIELKOSC PROBLEMU : ";
	cin >> wielkosc_problemu;
	poczatkowy_rozmiar=wielkosc_problemu;


		// TABLICA (2n)
		cout << "\nTABLICA" <<endl;
		for (int i = 0; i < ilosc_pomiarow; ++i){
			Tablica Tab1(1);
			Stoper.ZmierzCzas(Tab1, wielkosc_problemu);
		}

		// STOS
		cout << "\nSTOS"<<endl;
		for (int i = 0; i < ilosc_pomiarow; ++i){
			Stos S1(poczatkowy_rozmiar);
			Stoper.ZmierzCzas(S1 , wielkosc_problemu);
		}

		// KOLEJKA
		cout << "\nKOLEJKA" << endl;
		for (int i = 0; i < ilosc_pomiarow; ++i){
			Kolejka K1(poczatkowy_rozmiar);
			Stoper.ZmierzCzas(K1 , wielkosc_problemu);
		}
		
		// LISTA
		cout << "\nLISTA" << endl;
		for (int i = 0; i < ilosc_pomiarow; ++i){
			Lista L1;
			Stoper.ZmierzCzas(L1 , wielkosc_problemu);
		}
	return 0;
}