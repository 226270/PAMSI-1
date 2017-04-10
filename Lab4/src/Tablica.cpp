#include <iostream>
#include <cstdlib>
#include "Tablica.hh"


using namespace std;

Tablica::Tablica(int rozmiar){
	tablica=new int [rozmiar];
	aktualny_rozmiar=rozmiar;
}

//////////////////////////////////////////////////////

int Tablica :: zwroc_rozmiar (){
	if ( aktualny_rozmiar > 0 ){
		return aktualny_rozmiar;
	}
	else{ 
		cout << "NIEPOPRAWNY ROZMIAR !" << endl;
		return 0;
	}
}

////////////////////////////////////////////////////////

int Tablica::wypisz (int indeks){
	if ( indeks < aktualny_rozmiar){
		return tablica[indeks];
	}
	else{ 
		cout << "NIE MOZNA ODCZYTAC || WYJECHALES POZA TABLICE" << endl;
		return 0;
	} 
}

/////////////////////////////////////////////////////////////

void Tablica::wypisz_tablice (){
	for (int i = 0; i < aktualny_rozmiar; ++i)
	{
		cout <<tablica[i] << "\t" ;
	}
	cout << endl;
}

//////////////////////////////////////////////////////////////

void Tablica::zapisz (int indeks , int wartosc){
	if ( indeks < aktualny_rozmiar) 	 //jesli wszsytko ok
		tablica[indeks] = wartosc;
	else if (indeks < 0){ 				// jesli poza tablica
		cout << "NIE MOZNA ZAPISAC || WYJECHALES POZA TABLICE" << endl;
	}
	else {
		tablica = powieksz(tablica, indeks*2); // TUTAJ WSPISUJESZ ALBO indeks+1 ALBO indeks*2
		tablica[indeks] = wartosc;
	}
}

//////////////////////////////////////////////////////////////////

int * Tablica::powieksz(int stara_tablica[], int nowy_rozmiar){  	//nowy_rozmiar to rozmiar jaki 
	int * nowa_tablica = new int[nowy_rozmiar];					   //jaki chce osiagnac po powiekszeniu
	
	for(int i = 0; i<aktualny_rozmiar; i++){
		nowa_tablica[i] = stara_tablica[i];
	}
	aktualny_rozmiar = nowy_rozmiar;

	delete [] stara_tablica;

	return nowa_tablica;
}

///////////////////////////////////////////////////////////////////

void Tablica::wykonaj_test(int ilosc){
	for (int i = 0; i < ilosc ; ++i)
	{
		zapisz(i , 7);   
	}
} 

////////////////////////////////////////////////////////////////////

