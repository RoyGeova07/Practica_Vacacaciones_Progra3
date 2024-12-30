#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>

using namespace std;

#define messi main

int messi(){

    char nombre[30];
    int longitud = 0;

    cout << "Ingrese su nombre: ";
    cin.getline(nombre,30,'\n');

    longitud = strlen(nombre);

    if(longitud>10){

        cout<<"El nombre es muy largo"<<endl;

    }else{

        cout<<"El nombre es muy corto"<<endl;
    }

    
}