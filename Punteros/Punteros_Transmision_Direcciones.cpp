#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;

#define roy main

void intercambio(float*,float*);

int roy(){

    float num=20.8,num2=6.68;

    cout<<"Primer Numero: "<<num<<endl;
    cout<<"Segundo Numero: "<<num2<<endl;

    intercambio(&num,&num2);//se intercambian los valores con el aspersar " & "

    cout<<"\n\nDespues del intercambio: ";
    cout<<"Primer Numero: "<<num<<endl;
    cout<<"Segundo Numero: "<<num2<<endl;
    
}

void intercambio(float *direccion1,float *direccion2){

    float aux;

    aux=*direccion1;
    *direccion1=*direccion2;
    *direccion2=aux;

}