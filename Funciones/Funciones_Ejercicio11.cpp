#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

void Tiempo(int,int&,int&,int&);

int messi(){

    int totalSeg,horas,minutos,seg;

    cout<<"Digite el numero total de segundos"<<endl;
    cin>>totalSeg;

    Tiempo(totalSeg,horas,minutos,seg);

    cout<<"\nTiempo equivalente a la cantidad de segundos digitados: "<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<minutos<<endl;
    cout<<"Segundos: "<<seg<<endl;

    return 0;
}

void Tiempo(int totalSeg, int& horas, int& minutos,int& segundos){

    horas=totalSeg/3600;
    totalSeg=totalSeg%3600;
    minutos=totalSeg/60;
    segundos=totalSeg%60;


}