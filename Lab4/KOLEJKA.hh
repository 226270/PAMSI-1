#ifndef KOLEJKA_HH
#define KOLEJKA_HH


class Kolejka : public iKolejka {
public:

	void push( int Element); //dodaje element na tyl Kolejki
	void pop();				 //usuwa element z przodu Kolejki
	int size();				 //zwraca aktalny rozmiar kolejki

}

#endif