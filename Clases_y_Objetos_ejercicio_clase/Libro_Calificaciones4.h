#include <iostream>

using std::cout;
using std::endl;
using std::cin;
#include <string> // el programa usa la clase string estándar de C++ 
using std::string;
using std::getline;

class Libro_Calificaciones4
{
private:
    
    string nombreCurso;

public:

    //constructor
    Libro_Calificaciones4(string nombre){

        establecerNombreCurso(nombre);


    }

    void establecerNombreCurso(string nombre){

        nombreCurso=nombre;

    }

    string obtenerNombreCurso(){

        return nombreCurso;

    }

    void MostrarMensaje(){

        cout<<"Bienvenido al libro de calificaciones para\n"<<obtenerNombreCurso()<<"!"<<endl;

    }
   
};

