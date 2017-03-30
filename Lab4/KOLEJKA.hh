#ifndef KOLEJKA_HH
#define KOLEJKA_HH

#include <iostream>

class iKolejka {


public:

	void push( int Element); //dodaje element na tyl Kolejki
	void pop();				 //usuwa element z przodu Kolejki
	int size();				 //zwraca aktalny rozmiar kolejki

}

#endif