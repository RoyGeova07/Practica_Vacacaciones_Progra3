#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
    
using namespace std;

class Persona
{

    private:
    int edad;
    string nombre;

    public: 
    Persona(int,string);//constructor
    void Leer();
    void Correr();

   
};

//aqui se inicializa el constructor, nos sirve para inicializar los atributos
Persona::Persona(int _edad,string _nombre){

    edad=_edad;
    nombre=_nombre;

}

void Persona::Leer(){

    cout<<"\nSoy "<<nombre<< " y estoy leyendo un libro";

}

//son de la clase persona 
void Persona::Correr(){

    cout<<"\nSoy "<<nombre<<" y estoy corriendo"<<endl;

}

int main(){

    Persona p1=Persona(17,"Roy");
    
    p1.Leer();



    system("pause");
    return 0;
}