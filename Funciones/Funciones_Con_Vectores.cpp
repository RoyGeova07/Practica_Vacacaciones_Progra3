#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

void pedirDatos();
void cambiarsigno(int vec[], int);
void mostrarvector(int vec[], int);

int vec[100], tam;

int messi()
{

    pedirDatos();
    cambiarsigno(vec, tam);
    mostrarvector(vec, tam);

    return 0;
}

void pedirDatos()
{

    while (true)
    {

        cout << "Digite el tamanio del vector: " << endl;
        cin >> tam;

        if (cin.fail())
        {

            cout << "\nEl elemento que ingreso no es un numero, Vuelva a intentarlo" << endl;
            cin.clear();
           cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }else if (tam <= 0){

            cout << "\nNo se puede ingresar un numero menor o igual a 0"<<endl;
        }else{

            break;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        while (true)
        {

            cout << i + 1 << ". Digite un numero: ";
            cin >> vec[i];

            if (cin.fail())
            {

                cout << "\nEl elemento que ingreso no es un numero, Vuelva a intentarlo" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');

            }else if(tam<=0){

                cout << "\nNo se puede ingresar un numero menor o igual a 0";

            }else{

                break;

            }
        }
    }
}

void cambiarsigno(int vec[], int tam)
{

    for (int i = 0; i < tam; i++)
    {

        vec[i] *= -1;
    }
}

void mostrarvector(int vec[], int tam)
{

    cout << "\n MOSTRANDO LOS ELEMENTOS DEL VECTOR CON EL SIGNO CAMBIADO" << endl;
    for (int i = 0; i < tam; i++)
    {

        cout << vec[i] << " ";
    }
}
