#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define messi main

//busqueda binaria
int messi(){

    int numeros[]={1,2,3,4,5};
    int inf,sup,mitad,Dato;
    char bandera='F';

    Dato=4;

    //algoritmo de busqueda binaria
    inf=0;
    sup=5;

    while(inf<=sup){
        mitad=(inf+sup)/2;

        if(numeros[mitad]==Dato){
        bandera='V';
        break;

    }

    if(numeros[mitad]>Dato){

        sup=mitad;
        mitad=(inf+sup)/2;

    }

    if(numeros[mitad]<Dato){

        inf=mitad;
        mitad=(inf+sup)/2;

    }

    if(bandera=='V'){

        cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl; 

    }else if(bandera=='F'){

        cout<<"El numero no ha sido encontrado en el arreglo"<<endl;

    }

    }

        

    getch();
    return 0;
}