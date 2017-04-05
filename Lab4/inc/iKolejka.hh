#ifndef iKolejka_HH
#define iKolejka_HH

/*
	interfejs iKolejka
*/

class iKolejka {
public:
	virtual void push() = 0;
	virtual void pop() = 0;
	virtual void size() = 0;
	virtual void show() = 0;
	virtual void find() = 0;
};

#endif