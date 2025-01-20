#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

struct Persona
{
    
    char nombre[30];
    int edad;
            
        // para poder almacenar un nombre y edad de una persona en la variable de tipo puntero
}persona, *puntero_persona = &persona;//apunta hacia la posicion donde guardamos los datos

void pedirDatos();
void mostrarDatos(Persona *);

int roy(){

    pedirDatos();
    mostrarDatos(puntero_persona);

    return 0;
}

void pedirDatos(){

    cout<<"Digite su nombre: ";
    cin.getline(puntero_persona->nombre,30,'\n');
    cout<<"Digite su edad:";
    cin>>puntero_persona->edad;

}

void mostrarDatos(Persona*){

    cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
    cout<<"\nSu edad: "<<puntero_persona->edad<<endl;

}