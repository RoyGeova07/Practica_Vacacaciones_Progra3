#include <iostream>
#include <conio.h>
#include <random>
#include <sstream>

//hacer un matriz de tipo entera de 2x2, llenarla con numeros y luego copiarla a otra matriz

using namespace std;

#define messi main

int messi(){

    int numeros[2][2]={{1,2},{3,4}};
    int matriz[2][2];


    for (int filas = 0; filas < 2; filas++)
    {
        for (int columnas = 0; columnas < 2; columnas++)
        {

            matriz[filas][columnas] = numeros[filas][columnas];

        }
    }

    //imprimir la matriz copiada
    for (int filas = 0; filas < 2; filas++)
    {
        for (int columnas = 0; columnas < 2; columnas++)
        {

            cout << matriz[filas][columnas];
            
        }
        cout << endl;
    }

    return 0;
}