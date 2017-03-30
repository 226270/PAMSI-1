
#ifndef iStos_HH
#define iStos_HH

/*
	interfejs iStos
*/

class iLista{
public:
	virtual void push() = 0;
	virtual void pop() = 0;
	virtual int size() = 0;
};

#endif