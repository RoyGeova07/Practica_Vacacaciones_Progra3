// Fig. 7.4: fig07_04.cpp
// Iniciaización de un arreglo en una declaración.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    // usa la lista inicializadora para inicializar el arreglo n
    int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

    cout << "Elemento" << setw(13) << "Valor" << endl;

    // imprime el valor de cada elemento del arreglo
    for (int i = 0; i < 10; i++)
        cout << setw(7) << i << setw(13) << n[i] << endl;

    return 0;
} // fin de main