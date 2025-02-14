#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int tamanioArreglo = 11;
    int n[tamanioArreglo] = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

    cout << "Distribucion de calificaciones:" << endl;

    
    for (int i = 0; i < tamanioArreglo; i++)
    {
        // imprime etiquetas de las barras ("0-9:", ..., "90-99:", "100:" )
        if (i == 0)
            cout << "  0-9: ";
        else if (i == 10)
            cout << "  100: ";
        else
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";

        // imprime barra de asteriscos
        for (int estrellas = 0; estrellas < n[i]; estrellas++)
            cout << '*';

        cout << endl; 
    } // fin de for externo

    return 0; 
} 