#include <iostream>
#include <conio.h>

using namespace std;

#define roy main

int roy(){

    int numeros[] ={1,2,3,4,5};

    int *direccion_numero;

    direccion_numero=numeros;

    for (int i = 0; i <5; i++)
    {
        
        //cout<<"Elemento del vector: ["<<i<<"]: "<<*direccion_numero++<<endl;
        cout<<"Posiciiones de memoria: "<<numeros[i]<< " es:  " <<direccion_numero++<<endl;

    }
    

    return 0;
}