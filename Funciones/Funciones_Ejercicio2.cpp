#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

void PedirDatos();
void Multiplicar(float x, float y);

float num1, num2;

int messi()
{

    PedirDatos();
    Multiplicar(num1, num2);

    return 0;
}

void PedirDatos()
{

    while (true)
    {

        cout << "Digite 2 numeros: ";
        cin >> num1 >> num2;

        if (cin.fail())
        {

            cout << "\n ERROR EL VALOR INGRESADO NO ES UN NUMERO"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            

        }else{

            break;

        }
    }
}

void Multiplicar(float x, float y)
{

    float Multiplicacion = x * y;

    cout << "La multiplicacion es: " << Multiplicacion << endl;
}