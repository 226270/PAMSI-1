#ifndef LISTA_HH
#define LISTA_HH

#include "iLista.hh"
#include "iTestowany.hh"
#include <cstdlib>

class Lista : public iLista ,
			  public iTestowany {
public:
	void add();  				//dodaje element do listy
	void remove();			  	//usuwa element z listy
	void size();		 	 	  //zwraca aktalny rozmiar listy
	void find();				  //zwraca pozycje szukanej wartosci 

	void wykonaj_test();		//procedura testowa

};

#endif