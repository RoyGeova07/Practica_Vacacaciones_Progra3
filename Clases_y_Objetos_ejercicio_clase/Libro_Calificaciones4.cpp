#include <iostream>
using std::cout;
using std::endl;
#include "Libro_Calificaciones4.h"

int main(){

    Libro_Calificaciones4 Libro_Calificaciones1("INTRODUCCION A LA PROGRAMACION EN C++");
    Libro_Calificaciones4 Libro_Calificaciones2("PROGRAMACION III CON C++");

   cout << "libroCalificaciones1 creado para el curso: " << Libro_Calificaciones1.
 obtenerNombreCurso()
    << "\nlibroCalificaciones2 creado para el curso: " <<  Libro_Calificaciones2.obtenerNombreCurso() 
<< endl;
    return 0;
}