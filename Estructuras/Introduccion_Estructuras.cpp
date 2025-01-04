#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

#define messi main

using namespace std;

struct Persona
{
    
    char nombre[30];
    int edad;

}Persona1 = {"Roy", 17},
Persona2= {"Luis", 18},
Persona3;

//imprimir estos datos

int messi(){

    cout<<"Nombre de la persona1: "<<Persona1.nombre<<endl;
    cout<<"Edad de la persona1: "<<Persona1.edad<<endl;

    cout<<"\nNombre de la persona2: "<<Persona2.nombre<<endl;
    cout<<"Edad de la persona2: "<<Persona2.edad<<endl;

    //ahora vamos a pedir los datos de la persona3

    cout<<"\nDigite su nombre: ";
    cin.getline(Persona3.nombre, 30, '\n');

    cout<<"Digite su edad: ";
    cin>>Persona3.edad;

    cout<<"\nNombre de la persona3: "<<Persona3.nombre<<endl;
    cout<<"Edad de la persona3: "<<Persona3.edad<<endl;

    

    getch();
    return 0;
}




