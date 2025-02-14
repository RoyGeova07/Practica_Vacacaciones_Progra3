#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones

// el constructor inicializa nombreCurso con la cadena suministrada como argumento;
// inicializa los miembros de datos contadores a 0
LibroCalificaciones::LibroCalificaciones(string nombre)
{
    establecerNombreCurso(nombre); // valida y almacena nombreCurso
    aCuenta = 0;                   // inicializa cuenta de calificaciones A con 0
    bCuenta = 0;                   // inicializa cuenta de calificaciones B con 0
    cCuenta = 0;                   // inicializa cuenta de calificaciones C con 0
    dCuenta = 0;                   // inicializa cuenta de calificaciones D con 0
    fCuenta = 0;                   // inicializa cuenta de calificaciones F con 0
} // fin del constructor de LibroCalificaciones

// función para establecer el nombre del curso; limita el nombre a 25 caracteres o menos
void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    if (nombre.length() <= 25)              // si nombre tiene 25 caracteres o menos
        nombreCurso = nombre;               // almacena el nombre del curso en el objeto
    else                                    // si el nombre es mayor que 25 caracteres
    {                                       // establece nombreCurso a los primeros 25 caracteres del parámetro nombre
        nombreCurso = nombre.substr(0, 25); // selecciona los primeros 25 caracteres
        cout << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
             << "Se limito nombreCurso a los primeros 25 caracteres.\n"
             << endl;
    } 
} 

string LibroCalificaciones::obtenerNombreCurso()
{
    return nombreCurso;
} 

// muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje()
{

    cout << "Bienvenido al libro de calificaciones para\n"
         << obtenerNombreCurso() << "!\n"
         << endl;
}

void LibroCalificaciones::recibirCalificaciones()
{
    int calificacion; 

    cout << "Escriba las calificaciones de letra." << endl
         << "Escriba el caracter EOF para terminar la entrada." << endl;

    // itera hasta que el usuario escriba la secuencia de fin de archivo
    while ((calificacion = cin.get()) != EOF)
    {
        
        switch (calificacion) 
        {
        case 'A':      // calificación fue A mayuscula
        case 'a':      
            aCuenta++; // incrementa aCuenta
            break;     // es necesario salir del switch

        case 'B':      
        case 'b':      
            bCuenta++; // incrementa bCuenta
            break;     // sale del switch

        case 'C':      
        case 'c':      // o c minúscula
            cCuenta++; // incrementa cCuenta
            break;     // sale del switch

        case 'D':      
        case 'd':      
            dCuenta++; // incrementa dCuenta
            break;     // sale del switch

        case 'F':      
        case 'f':      
            fCuenta++; // incrementa fCuenta
            break;     // sale del switch

        case '\n': 
        case '\t': // tabuladores
        case ' ':  // y espacios en la entrada
            break; // sale del switch

        default: // atrapa todos los demás caracteres
            cout << "Se introdujo una letra de calificación incorrecta."
                 << " Escribe una nueva calificación." << endl;
            break; 
        } 
    } 
} 

void LibroCalificaciones::mostrarReporteCalificaciones(){

    //aqui imprime
    cout<<"\n\nNumero de estudiantes que recibieron cada califiacion de letra: "
    <<"\nA: " << aCuenta
    <<"\nB: " << bCuenta 
    << "\nC: " << cCuenta 
    <<  "\nD: " << dCuenta 
    <<"\nF: " << fCuenta
    << endl;

}