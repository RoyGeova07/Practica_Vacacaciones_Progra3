#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define Roy main

using namespace std;

void pedirDatos();
void ComprarSimetria(int m[][100], int, int);

int m[100][100], filas, columnas;

int Roy()
{

    pedirDatos();
    ComprarSimetria(m,filas,columnas);

    return 0;
}

void pedirDatos()
{

    while (true)
    {

        cout << "Digite el numero de filas: " << endl;
        cin >> filas;

        if (cin.fail())
        {

            cout << "\nERROR EL VALOR INGRESADO NO ES UN NUMERO" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (filas <= 0)
        {

            cout << "\nERROR NO PODES INGRESAR CERO O UN NUMERO MENOR" << endl;
        }
        else
        {

            break;
        }
    }

    while (true)
    {

        cout << "Digite el numero de columnas: " << endl;
        cin >> columnas;

        if (cin.fail())
        {

            cout << "\nERROR EL VALOR INGRESADO NO ES UN NUMERO" << endl;
            cin.clear();

            // Esta expresion indica que se ignorara un numero maximo de caracteres igual al valor
            // mas grande que puede contener un objeto del tipo streamsize.
            // streamsize: Un tipo definido en <ios> que representa el tamaño de un flujo de datos
            // (es decir, cuantos caracteres se pueden manejar).
            // numeric_limits<streamsize>::max(): El valor mas alto permitido para un flujo de entrada.
            // Usar este valor asegura que todos los caracteres presentes en el buffer de entrada sean descartados,
            // hasta encontrar el caracter delimitador ('\n').

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (columnas <= 0)
        {

            cout << "\nERROR NO PODES INGRESAR CERO O UN NUMERO MENOR" << endl;
        }
        else
        {

            break;
        }
    }

    for (int i = 0; i < filas; i++)
    {

        for (int j = 0; j < columnas; j++)
        {

            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void ComprarSimetria(int m[][100], int filillas, int columnillas)
{

    int contador=0;

    if (filillas == columnillas)
    {

        for (int i = 0; i < filillas; i++)
        {
            for (int j = 0; j < columnillas; j++)
            {

                if (m[i][j]==m[j][i])
                {

                    contador++;
                    
                }
                

            }
        }
    }

    if(contador==filillas*columnillas){

        cout<<"\nLA MATRIZ ES SIMETRICA"<<endl;

    }else{

        cout<<"\nLA MATRIZ NO ES SIMETRICA"<<endl;

    }

}