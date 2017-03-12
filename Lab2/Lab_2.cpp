#include <iostream>
#include <cstdlib>
using namespace std;


class Tablica
{
public:
	//metody
	int zwroc_rozmiar();  						//zwraca rozmiar
	void zapisz(int indeks , int wartosc);				//zapisje w tablicy
	void wypisz(int indeks);			//odczytuje z tablicy
	void wypisz_tablice ();
	Tablica(int rozmiar);
private:
	//atrybuty
	int	aktualny_rozmiar;
	int *tablica;
	//metody
//	Tablica powieksz(Tablica tab, int rozmiar);			//powieksza tablice	
//	Tablica pomniejsz(Tablica tab, int rozmiar);		//zmiejsza tablice

};


Tablica::Tablica(int rozmiar){
	tablica = new int[rozmiar];
	aktualny_rozmiar=rozmiar;
	
}

int Tablica :: zwroc_rozmiar (){
	//cout << "Aktualny rozmiar tablicy to: " << aktualny_rozmiar << endl;
	return aktualny_rozmiar;
}


void Tablica::zapisz (int indeks , int wartosc){
	tablica[indeks] = wartosc;
}

void Tablica::wypisz (int indeks){
	int x;
	x=tablica[indeks];
	cout << x << endl;
}



void Tablica::wypisz_tablice (){
	for (int i = 0; i < aktualny_rozmiar; ++i)
	{
		cout <<tablica[i] << "\t" ;
	}
	cout << endl;
}


int main(){
	//testowanie 
	Tablica t1(10);
	int ROZMIAR = t1.zwroc_rozmiar();
 	cout << "ROZMIAR : " << ROZMIAR << endl;

	for (int i = 0; i < t1.zwroc_rozmiar() ; ++i)
	{
		cout << "Element "<< i << " zapisuje ";
		t1.zapisz(i , 5);
		cout << endl;
	}

	t1.wypisz_tablice();

	t1.wypisz(7);
	t1.wypisz(8);
	t1.wypisz(9);

	t1.wypisz(10);
	t1.wypisz(32);
	
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