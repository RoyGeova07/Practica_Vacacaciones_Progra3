#include <iostream>

using std::cout;
using std::endl;
using std::cin;
#include <string> // el programa usa la clase string estándar de C++ 
using std::string;
using std::getline;

class LibroCalificaciones
{
private:
  
public:


    void MostrarMensaje(string nombreCurso){

        cout<<"\nBienvenido al libro de calificaciones: "<<nombreCurso<<endl;

    }

};

int main(){

    LibroCalificaciones milibro;

    string nombrecurso;cout << "Escriba el nombre del curso:" << endl;
    getline( cin, nombrecurso ); // lee el nombre de un curso con espacios en blanco
    cout << endl; // imprime una línea en blanco

    milibro.MostrarMensaje(nombrecurso);

    return 0;
}

