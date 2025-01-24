
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
#include <string> // el programa usa la clase string estándar de C++ 
using std::string;
using std::getline;

class Libro_Calificaciones3
{
private:
    
    string nombreCurso;

public:
    
    void EstablecerNombreCurso(string nombre){

        nombreCurso=nombre;

    }

    string obtenerNombreCurso(){

        return nombreCurso;

    }

    void MostrarMensaje(){

        cout<<"Bienvenido al libro de calificaciones para\n"<<obtenerNombreCurso()<<"!"<<endl;//AQUI FALTA ALGO DEL NOMBRE


    }

};

int main(){

    string nombreDelCurso;
    Libro_Calificaciones3 miLibroCalificaciones;

    cout<<"El nombre inicial del curso es: "<<miLibroCalificaciones.obtenerNombreCurso()<<endl;

    cout<<"\nEscriba el nombre del curso: ";
    getline(cin,nombreDelCurso);
    miLibroCalificaciones.EstablecerNombreCurso(nombreDelCurso);

    cout<<"\n";
    miLibroCalificaciones.MostrarMensaje();

}


