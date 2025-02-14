#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "LibroCalificaciones.h"

LibroCalificaciones::LibroCalificaciones(string nombre) {
    establecerNombreCurso(nombre);
    aCuenta = bCuenta = cCuenta = dCuenta = fCuenta = 0;
    totalPuntos = 0; // Inicializamos totalPuntos en 0
}

void LibroCalificaciones::establecerNombreCurso(string nombre) {
    if (nombre.length() <= 25)
        nombreCurso = nombre;
    else {
        nombreCurso = nombre.substr(0, 25);
        cout << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
             << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso() {
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() {
    cout << "Bienvenido al libro de calificaciones para\n" 
         << obtenerNombreCurso() << "!\n" << endl;
}

void LibroCalificaciones::recibirCalificaciones() {
    char calificacion;

    
    cout << "Escriba las calificaciones de letra (A, B, C, D, F).\n"
         << "Presione Ctrl + Z (Windows) o Ctrl + D (Linux/Mac) para terminar.\n";

    while ((calificacion = cin.get()) != EOF) {
        switch (calificacion) {
            case 'A': case 'a': aCuenta++; totalPuntos += 4; break;
            case 'B': case 'b': bCuenta++; totalPuntos += 3; break;
            case 'C': case 'c': cCuenta++; totalPuntos += 2; break;
            case 'D': case 'd': dCuenta++; totalPuntos += 1; break;
            case 'F': case 'f': fCuenta++; totalPuntos += 0; break;
            case '\n': case '\t': case ' ': break;
            default:
                cout << "Se introdujo una letra incorrecta. Intente de nuevo.\n";
        }
    }
}

void LibroCalificaciones::mostrarReporteCalificaciones() {
    cout << "\nNumero de estudiantes que recibieron cada calificacion de letra:\n"
         << "A: " << aCuenta << "\nB: " << bCuenta << "\nC: " << cCuenta
         << "\nD: " << dCuenta << "\nF: " << fCuenta << endl;

    calcularPromedio(); 
}

void LibroCalificaciones::calcularPromedio() {
    int totalEstudiantes = aCuenta + bCuenta + cCuenta + dCuenta + fCuenta;

    if (totalEstudiantes == 0) {
        cout << "No se introdujeron calificaciones." << endl;
        return;
    }

    double promedio = static_cast<double>(totalPuntos) / totalEstudiantes;

    cout << "El promedio de calificaciones es: " << promedio << endl;
}

int main() {
    LibroCalificaciones miLibroCalificaciones("CS101 Programacion en C++");

    miLibroCalificaciones.mostrarMensaje(); 
    miLibroCalificaciones.recibirCalificaciones(); 
    miLibroCalificaciones.mostrarReporteCalificaciones(); // Ahora tambien muestra el promedio

    return 0;
}