#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

#define roy main

struct Nodo
{
    
    string dato;
    Nodo *siguiente;

};

void Menu();
void AgregarElementoCola(Nodo *&,Nodo *&,const string &n);
void EliminarElementoCola(Nodo *&,Nodo *&,string &);
bool ColaVacia(Nodo *);


int opcion;

int roy(){

    Menu();

    return 0;
}

void Menu(){

    Nodo *frente=nullptr;
    Nodo *fin=nullptr;
    string nombre;

    do
    {
        
        cout<<"\t\n.:Menu:.\n";
        cout<<"1. Agregar cliente a la cola."<<endl;
        cout<<"2. Mostrar clientes de la cola."<<endl;
        cout<<"3. Salir."<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            
            cin.ignore();
            cout<<"Ingrese su nombre: ";
            getline(cin,nombre);
            AgregarElementoCola(frente,fin,nombre);

            break;
        case 2: 

            cout<<"\nMostrando los clientes de la cola"<<endl;
            while (!ColaVacia(frente))
            {
                
                EliminarElementoCola(frente,fin,nombre);
                cout<<nombre<<endl;

            }
            

            break;
        
        case 3: 

            cout<<"Saliendo del programa"<<endl;

            break;
      
        default:

            cout<<"ERROR OPCION INVALIDA. INTENTE DE NUEVO"<<endl;

            break;
        }

    } while (opcion !=3);
    


}

void AgregarElementoCola(Nodo *&frente,Nodo *&fin,const string &n){

    Nodo *nuevo_nodo=new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=nullptr;

    if (ColaVacia(frente))
    {
        
        frente=nuevo_nodo;

    }else{

        fin->siguiente=nuevo_nodo;

    }

    fin=nuevo_nodo;

    cout<<"\t\n"<<n<<" a sido agregado a la cola exitosamente"<<endl;
    

}

bool ColaVacia(Nodo *frente){

    return (frente==nullptr) ? true : false;

}

void EliminarElementoCola(Nodo *&frente,Nodo *&fin,string &n){

    if (frente==nullptr)
    {
        
        cout<<"No hay ningun cliente aun."<<endl;
        return;

    }
    
    //aqui obtenemo el nodo para eliminar 
    n=frente->dato;
    Nodo *auxiliar=frente;

    //aqui se actualiza los punteros de la cola
    if (frente==fin)//si hay un solo elemento en la cola
    {
        
        frente=nullptr;
        fin=nullptr;

    }else{

        frente=frente->siguiente;

    }

    delete auxiliar;


}