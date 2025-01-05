#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

#define messi main

using namespace std;

struct Corredor
{
    
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];

}c1;


int messi(){

    char categoria[20];

    cout<<"Digite su nombre: ";
    cin.getline(c1.nombre, 20, '\n');

    cout<<"Digite su edad: ";
    cin>>c1.edad;

    cout<<"Digite su sexo: ";
    cin.ignore();
    cin.getline(c1.sexo, 10, '\n');

    cout<<"Digite su club: ";
    cin.getline(c1.club, 20, '\n');

    if(c1.edad<=18){

        //funcion para copiar cadenas de caracteres
        strcpy(categoria, "Juvenil");

    }else if(c1.edad<=40){

        strcpy(categoria, "Senior");

    }else{

        strcpy(categoria, "Veterano");

    }

    cout<<"\n\nDATOS DEL CORREDOR"<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;



    getch();
    return 0;
}