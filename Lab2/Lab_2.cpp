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
	int wypisz(int indeks);					//odczytuje z tablicy (jeden element)
	void wypisz_tablice ();						//wypisuje calo tablice
	Tablica(int rozmiar);
private:
	//atrybuty
	int	aktualny_rozmiar;
	int *tablica;
	//metody
	int * powieksz(int stara_tablica[], int nowy_rozmiar);			//powieksza tablice	
//	Tablica pomniejsz(int stara_tablica[]] int rozmiar);		//zmiejsza tablice

};


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
		tablica = powieksz(tablica, 2*indeks);
		tablica[indeks] = wartosc;
	}
}

int * Tablica::powieksz(int stara_tablica[], int nowy_rozmiar){  //nowy_rozmiar to rozmiar jaki 
	int * nowa_tablica = new int[nowy_rozmiar];					   //jaki chce osiagnac po powiekszeniu
	aktualny_rozmiar = nowy_rozmiar;

	for(int i = 0; i<aktualny_rozmiar; i++){
		nowa_tablica[i] = stara_tablica[i];
	}

	delete [] stara_tablica;

	return nowa_tablica;
}


int main(){
	//testowanie 
	Tablica t1(10);
	int ile_wpisac = 40960;
	int ROZMIAR;
	
	ROZMIAR = t1.zwroc_rozmiar();
 	cout << "ROZMIAR : " << ROZMIAR << endl;


	for (int i = 0; i < ile_wpisac ; ++i)
	{
		t1.zapisz(i , 7);
	}


	t1.wypisz_tablice();
	ROZMIAR = t1.zwroc_rozmiar();
 	cout << "ROZMIAR : " << ROZMIAR << endl;
	
	cout<< "THE END"<< endl;
	return 0;
}






/*

 w domu sprawdzic jaka roznica jak zwiekszam o 1 albo jak wiekszam dwukrottnie

N                |     T
potegi dziesiatki|	czas wypelniania
to 10 elementow	 |

tworzone tablice maja rozmiar 10

*/