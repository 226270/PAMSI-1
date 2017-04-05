#ifndef STOS_HH
#define STOS_HH 

#include "iStos.hh"
#include "iTestowany.hh"
#include <cstdlib>

class Stos : public iStos ,
			 public iTestowany {
public:
	void push();			 //dodaje element na gore stosu	
	void pop();				 //usuwa element z gory stosu
	void size();		     //pokazuje aktalny rozmiar stosu
	void find();			 //szuka elementu w stosie
	void show();			//wyswietla stos
	
	void wykonaj_test();	//procedura testowa

private:
	int *MOJ_STOS;
	int ROZMIAR;
};

#endif
