#ifndef iLista_HH
#define iLista_HH

/*
	interfejs iLista
*/

class iLista{
public:
	virtual void add(int wartosc) = 0;
	virtual void remove() = 0;
	virtual int size() = 0;
	virtual void find(int Szukana) = 0;
};

#endif