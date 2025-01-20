#include <iostream>
#include <conio.h>
#include <limits>
#include<stdlib.h> //new y delete

using namespace std;

#define roy main

//new =  este reserva un numero de bytes solicitado por la declaracion
//delete = libera un bloque de bytes reservado con anterioridad

void pedirNotas();
void mostrarNotas();

int numCalificaciones,*calif;

int roy(){

    pedirNotas();
    mostrarNotas();

    //liberando el espacio en bytes que se reservo con new
    delete[] calif;

    return 0;
}

void pedirNotas(){

    cout<<"Digite el numero de calificaciones: ";
    cin>>numCalificaciones;

    calif=new int[numCalificaciones];//se crea el arreglo de tipo dinamico

    for (int i = 0; i < numCalificaciones; i++)
    {
        
        cout<<"Ingrese una nota: ";
        cin>>calif[i];

    }
    

}

void mostrarNotas(){

    cout<<"\nMostrando notas del usuario: "<<endl;
    for (int i = 0; i < numCalificaciones; i++)
    {
        
        cout<<calif[i]<<endl;

    }
    

}