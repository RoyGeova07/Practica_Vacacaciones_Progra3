#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define Roy main

using namespace std;

struct Persona
{
    char nombre[30];
    int edad;
}p1;

void pedirDatos();
void mostrarDatos(Persona);


int Roy(){

    pedirDatos();
    mostrarDatos(p1);


    return 0;
}

void pedirDatos(){

    cout<<"Digite su nombre: ";
    cin.getline(p1.nombre,30,'\n');
    while (true)
    {
        
        cout<<"Digite su edad: ";
        cin>>p1.edad;

        if(cin.fail()){

            cout << "\nERROR EL VALOR INGRESADO NO ES UN NUMERO" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }else if(p1.edad<=0){

            cout << "\nERROR NO PODES INGRESAR CERO O UN NUMERO MENOR" << endl;

        }else{

            break;

        }

    }


}

void mostrarDatos(Persona p){

    cout<<"\nNombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;

}