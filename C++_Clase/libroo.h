#include <string>
using std::string;

class LibroCalificaciones
{
private:

    string NombreCurso;

public:

    LibroCalificaciones(string);
    void EstablecerNombre(string);
    string ObtenerNombreCurso();
    void MostrarMensaje();
    void DeterminarPromedioClase();

};





