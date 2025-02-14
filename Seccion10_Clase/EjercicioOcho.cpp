
// Establece el arreglo s con los enteros pares del 2 al 20.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    // la variable constante se puede usar para especificar el tamaño de los arreglos
    const int tamanoArreglo = 10; // debe inicializarse en la declaración

    int s[tamanoArreglo]; // el arreglo s tiene 10 elementos

    for (int i = 0; i < tamanoArreglo; i++) // establece los valores
        s[i] = 2 + 2 * i;

    cout << "Elemento" << setw(13) << "Valor" << endl;

    // imprime el contenido del arreglo s en formato tabular
    for (int j = 0; j < tamanoArreglo; j++)
        cout << setw(7) << j << setw(13) << s[j] << endl;

    return 0; 
} // fin de main
