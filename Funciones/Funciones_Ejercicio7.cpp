#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

int num1,num2,num3;
template <class datos>



void maximo(datos datos1,datos datos2, datos datos3){

    if((datos1>datos2) && (datos1>datos3)){

        cout<<"El dato mayor es: "<<datos1<<endl;

    }else if((datos2>datos1) && (datos2>datos3)){

        cout<<"El dato mayor es: "<<datos2<<endl;

    }else if((datos3>datos1) && (datos3>datos2)){

        cout<<"El dato mayor es: "<<datos3<<endl;


    }

}

void pedirDatos(){

    cout<<"Ingrese un numero: "<<endl;
    cin>>num1;
    cout<<"Ingrese otro numero: "<<endl;
    cin>>num2;
    cout<<"Ingrese otro numero: "<<endl;
    cin>>num3;

}

int messi(){

    pedirDatos();
    maximo(num1,num2,num3);

    return 0;
}