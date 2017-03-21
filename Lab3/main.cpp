// Rafał Perużyński
// 226266
// PAMSI 


#include "czas.hh"
#include "tablica.hh"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



/////////////////////////////////////////////////////////////
int main(){

	// TWORZE ZMIENNA DO POMIARU CZASU
	Czas Stoper;
	// TWORZE OBIEKT
	Tablica obiekt;


	// PROCEDURA TESTOWA
	Stoper.CzasStart();

	obiekt.Testuj();

	Stoper.CzasStop();

	Stoper.IleTrwalo();

	
	return 0;
}