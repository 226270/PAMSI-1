#include "Kolejka.hh"
#include <iostream>
#include <cstdlib>


using namespace std;	

Kolejka::Kolejka(int rozmiar){  						//konstruktor
	ROZMIAR = rozmiar;
	OGON=0;
	GLOWA=0;
	DLUGOSC=0;
	MOJA_KOLEJKA = new int [ROZMIAR];
}

///////////////////////////////////////////////////////////////////
void Kolejka::push(int wartosc){
	if (OGON < ROZMIAR) { 
		DLUGOSC = GLOWA + OGON++; //  i jest sumą liczby elem między ogonem a głową
		if (DLUGOSC >= ROZMIAR) {
			DLUGOSC = DLUGOSC - ROZMIAR; // zapisuje od nowego końca, czyli od początku
		}
		MOJA_KOLEJKA[DLUGOSC] = wartosc; // przypisanie elementu
	}
}

///////////////////////////////////////////////////////////////////
void Kolejka::pop() {
	if (OGON != 0) { // jeśli znajdują się elementy
		OGON--;
		GLOWA++;
		if (GLOWA == ROZMIAR) {
			GLOWA = 0;
		}
	}
}

//////////////////////////////////////////////////////////////////
int Kolejka::pierwszy() {
	if (OGON == 0) {
		return -1;
	}
	return MOJA_KOLEJKA[GLOWA];
}


///////////////////////////////////////////////////////////////////
void Kolejka::find(int Szukana) {
	int POMOCNA = GLOWA;

	for (int i = 1; i <= OGON; i++) {
		if (pierwszy() == Szukana) {
			GLOWA = POMOCNA;
		}
		GLOWA++;
	}
	GLOWA = POMOCNA;
}


////////////////////////////////////////////////////////////////////
void Kolejka::size(){				 			//wyswietla aktalny rozmiar Kolejkau
	cout << "\nW Kolejce znajduje sie  "<<DLUGOSC<<" elementow"<<endl;
}


////////////////////////////////////////////////////////////////////
void Kolejka::show(){							//wyswietla Kolejka
	cout << "Kolejne elementy Kolejki to : "<<endl;
	for(int i=0 ; i < DLUGOSC ; i++){
		cout << MOJA_KOLEJKA[i] << " ";
	}
}



////////////////////////////////////////////////////////////////
void Kolejka::wykonaj_test(int ilosc){			//procedura testowa
	for (int i = 0; i < ilosc; ++i){
		push(i+1);
	}

	find(1);

}			 
			 

