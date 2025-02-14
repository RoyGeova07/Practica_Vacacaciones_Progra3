#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona
{
    private:
    string nombre;
    int edad;
    
    public:
    Persona(string,int);//constructor
    void MostrarPersona();
    
};

class Alumno : public Persona
{
private:


public:



};


//constructor de la clase persona(Clase Padre)
Persona::Persona(string _nombre,int _edad){

    nombre=_nombre;
    edad=_edad;

}

void Persona::MostrarPersona(){

    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;

}

int main(){




    return 0;
}