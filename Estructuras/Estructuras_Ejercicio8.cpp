#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

struct Persona
{

    char nombre[30];
    bool con_discapacidad;

} personas[30], personasConD[30], personasSinD[30];

int messi()
{

    int n_personas, j = 0, k = 0;

    while (true)
    {

        cout << "Digite el numero de personas: ";
        cin >> n_personas;

        if(cin.fail())
        {

            cout<<"\nError el valor ingresado no es un numero"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

        }else if(n_personas<=0){

            cout<<"\nError el valor ingresado tiene que ser mayor a cero"<<endl;

        }else{

            break;

        }

    }

    for (int i = 0; i < n_personas; i++)
    {

        cout<<i+1<<"#"<<"Digite el nombre: "<<endl;
        cin.getline(personas[i].nombre,30,'\n');
        cout<<i+1<<"#"<<"Tiene discapacidad? (1/0): "<<endl;
        cin>>personas[i].con_discapacidad;

        if(personas[i].con_discapacidad==1){

            strcpy(personasConD[j].nombre,personas[i].nombre);
            j++;

        }else{

            strcpy(personasSinD[k].nombre,personas[i].nombre);
            k++;

        }

    }

    //Mostrar las personas con discapacidad
    cout<<"\nPersonas con discapacidad: "<<endl;
    for (int i = 0; i < j; i++)
    {

        cout<<personasConD[i].nombre<<endl;

    }

    //Mostrar las personas sin discapacidad
    cout<<"\nPersonas sin discapacidad: "<<endl;
    for (int i = 0; i < k; i++)
    {

        cout<<personasSinD[i].nombre<<endl;

    }
    

    return 0;
}