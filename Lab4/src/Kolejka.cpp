#include "Kolejka.hh"
#include <iostream>
#include <cstdlib>


using namespace std;	

Kolejka::Kolejka(){  						//konstruktor
	ROZMIAR = 0;
	MOJA_KOLEJKA = new int [ROZMIAR];
}

///////////////////////////////////////////////////////////////////
void Kolejka::push(){   //dodaje element na koniec kolejki

 	ROZMIAR++;
 	int *NOWA_KOLEJKA = new int [ROZMIAR];
	 	
 	for (int i = 0; i < ROZMIAR-1; ++i){
 		NOWA_KOLEJKA[i] = MOJA_KOLEJKA[i];
 	}
 	delete [] MOJA_KOLEJKA;
      
    MOJA_KOLEJKA = NOWA_KOLEJKA;
	MOJA_KOLEJKA[ROZMIAR-1]=ROZMIAR; // np element 5 Kolejki = 5
}


///////////////////////////////////////////////////////////////
void Kolejka::pop(){	 //usuwa element z pocztku kolejki
    
    if (ROZMIAR>0){
        int *NOWA_KOLEJKA = new int [ROZMIAR-1];
	 	
	 	for (int i = 0; i < ROZMIAR-1; ++i){
	 		NOWA_KOLEJKA[i] = MOJA_KOLEJKA[i+1];
	 	}

	 	delete [] MOJA_KOLEJKA;
        
        MOJA_KOLEJKA = NOWA_KOLEJKA;
        ROZMIAR--;
    }
    else{
        cout << "Kolejka pusta!";
    }
}


////////////////////////////////////////////////////////////////////
void Kolejka::size(){				 			//wyswietla aktalny rozmiar Kolejkau
	cout << "\nW Kolejce znajduje sie  "<<ROZMIAR<<" elementow"<<endl;
}


////////////////////////////////////////////////////////////////////
void Kolejka::show(){							//wyswietla Kolejka
	cout << "Kolejne elementy Kolejki to : "<<endl;
	for(int i=0 ; i < ROZMIAR ; i++){
		cout << MOJA_KOLEJKA[i] << " ";
	}
}


///////////////////////////////////////////////////////////////////
void Kolejka::find(int Szukana){
	if (MOJA_KOLEJKA[0]==Szukana){
		cout << "Wartosc zostala odnaleziona"<<endl;
	}
	else{
		pop();
		find(Szukana);
	}
}


////////////////////////////////////////////////////////////////
void Kolejka::wykonaj_test(){			//procedura testowa

	int ile_wpisac = 100000;
	//int poszukiwana;

	//cout << "\nWitaj, oto test dla typu Kolejka";
	//cout << "\nPodaj ile wpisac do Kolejkau  ";
	//cin >> ile_wpisac;
	
	for (int i = 0; i < ile_wpisac; ++i)
	{
		push();
	}

	size();

	show();

	//cout << "\nJakiej wartosci szukasz? :"<<endl;
	//cin >> poszukiwana ;
	//find(poszukiwana);
	find(1);

	size();
}			 

