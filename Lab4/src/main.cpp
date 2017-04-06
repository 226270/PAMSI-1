// Rafał Perużyński
// 226266
// PAMSI 


#include "Zegar.hh"
#include "Stos.hh"
#include "Kolejka.hh"

using namespace std;



/////////////////////////////////////////////////////////////
int main(){

	// TWORZE ZMIENNA DO POMIARU CZASU
	Zegar Stoper;
	// TWORZE OBIEKT
	Stos TestowanyObiekt;


	// PROCEDURA TESTOWA
	Stoper.ZmierzCzas(TestowanyObiekt);
	
	return 0;
}