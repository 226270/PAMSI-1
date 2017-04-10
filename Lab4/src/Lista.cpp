#include "Lista.hh"
#include <iostream>
#include <cstdlib>

using namespace std;

Lista::Lista(){
	rozmiar = 0;
	pierwszy = NULL;
}


void Lista::add(int liczba){  	//dodaje element do listy

	Element *nowy = new Element;
	nowy->wartosc = liczba ;

	if (pierwszy==NULL){
		pierwszy = nowy ;
	}
	else{
		nowy->nastepny = pierwszy; 		// ostatni element wskazuje na nasz nowy
		this->pierwszy = nowy; 		 	// ostatni nie wskazuje na nic
	}
	rozmiar++;

}

	
void Lista::remove(){	//usuwa element z listy

}


int Lista::size(){   //zwraca aktalny rozmiar listy
	return rozmiar;
}

/*

int Lista::find(int Szukana){	  		//zwraca pozycje szukanej wartosci 
	Element *pomocny = this->pierwszy;	// tworzymy pomocniczy wskaznik
	while (pomocny) {
		if (pomocny->wartosc == Szukana) { 	// porównujemy wartość każdego elementu
			return pomocny;
			cout << "ZNALAZLEM" << endl;
		}
		pomocny = pomocny->nastepny;			// sprawdzamy kolejny element
	}
	cout << "NIEZNALAZLEM" << endl;	

}
*/
void Lista::find(int Szukana){  // szukanie elementu

	Element *pomocny = this->pierwszy;   // wskaznik na pierwszy element

	while(pomocny){   // przeszukwanie listy
		if(pomocny -> wartosc == Szukana){     
			//cout << "Znaleziono warosc !" << endl;
			pomocny = NULL; 
		}
		else{    
			pomocny = pomocny -> nastepny;
		}
	}
}


void Lista::wykonaj_test(int ilosc){			//procedura testowa
	for (int i = 0; i < ilosc-1; ++i){
		add(i+1);
	}

	find(1);
}	