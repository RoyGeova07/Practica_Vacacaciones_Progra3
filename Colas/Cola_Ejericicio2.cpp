#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

struct Nodo
{
    
    char dato;
    Nodo *Siguiente;

};

void AgregarCaracterCola(Nodo *&,Nodo*&,char);
void EliminarElementoCola(Nodo *&, Nodo *&, char &) ;
bool ColaVacia(Nodo *);
void Menu();


int roy(){

    Menu();

    return 0;
}


void AgregarCaracterCola(Nodo *&frente, Nodo*& fin, char n){

    Nodo *nuevo_nodo=new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->Siguiente=nullptr;

    if (ColaVacia(frente))
    {
        
        frente=nuevo_nodo;
    
    }else{

        fin->Siguiente=nuevo_nodo;

    }

    fin=nuevo_nodo;

    cout<<"Caracter '"<<n<<"' agregado correctamente."<<endl;
    

}

bool ColaVacia(Nodo *frente){

    return (frente==nullptr) ? true : false;

}

void EliminarElementoCola(Nodo *&frente, Nodo *&fin, char &n){

    

    n=frente->dato;
    Nodo *auxiliar=frente;

    if (frente==fin)
    {
        
        frente=nullptr;
        fin=nullptr;

    }else{

        frente=frente->Siguiente;

    }

    delete auxiliar;
    

}


void Menu(){

    int opcion;
    
    Nodo *frente=nullptr;
    Nodo *fin=nullptr;

    char dato;

    do
    {

        cout<<"\n\t:.MENU:.\n";
        cout<<"1. Insertar los caracteres a la cola"<<endl;
        cout<<"2. Mostrar todo los caracteres de la cola"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;


        switch (opcion)
        {
        case 1:
        
            cout<<"Ingrese un caracter: ";
            cin>>dato;
            AgregarCaracterCola(frente,fin,dato);
            break;

        case 2: 

            cout<<"\nMostrando todos los caracteres de la cola."<<endl;
            //un while para eliminar todos los elementos de la cola, vaciar la cola
            while (frente != nullptr)//mientras que frente sea distinto a null, significa
            //que hay mas nodos que eliminar.
            {
                
                EliminarElementoCola(frente,fin,dato);

                if (frente !=nullptr)//si frente, es distinto que null, se imprimira estos datos.
                {
                    
                    cout<<dato<<" , ";

                }else{

                    cout<<dato<<".";

                }
                

            }   
            cout<<"\n";
            system("pause");
            break;

        case 3:

            cout<<"Saliendo del prorama."<<endl;
            system("cls");

            break;
        default:
            break;
        }
        
    } while (opcion != 4);
    

}