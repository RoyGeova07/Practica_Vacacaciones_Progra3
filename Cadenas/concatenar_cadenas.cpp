#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>

using namespace std;

#define messi main

//concatenar cadenas con otras funcion strcat();
int messi(){

    char cadena1[] = "Esto es un ejemplo";
    char cadena2[] = " de concatenacion";
    char cadena3[50];

    strcpy(cadena3,cadena1); //cadena3 = Esto es un ejemplo

    strcat(cadena3,cadena2); //cadena3 = Esto es un ejemplo de concatenacion

    cout<<cadena3<<endl;

    return 0;
}