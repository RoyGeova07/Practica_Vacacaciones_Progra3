
#include <iostream>
#include <conio.h>
#include <random>
#include <sstream>

using namespace std;

#define messi main

int messi()
{

    int Dimensiones = 0;
    int SumaDiagonal = 0;
    int SumaDiagonSec = 0;
    ostringstream resultado;
    ostringstream resultado2;

    cout << "Ingrese la cantidad de la matriz cuadrada: ";
    cin >> Dimensiones;

    int matriz[100][100];

    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(10, 99);

    for (int filas = 0; filas < Dimensiones; filas++)
    {
        for (int columnas = 0; columnas < Dimensiones; columnas++)
        {
            matriz[filas][columnas] = dist(mt);
        }
    }

    for (int filas = 0; filas < Dimensiones; filas++)
    {
        for (int columnas = 0; columnas < Dimensiones; columnas++)
        {
            cout << matriz[filas][columnas] << " ";
        }
        cout << endl;
    }

    for (int filas = 0; filas < Dimensiones; filas++)
    {

        

            SumaDiagonal += matriz[filas][filas];
            resultado<<matriz[filas][filas]<< "  ";

        
    }

    for (int filas = 0; filas < Dimensiones; filas++)
    {
        
            SumaDiagonSec += matriz[filas][Dimensiones - filas - 1];
            resultado2 <<matriz[filas][Dimensiones - filas - 1]<< "  ";
            
        


    }

    cout<<"---RESULTADO---"<<endl;
    cout << "La suma de la diagonal principal es: " << SumaDiagonal << endl;
    cout << "La suma de la diagonal secundaria es: " << SumaDiagonSec << endl;
    cout << "Los elementos de la diagonal principal son: " << resultado.str() << endl;
    cout << "Los elementos de la diagonal secundaria son: " << resultado2.str() << endl;
    
    

    return 0;
}