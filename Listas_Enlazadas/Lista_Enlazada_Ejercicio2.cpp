#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include <string>

using namespace std;

struct Nodo
{

    int dato;
    Nodo *siguiente;
};

void Insertar_Nodo(Nodo *&, int);
void MostrarLista(Nodo *);
int CalcularSumaLista(Nodo *);
void Menu();

Nodo *lista = nullptr;

int main()
{

    Menu();

    return 0;
}

void Insertar_Nodo(Nodo *&lista, int n)
{

    Nodo *nuevo_nodo = new Nodo();
    Nodo *auxiliar;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = nullptr;

    if (lista == nullptr)
    {

        lista = nuevo_nodo;
    }
    else
    {

        auxiliar = lista;

        while (auxiliar->siguiente != nullptr)
        {

            auxiliar = auxiliar->siguiente;
        }

        auxiliar->siguiente = nuevo_nodo;
    }

    cout << "\nElemento '" << n << "' agregado a la lista exitosamente\n"
         << endl;
}

void MostrarLista(Nodo *lista)
{

    if (lista == nullptr)
    {

        cout << "\nLa lista esta vacia." << endl;
        return;
    }

    while (lista != nullptr)
    {

        cout << lista->dato << " -> ";
        lista = lista->siguiente;
    }
    cout << "NULL ";
}

int CalcularSumaLista(Nodo *lista)
{

    if (lista == nullptr)
    {

        cout << "\nNo se puede sumar una lista vacia." << endl;
        
    }

    int suma = 0;
    while (lista != nullptr)
    {

        suma += lista->dato;
        lista = lista->siguiente;
    }
    return suma;
}

void Menu()
{

    int dato, opcion;
    char respuesta;

    do
    {

        cout << "\n:::MENU:::\n"<<endl;
        cout << "1. Insertar nodo a la lista" << endl;
        cout << "2. Mostrar lista enlazada." << endl;
        cout << "3. Calcular el valor de la lista." << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 1)
        {

            do
            {

                while (true)
                {

                    cout << "Ingrese un numero: ";
                    cin >> dato;

                    if (cin.fail())
                    {

                        cout << "E\nRROR: Elemento no valido, vuelva a intentarlo." << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    else
                    {

                        Insertar_Nodo(lista, dato);
                        cout << "Desea agregar otro elemento a la lista(s/n): ";
                        cin >> respuesta;
                        break;

                    }
                }

            } while (respuesta == 's' || respuesta == 'S');
        }
        else if (opcion == 2)
        {

            MostrarLista(lista);

        }
        else if (opcion == 3)
        {

            cout<<"\nLa suma de los elementos de esta lista es: "<<CalcularSumaLista(lista);

        }
        else if (opcion == 4)
        {

            cout<<"Programa terminado"<<endl;

        }else{

            cout<<"Opcion no valida"<<endl;

        }

    } while (opcion != 4);
}
