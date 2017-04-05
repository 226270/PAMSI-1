#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ZEGAR.hh"
using namespace std;	


void Zegar::CzasStart(){
	cout.setf(ios::fixed); //notacja zwykla, czyli nie wywali wyniku typu 1.175000e+003
	cout.precision(8); //liczba miejsc po przecinku, dokladnosc naszego wyniku
	poczatek_pomiaru=clock(); //zapisanie Czasu startu mierzenia
}


void Zegar::CzasStop(){
	koniec_pomiaru=clock();//zapisanie konca mierzenia
}


void Zegar::IleTrwalo(){
	czas_pomiaru=(koniec_pomiaru - poczatek_pomiaru)/(double)CLOCKS_PER_SEC;     //obliczenie roznicy, czyli Czasu wykonania
	cout<<"Czas wykonania: "<<czas_pomiaru<<endl;		  						 //wyswietl czs wykonania	
}

void Zegar::ZmierzCzas(iTestowany &Obiekt, int IloscPowtorzen){
	
	for (int i = 0; i < IloscPowtorzen; ++i){
		CzasStart();
		Obiekt.wykonaj_test();
		CzasStop();
		cout << "Pomiar nr: " << i << endl;
		IleTrwalo();
	}
}
