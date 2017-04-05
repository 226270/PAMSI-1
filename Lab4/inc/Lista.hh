#ifndef LISTA_HH
#define LISTA_HH

#include "iLista.hh"
#include "iTestowany.hh"
#include <cstdlib>

class Lista : public iLista ,
			  public iTestowany {
public:
	void add(int Element , int Pozycja);  //dodaje element do listy
	void remove(int Pozycja);			  //usuwa element z listy
	int  get(int Pozycja);			   	  //zwraca wartosc (int)
	int  size();				 	 	  //zwraca aktalny rozmiar listy
	int  find(int Szukana_wartosc);		  //zwraca pozycje szukanej wartosci 
}

#endif