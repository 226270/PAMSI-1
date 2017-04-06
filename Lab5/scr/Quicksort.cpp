/*

PRZESYLAM SAMO CIALO METODY QUICKSORT (A NIE CALY PROGRAM),
PONIEWAZ NIE POPRAWILEM PROGRAMU Z "SPRYTNA_TABLICA" DO WYMAGANEGO
FORMATU, CZYT. DZIEDZICZENIE INTERFACE, ICLOCK, ITABLICA, ITESTOWANY.

*/


#include <iostream>
using namespace std;
 
int Podziel(int poczatek, int koniec){ // dzieli tablice na dwie: 1 z wartosciami > pivot || 2 z wartosciami < pivot
	int pivot = tablica[((poczatek-koniec)/2)]; //wybieramy pivot (element srodkowy)
	int i = poczatek; //indeks poczatku tablicy
	int j = koniec;   //indeks konca tablicy
	int skrytka_na_zmienna; //zmienna do zamiany wartosci
	while (true) // petla nieskonczona - wychodzimy z niej tylko przez return j
		{
		while (tablica[j] > x) // dopoki elementy > pivot (sprawdza elementy "jadac" od konca)
			j--;
		while (tablica[i] < x) // dopoki elementy < pivot (sprawdza elementy "jadac" od poczatu)
			i++;
		if (i < j){ // gdy napotka na i < j zamieniamy miejscami 
			skrytka_na_zmienna = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = skrytka_na_zmienna; //zakonczylo zamiane
			i++;//leci po indeksach dalej
			j--;//leci po indeksach dalej
			}
		else //gdy przejedziemy cala tablice (i > j) zworacamy j jako srodek podzialu
			return j;
		}
}

 



void Quicksort(int poczatek, int koniec){
	int pivot;
	if (poczatek < koniec){
		pivot = Podziel(poczatek,koniec); //dzielimy tablice na dwie czesci; pivot oznacza punkt podzialu
		quicksort(poczatek,pivot); // wywolujemy rekurencyjnie quicksort dla pierwszej czesci tablicy ( wartosci < pivot)
		quicksort(pivot+1,koniec); // wywolujemy rekurencyjnie quicksort dla drugiej czesci tablicy	(wartosci > pivot)
	}
}
