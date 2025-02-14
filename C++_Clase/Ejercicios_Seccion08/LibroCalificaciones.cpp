#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "LibroCalificaciones.h" // incluye la definicion de la clase LibroCalificacione

LibroCalificaciones::LibroCalificaciones(string nombre)
{
    establecerNombreCurso(nombre); // valida y almacena nombreCurso
    calificacionMaxima = 0;        // este valor se reemplazara por la calificacion maxima
} // fin del constructor LibroCalificaciones

// funcion para establecer el nombre del curso; limita nombre a 25 o menos caracteres
void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    if (nombre.length() <= 25) // si nombre tiene 25 o menos caracteres
        nombreCurso = nombre;  // almacena el nombre del curso en el objeto
    else                       // si nombre es mayor que 25 caracteres
    {
        nombreCurso = nombre.substr(0, 25); // selecciona los primeros 25 caracteres
        cout << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
             << "Se limito nombreCurso a los primeros 25 caracteres.\n"
             << endl;
    } 
}

// funcion para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso()
{

    return nombreCurso;
    
} // fin de la funcion obtenerNombreCurso

void LibroCalificaciones::mostrarMensaje()
{

    // esta instruccion llama a obtenerNombreCurso para obtener el
    // nombre del curso que representa este LibroCalificaciones
    cout << "Bienvenido al libro de calificaciones para\n"
         << obtenerNombreCurso() << "!\n"
         << endl;
}

// recibe tres calificaciones del usuario; determina el valor máximo
void LibroCalificaciones::recibirCalificaciones()
{
    int calificacion1; // primera calificacion introducida por el usuario
    int calificacion2; // segunda calificacion introducida por el usuario
    int calificacion3; // tercera calificacion introducida por el usuario

    cout << "Introduzca tres calificaciones enteras: ";
    cin >> calificacion1 >> calificacion2 >> calificacion3;

    // almacena el valor máximo en el miembro calificacionMaxima
    calificacionMaxima = maximo(calificacion1, calificacion2, calificacion3);
} // fin de la funcion recibirCalificaciones

// devuelve el maximo de sus tres parámetros enteros
int LibroCalificaciones::maximo(int x, int y, int z)
{
    int valorMaximo = x; // supone que x es el mayor para empezar

    // determina si y es mayor que valorMaximo
    if (y > valorMaximo)
        valorMaximo = y; // hace a y el nuevo valorMaximo

    // determina si z es mayor que valorMaximo
    if (z > valorMaximo)
        valorMaximo = z; // hace a z el nuevo valorMaximo

    return valorMaximo;
} 

// muestra un reporte con base en las calificaciones introducidas por el usuario
void LibroCalificaciones::mostrarReporteCalificaciones()
{
    // imprime el maximo de las calificaciones introducidas
    cout << "Calificacion maxima introducida: " << calificacionMaxima << endl;
} // fin de la funcion mostrarReporteCalificaciones


int main(){

    LibroCalificaciones miLibroCalificaciones( "CS101 Programacion en C++" );

    miLibroCalificaciones.mostrarMensaje(); // muestra mensaje de bienvenida
   miLibroCalificaciones.recibirCalificaciones(); // lee calificaciones del usuario
    miLibroCalificaciones.mostrarReporteCalificaciones(); // muestra reporte con base en la calificacion

    return 0;
}