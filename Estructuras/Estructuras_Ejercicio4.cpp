#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

#define messi main

using namespace std;

struct Atleta
{

    char nombre[30];
    string pais;
    int numero_medallas;

} atletas[100];

int messi(){

    int n_atletas;
    int mayor_numero_medallas=0, poscion_mayor=0;

    cout << "Digite el numero de atletas: ";
    cin >> n_atletas;

    for (int i = 0; i < n_atletas; i++)
    {
        
        cout << "#" << i + 1 << " Digite su nombre: ";
        cin.ignore();
        cin.getline(atletas[i].nombre, 30, '\n');
        cout << "#" << i + 1 << " Digite su pais: ";
        cin >> atletas[i].pais;
        cout << "#" << i + 1 << " Digite su numero de medallas: ";
        cin >> atletas[i].numero_medallas;

        //atleta con mayor numero de medallas
        if(atletas[i].numero_medallas>mayor_numero_medallas)
        {

            mayor_numero_medallas=atletas[i].numero_medallas;
            poscion_mayor=i;

        }

        cout << "\n";

    }

    //impriendo los datos
    cout << "\nDatos del atleta con mayor numero de medallas" << endl;
    cout << "Nombre: " << atletas[poscion_mayor].nombre << endl;
    cout << "Pais: " << atletas[poscion_mayor].pais << endl;
    cout << "Numero de medallas: " << atletas[poscion_mayor].numero_medallas << endl;

    return 0;
}
