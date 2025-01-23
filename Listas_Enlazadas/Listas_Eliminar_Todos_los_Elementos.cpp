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

void Menu();
void InsertarElementosLista(Nodo *&,int);
void MostrarElementosLista(Nodo *);
void BuscarElementosLista(Nodo *,int);
void EliminarNodo(Nodo *&,int);


//--------------------------------------
void EliminarLista(Nodo *&,int&); //el dato lo pasamos por referencia porque
// vamos a tachar todos los elementos de la lista

//para poder eliminar todos los elementos de la lista, hay que seguir 4 pasos.
//1. Crear nodo *aux e igualarlo al inicio de la lista
//2. guardar el dato que queremos eliminar dentro de *auxiliar
//3. Pasar la lista a siguiente nodo 
//4. Eliminar aux

Nodo *lista=nullptr;


int main(){

    

    return 0;
}

void Menu(){

    int opcion,dato

    do
    {

        cout<<"\t\n:::MENU:::\n";
        cout<<"1. Insertar Nodo Lista."<<endl;
        cout<<"2. Mostrar Lista."<<endl;
        cout<<"3. Buscar Nodo Lista"<<endl;
        cout<<"4. Eliminar nodo lista."<<endl;
        cout<<"5. Eliminar lista"<<endl;
        cout<<"6. Salir del programa"<<endl;
        cout<<"Ingrese una opcion: "<<endl;
        cin>>opcion;

        if (opcion==1)
        {
            


        }else if(opcion==2){



        }else if(opcion==3){



        }else if(opcion==4){



        }else if(opcion==5){



        }else if(opcion==6){



        }else{

            

        }
        
        
    }while(opcion !=6);
    

}