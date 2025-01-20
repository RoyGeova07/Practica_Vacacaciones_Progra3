#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

struct Nodo
{

    char caracter;
    Nodo *siguiente;

};

void AgregarCaracterAPila(Nodo *&,char);
void EliminarCaracterAPila(Nodo *&,char &);

int roy(){

    Nodo *pila=nullptr;
    int opcion;
    char caracter;

    do
    {
        cout<<"\n***MENU***"<<endl;
        cout<<"1. Agregar un caracter a la pila."<<endl;
        cout<<"2. Eliminar un caracter de la pila"<<endl;
        cout<<"3. Mostrar caracteres de la pila"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: "<<endl;
        cin>>opcion;

        //se limpia el buffer para evitar problemas con caracteres extras
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        switch (opcion)
        {
        case 1:

            cout<<"Ingresa un caracter: ";
            cin.get(caracter);
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            AgregarCaracterAPila(pila,caracter);
            cout<<"Caracater '"<<caracter<<"' agregado a la pila correctamente"<<endl;

            break;

        case 2: 

            if(pila !=nullptr){

                EliminarCaracterAPila(pila,caracter);
                cout<<"Se elimino el caracter '"<<caracter<<"' "<<endl;  

            }else{

                cout<<"\nLa pila esta vacia. No se puede eliminar"<<endl;

            }

            break;
        case 3: 

            if(pila==nullptr){

                cout<<"\nLa pila esta vacia."<<endl;

            }else{

                Nodo *actual =pila;//se apunta a la cima de la pila
                cout<<"\nElementos de la pila: "<<endl;
                while (actual !=nullptr)//se recorre la lista hasta que lleguemos a la final 
                {
                    
                    cout<<actual->caracter<<" ";//se imprime los elementos
                    actual=actual->siguiente;// y pasa al siguiente nodo

                }
                cout<<"\n";
                

            }

            break;

        case 4:

            cout<<"\nSaliendo del programa."<<endl;
            break;

        default:

            cout<<"Opcion invalida. Selecciona las opciones que se le indican."<<endl;

            break;
        }

    } while (opcion!=4);
    
    

    return 0;
}

void AgregarCaracterAPila(Nodo *&pila,char n){

    Nodo *nuevo_nodo=new Nodo();
    nuevo_nodo->caracter=n;
    nuevo_nodo->siguiente=pila;//rellena el puntero
    pila=nuevo_nodo;//se apunta a la cima

}

void EliminarCaracterAPila(Nodo *&pila,char &n){

    if (pila==nullptr)
    {
        
        cout<<"\nLa pila esta vacia, no se puede eliminar"<<endl;
        return;

    }

    Nodo *auxiliar=pila;
    n=auxiliar->caracter;
    pila=auxiliar->siguiente;
    delete auxiliar;

}