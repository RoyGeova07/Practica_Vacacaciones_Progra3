#include <string> 
using std::string;

class LibroCalificaciones {
public:
    LibroCalificaciones(string); 
    void establecerNombreCurso(string); 
    string obtenerNombreCurso(); 
    void mostrarMensaje(); 
    void recibirCalificaciones(); 
    void mostrarReporteCalificaciones();
    void calcularPromedio(); 

private:
    string nombreCurso;
    int aCuenta, bCuenta, cCuenta, dCuenta, fCuenta;
    int totalPuntos; 
};