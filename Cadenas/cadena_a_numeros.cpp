#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define messi main

//transformar una cadena a numeros - funcion atoi() y atof()

int messi(){

    char cadena[] = "123";
    char cadena2[] = "123.456";
    int nummero;
    float nummero2;
    
    nummero = atoi(cadena);
    nummero2 = atof(cadena2);

    cout << "El numero es: " << nummero << endl;
    cout << "El numero es: " << nummero2 << endl;

    getch();
    return 0;
}