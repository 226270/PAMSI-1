#ifndef iLista_HH
#define iLista_HH

/*
	interfejs iLista
*/

class iLista{
public:
	virtual void add() = 0;
	virtual void remove() = 0;
	virtual void size() = 0;
	virtual void find() = 0;
};

#endif