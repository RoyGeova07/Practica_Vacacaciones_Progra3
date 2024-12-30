#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>



using namespace std;

#define messi main

int messi(){

    char Palabra[] = "hola";
    int longitud = 0;

    longitud = strlen(Palabra);

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;

    getch();
    return 0;
}