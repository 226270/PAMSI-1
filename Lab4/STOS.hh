#ifndef STOS_HH
#define STOS_HH 



class Stos : public iStos {
public:

	void push( int Element); //dodaje element na gore stosu	
	void pop();				 //usuwa element z gory stosu
	int size();				 //zwraca aktalny rozmiar stosu

}

#endif