#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

void PedirDatos();
void fullPotencia(int x, int y);

int numero, exponente;

void PedirDatos()
{

    while (true)
    {

        cout << "\nDigite un numero: ";
        cin >> numero;

        if (cin.fail())
        {
            cout << "\nERROR EL VALOR INGRESADO NO ES UN NUMERO";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }else{

            break;
        }
    }

    while (true)
    {

        cout << "\nDigite un exponente de elevacion: ";
        cin >> exponente;

        if (cin.fail())
        {
            
            cout<<"\nERROR EL VALOR INGRESADO NO ES UN NUMERO";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

        }else{

            break;

        }
        

    }
}

void fullPotencia(int x, int y)
{

    long resultado = 1;
    for (int i = 1; i <= y; i++)
    {

        resultado *= x;
    }

    cout << "El resultado es: " << resultado << endl;
}

int messi()
{

    PedirDatos();
    fullPotencia(numero, exponente);

    return 0;
}