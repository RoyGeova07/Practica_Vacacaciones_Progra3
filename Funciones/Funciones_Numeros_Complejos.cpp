#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define Roy main

using namespace std;

struct complejo
{
    
    float real,imaginaria;

}z1,z2;

void pedirDatos();
complejo suma(complejo,complejo);
void Muestra(complejo);

int Roy(){

    pedirDatos();

    complejo x=suma(z1,z2);

    Muestra(x);


    return 0;
}

void pedirDatos(){

    cout<<"Digite los datos del primer numero complejo: "<<endl;
    cout<<"Parte real: ";
    cin>>z1.real;
    cout<<"Parte imaginaria: ";
    cin>>z1.imaginaria;

    cout<<"\nDigite los datos del primer numero complejo: "<<endl;
    cout<<"Parte real: ";
    cin>>z2.real;
    cout<<"Parte imaginaria: ";
    cin>>z2.imaginaria;


}

complejo suma(complejo z1, complejo z2){

    z1.real+=z2.real;
    z1.imaginaria +=z2.imaginaria;

    return z1;

}

void Muestra(complejo x){

    cout<<"\nRESULTADO DE LA SUMA: "<<x.real<<" , "<<x.imaginaria<<endl;

    
}