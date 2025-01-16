#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define Roy main

using namespace std;

void PedirDatos();
int CalcularMinimo(int m[][100],int,int);

int m[100][100], filas,columnas;


int Roy(){

    PedirDatos();
    cout<<"\nEl menor elemento de la fila seleccionada es: "<<CalcularMinimo(m,filas,columnas)<<endl;

    return 0;
}

void PedirDatos(){

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

int CalcularMinimo(int m[][100], int fil,int colum){

    int fila,menor=9999;

    while (true)
    {
        
        cout<<"\nDigite el numero de fila a comprobar"<<endl;
        cin>>fila;

        if(cin.fail()){

            cout << "\nERROR EL VALOR INGRESADO NO ES UN NUMERO" << endl;
            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }else if(fila<=0){

            cout << "\nERROR NO PODES INGRESAR CERO O UN NUMERO MENOR" << endl;

        }else{

            break;

        }

    }

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            
            if(i==fila){

                if(m[i][j]<menor){

                    menor=m[i][j];

                }

            }

        }
        
    }
    
    return menor;
    

}
    
