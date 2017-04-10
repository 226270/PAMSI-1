#include <iostream>
#include <cstdlib>
#include "Stos.hh"


using namespace std;	

Stos::Stos(int rozmiar){  						//konstruktor
	ROZMIAR = rozmiar;
	GORNY = 0;
	MOJ_STOS = new int [ROZMIAR];
}


///////////////////////////////////////////////////////////////////
void Stos::push(int wartosc){   //dodaje element na gore stosu	

	if (GORNY <= ROZMIAR){
		MOJ_STOS[GORNY++]=wartosc;
	}

}


///////////////////////////////////////////////////////////////
void Stos::pop(){	 //usuwa element z gory stosu
    
    if (GORNY != 0){
		GORNY--;
    }
    else{
        cout << "Stos pusty!";
    }
}


////////////////////////////////////////////////////////////////////
void Stos::size(){				 			//wyswietla aktalny rozmiar stosu
	cout << "\nW stosie znajduje sie  "<<GORNY<<" elementow"<<endl;
}


////////////////////////////////////////////////////////////////////
void Stos::show(){							//wyswietla stos
	cout << "\nKolejne elementy stosu to : "<<endl;
	for(int i=0 ; i<= GORNY ; i++){
		cout << MOJ_STOS[i] << " ";
	}
}

///////////////////////////////////////////////////////////////////////////
int Stos::gorny() {
	if (GORNY != 0) { //jeżeli są elementy na stosie
		return MOJ_STOS[GORNY - 1]; //zwraca wartość górnego elementu stosu
	}
	return -1;
}


//////////////////////////////////////////////////////////////////////////
void Stos::find(int Szukana) {
	int ile_this = this->GORNY; 
	Stos *POMOCNY = new Stos(this->ROZMIAR); 

	for (int i = 1; i <= ile_this; i++) {
		POMOCNY->push(this->gorny()); 
		this->pop();		
		if (POMOCNY->gorny() == Szukana) { 
			for (int j = POMOCNY->ROZMIAR; j > 0; j--) { 
				this->push(POMOCNY->gorny());
				POMOCNY->pop();
			}
		}
	}
}

////////////////////////////////////////////////////////////////
void Stos::wykonaj_test(int ilosc){			//procedura testowa
	push(1);
	for (int i = 1; i < ilosc; ++i){
		push(i+1);
	}

	find(1);

}			 

