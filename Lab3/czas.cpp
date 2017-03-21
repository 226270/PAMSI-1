// Rafał Perużyński
// 226266
// PAMSI 


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "czas.hh"
using namespace std;	


void Czas::CzasStart(){
	cout.setf(ios::fixed); //notacja zwykla, czyli nie wywali wyniku typu 1.175000e+003
	cout.precision(8); //liczba miejsc po przecinku, dokladnosc naszego wyniku
	start=clock(); //zapisanie Czasu startu mierzenia
}


void Czas::CzasStop(){
	koniec=clock();//zapisanie konca mierzenia
}


void Czas::IleTrwalo(){
	roznica=(koniec-start)/(double)CLOCKS_PER_SEC;     //obliczenie roznicy, czyli Czasu wykonania
	cout<<"Czas wykonania: "<<roznica<<endl;		   //wyswietl czs wykonania	
}