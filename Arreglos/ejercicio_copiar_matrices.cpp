#include <iostream>
#include <conio.h>
#include <random>
#include <sstream>

//hacer una matrz preguntando al usuario la cantidad de filas y columnas, llenarla con numeros y luego copiarla a otra matriz y por ultimo imprimir la matriz copiada

using namespace std;

#define messi main

int messi(){

    int numeros[100][100];

    int filas = 0;
    int columnas = 0;

    cout<< "Ingrese la cantidad de filas de la matriz: ";
    cin>> filas;

    cout<< "Ingrese la cantidad de columnas de la matriz: ";
    cin>> columnas;

    int copia[100][100];

    // Llenar la matriz original con numeros aleatorios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    for(int i = 0; i < filas; i++){

        for(int j = 0; j < columnas; j++){

            numeros[i][j] = dis(gen);

        }
    }

    // Copiar la matriz original a la matriz copia
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            copia[i][j] = numeros[i][j];
        }
    }

    // Imprimir la matriz copiada
    cout << "Matriz copiada:" << endl;

    for(int i = 0; i < filas; i++){

        for(int j = 0; j < columnas; j++){

            cout << copia[i][j] << " ";
            
        }
        cout << endl;
    }

    return 0;
}