#ifndef iStos_HH
#define iStos_HH

/*
	interfejs iStos
*/

class iStos {
public:
	virtual void push() = 0;
	virtual void pop() = 0;
	virtual void size() = 0;
	virtual void show() = 0;
	virtual void find() = 0;
};

#endif