#include <iostream>

using std::cout;
using std::endl;

class LibroCalificaciones
{
private:
    /* data */
public:


    void MostrarMensaje(){

        cout<<"\nBienvenido al libro de calificaciones"<<endl;

    }

};

int main(){

    LibroCalificaciones milibro;

    milibro.MostrarMensaje();

    return 0;
}

