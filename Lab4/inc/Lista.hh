#ifndef LISTA_HH
#define LISTA_HH

#include "iLista.hh"
#include "iTestowany.hh"
#include <cstdlib>

class Lista : public iLista ,
			  public iTestowany {
public:
	void add(int wartosc);  	//dodaje element do listy
	void remove();	//usuwa element z listy
	int size();   //zwraca aktalny rozmiar listy
	void find(int Szkana);	  
	void wykonaj_test(int ilosc);		//procedura testowa

	Lista();
private:
	struct Element{
		Element *nastepny;
		int wartosc;
		Element(){nastepny = NULL;}
	};		
	Element *pierwszy; //wskaznik na pierwszy element
	int rozmiar;
};

#endif