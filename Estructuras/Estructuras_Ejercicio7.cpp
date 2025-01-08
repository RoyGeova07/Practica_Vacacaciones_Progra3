#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

struct Etapas
{

    int horas;
    int minutos;
    int segundos;

} et[100];

int messi()
{

    int n_etapas = 0, horas_t = 0, minutos_t = 0, segundos_t = 0;

    cout << "\n**BIENVENIDO CICLISTA**" << endl;
    cout << "PARA SABER LA CANTIDAD DE HORAS QUE HICISTE DE EJERCICIO,\n";
    cout << "INGRESE EL NUMERO DE ETAPAS QUE HIZO. DESPUES SE LE PEDIRAN\n";
    cout << "LAS HORAS, MINUTOS Y SEGUNDOS EXACTOS PARA SABER CUANTO TIEMPO COMPITIO.\n"<< endl;

    while (true)
    {

        cout << "Digite el numero de etapas: ";
        cin >> n_etapas;

        if (cin.fail())
        {

            cout << "\nError el valor ingresado no es un numero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (n_etapas <= 0)
        {

            cout << "\nError el valor ingresado tiene que ser mayor a cero" << endl;
        }
        else
        {

            break;
        }
    }

    for (int i = 0; i < n_etapas; i++)
    {

        while (true)
        {

            cout << "Horas: ";
            cin >> et[i].horas;

            if (cin.fail())
            {

                cout << "\nError el valor ingresado no es un numero" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else if (et[i].horas < 0)
            {

                cout << "\nError el valor de las horas no puede ser negativo" << endl;
            }
            else
            {

                break;
            }
        }

        while (true)
        {

            cout << "Minutos: ";
            cin >> et[i].minutos;

            if (cin.fail())
            {

                cout << "\nError el valor ingresado no es un numero" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else if (et[i].minutos < 0)
            {

                cout << "\nError el valor de los minutos no puede ser negativo" << endl;
            }
            else
            {

                break;
            }
        }

        while (true)
        {

            cout << "Segundos: ";
            cin >> et[i].segundos;

            if (cin.fail())
            {

                cout << "\nError el valor ingresado no es un numero" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else if (et[i].segundos < 0)
            {

                cout << "\nError el valor de los segundos no puede ser negativo" << endl;
            }
            else
            {

                break;
            }
        }

        // se acumulan las horas, minutos y segundos
        horas_t += et[i].horas;
        minutos_t += et[i].minutos;
        if (minutos_t >= 60)
        {

            minutos_t -= 60;
            horas_t++;
        }
        segundos_t += et[i].segundos;
        if (segundos_t >= 60)
        {

            segundos_t -= 60;
            minutos_t++;
        }

        cout << "\n";
    }

    cout << "\n**TIEMPO TOTAL DE CARRERA**" << endl;
    cout << "Horas: " << horas_t << endl;
    cout << "Minutos: " << minutos_t << endl;
    cout << "Segundos: " << segundos_t << endl;

    return 0;
}
