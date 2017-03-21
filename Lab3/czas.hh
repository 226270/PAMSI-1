// Rafał Perużyński
// 226266
// PAMSI 


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;	


class Czas
{

public:

	void CzasStart();		//rozpoczecie odmierzania czasu	
	void CzasStop();		//zakonczenie odmierzania czasu
	void IleTrwalo();		//na podstawie roznicy (koniec-start) wystwietla ile czasu minelo


private:
	clock_t start , koniec;
	double roznica;
	
};