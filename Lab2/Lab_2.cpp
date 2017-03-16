// Rafał Perużyński
// 226266
// PAMSI / Lab2


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Tablica
{
public:
	//metody
	int zwroc_rozmiar();  						//zwraca rozmiar
	void zapisz(int indeks , int wartosc);		//zapisje w tablicy
	int wypisz(int indeks);						//odczytuje z tablicy (jeden element)
	void wypisz_tablice ();						//wypisuje calo tablice
	//konstruktor
	Tablica(int rozmiar);

private:
	//atrybuty
	int	aktualny_rozmiar;
	int *tablica;
	//metody
	int * powieksz(int stara_tablica[], int nowy_rozmiar);			//powieksza tablice	
//	int * pomniejsz(int stara_tablica[]] int rozmiar);		         //zmiejsza tablice

};



//             ///////////////////
//                CIAŁA METOD
//			/////////////////////////
Tablica::Tablica(int rozmiar){
	if ( rozmiar > 0 ){
		tablica = new int[rozmiar];
		aktualny_rozmiar=rozmiar;
	}
	else 
		cout << "NIEPOPRAWNY ROZMIAR !" << endl;	
}

int Tablica :: zwroc_rozmiar (){
	if ( aktualny_rozmiar > 0 ){
		return aktualny_rozmiar;
	}
	else{ 
		cout << "NIEPOPRAWNY ROZMIAR !" << endl;
		return 0;
	}
}


int Tablica::wypisz (int indeks){
	if ( indeks < aktualny_rozmiar){
		return tablica[indeks];
	}
	else{ 
		cout << "NIE MOZNA ODCZYTAC || WYJECHALES POZA TABLICE" << endl;
		return 0;
	} 
}


void Tablica::wypisz_tablice (){
	for (int i = 0; i < aktualny_rozmiar; ++i)
	{
		cout <<tablica[i] << "\t" ;
	}
	cout << endl;
}


void Tablica::zapisz (int indeks , int wartosc){
	if ( indeks < aktualny_rozmiar)  //jesli wszsytko ok
		tablica[indeks] = wartosc;
	else if (indeks < 0){ // jesli poza tablica
		cout << "NIE MOZNA ZAPISAC || WYJECHALES POZA TABLICE" << endl;
	}
	else {
		tablica = powieksz(tablica, indeks*2); // TUTAJ WSPISUJESZ ALBO indeks+1 ALBO indeks*2
		tablica[indeks] = wartosc;
	}
}

int * Tablica::powieksz(int stara_tablica[], int nowy_rozmiar){  //nowy_rozmiar to rozmiar jaki 
	int * nowa_tablica = new int[nowy_rozmiar];					   //jaki chce osiagnac po powiekszeniu
	
	for(int i = 0; i<aktualny_rozmiar; i++){
		nowa_tablica[i] = stara_tablica[i];
	}
	aktualny_rozmiar = nowy_rozmiar;

	delete [] stara_tablica;

	return nowa_tablica;
}




/////////////////////////////////////////////////////////////
int main(){
	//testowanie 
	Tablica t1(10);
	int ile_wpisac = 1000000; //ile elementow chce wpisac do tablicy
	int ROZMIAR;
	
	//sprawdzam czy poczatkowy rozmiar na pewno jest rowny 10
	ROZMIAR = t1.zwroc_rozmiar();
 	cout << "ROZMIAR : " << ROZMIAR << endl;

	double roznica;
	cout.setf(ios::fixed); //notacja zwykla, czyli nie wywali wyniku typu 1.175000e+003
	cout.precision(8); //liczba miejsc po przecinku, dokladnosc naszego wyniku
	clock_t start, koniec; //inicjacja zmiennych zegarowych

	start=clock(); //zapisanie czasu startu mierzenia



	//wypelnianie tablicy o kolejne elementy
	for (int i = 0; i < ile_wpisac ; ++i)
	{
		t1.zapisz(i , 7);
	}


	//sprawdzam rozmiar tablicy po uzupelnieniu
	ROZMIAR = t1.zwroc_rozmiar();
 	cout << "ROZMIAR : " << ROZMIAR << endl;

 	koniec=clock();//zapisanie konca mierzenia
	roznica=(koniec-start)/(double)CLOCKS_PER_SEC;//obliczenie roznicy, czyli czasu wykonania
	cout<<"Czas wykonania: "<<roznica<<endl;
	
	return 0;
}