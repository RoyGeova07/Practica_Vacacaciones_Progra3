#include <string>
using std::string;

class Libro_Calificaciones
{
private:
  
    string NombreCurso;

public:

    Libro_Calificaciones(string);
    void EstablecerNombre(string);
    string ObtenerNombreCurso();
    void MostrarMensaje();
    void DeterminarPromedioClase();
   
};

