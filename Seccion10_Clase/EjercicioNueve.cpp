// Fig. 7.3: fig07_03.cpp
// Inicialización de un arreglo.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    int n[10]; // n es un arreglo de 10 enteros

    // inicializa los elementos del arreglo n con 0
    for (int i = 0; i < 10; i++)
        n[i] = 0;

    cout << "Elemento" << setw(13) << "Valor" << endl;

    // imprime el valor de cada elemento del arreglo
    for (int j = 0; j < 10; j++)
        cout << setw(7) << j << setw(13) << n[j] << endl;

    return 0; 
} // fin de main