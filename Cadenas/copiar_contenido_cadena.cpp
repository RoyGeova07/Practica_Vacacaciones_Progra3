#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>

using namespace std;

#define messi main

int messi(){

    char nombre[]="Roy";
    char nombre2[20];

        // vacio,  contenido , pasando el contenido del strign hacia otra cadena 
    strcpy(nombre2,nombre);

    cout<<nombre2<<endl;

    getch();
    return 0;
}