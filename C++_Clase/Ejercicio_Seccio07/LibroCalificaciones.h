#include <string> 
using std::string;


class LibroCalificaciones
{
public:
    LibroCalificaciones(string);         // el constructor inicializa el nombre del curso
    void establecerNombreCurso(string); 
    string obtenerNombreCurso();        
    void mostrarMensaje();               // muestra un mensaje de bienvenida
    void recibirCalificaciones();       
    void mostrarReporteCalificaciones(); // muestra un reporte con base en las calificaciones
private:
    string nombreCurso; // nombre del curso para este LibroCalificaciones
    int aCuenta;        // cuenta de calificaciones A
    int bCuenta;        // cuenta de calificaciones B
    int cCuenta;        // cuenta de calificaciones C
    int dCuenta;        // cuenta de calificaciones D
    int fCuenta;        // cuenta de calificaciones F
};