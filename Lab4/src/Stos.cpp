#include <iostream>
#include <cstdlib>
#include "STOS.hh"


using namespace std;	

Stos::Stos(){  //konstruktor
	ROZMIAR = 0 ;
	MOJ_STOS = new int [ROZMIAR];
}

///////////////////////////////////////////////////////////////////
void Stos::push(){   //dodaje element na gore stosu	

 	ROZMIAR++;
 	int NOWY_STOS = new int [ROZMIAR];
	 	
 	for (int i = 0; i < ROZMIAR-1; ++i){
 		NOWY_STOS[i] = MOJ_STOS[i];
 	}
 	delete [] MOJ_STOS;
      
    MOJ_STOS = NOWY_STOS;
	MOJ_STOS[ROZMIAR-1]=ROZMIAR; // np element 5 stosu = 5
}


///////////////////////////////////////////////////////////////
void Stos::pop(){	 //usuwa element z gory stosu
    
    if (ROZMIAR>0){
        int NOWY_STOS = new int [ROZMIAR-1];
	 	
	 	for (int i = 0; i < ROZMIAR-1; ++i){
	 		NOWY_STOS[i] = MOJ_STOS[i];
	 	}

	 	delete [] MOJ_STOS;
        
        MOJ_STOS = NOWY_STOS;
        ROZMIAR--;
    }
    else{
        cout << "Stos pusty!";
    }
}


////////////////////////////////////////////////////////////////////
void Stos::size(){				 			//wyswietla aktalny rozmiar stosu
	cout << "\nW stosie znajduje sie  "<<ROZMIAR<<" elementow"<<endl;
}


////////////////////////////////////////////////////////////////////
void Stos::show(){							//wyswietla stos
	cout << " Kolejne elementy stosu to : "<<endl;
	for(int i=0 ; i < ROZMIAR ; i++){
		cout << MOJ_STOS[i] << " ";
	}
}


///////////////////////////////////////////////////////////////////
void Stos::find(int Szukana){
	if (MOJ_STOS[i]==Szukana){
		cout << "Wartosc zostala odnaleziona"<<endl;
	}
	else{
		pop();
		find(int Szukana);
	}
}


////////////////////////////////////////////////////////////////
void Stos::wykonaj_test(){			//procedura testowa

	int ile_wpisac;
	int poszukiwana;

	cout << "\nWitaj, oto test dla typu STOS";
	cout << "\nPodaj ile wpisac do stosu";
	cin >> ile_wpisac;
	
	for (int i = 0; i < ile_wpisac; ++i)
	{
		push();
	}

	size();

	cout << "Jakiej wartosci szukasz? :"<<endl;
	cin >> poszukiwana ;
	find(poszukiwana);

	size();
}			 

