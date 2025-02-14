#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const int tamanioArreglo = 10; // variable constante que indica el tamaño del arreglo
    int a[tamanioArreglo] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    int total = 0;

    // suma el contenido del arreglo a
    for (int i = 0; i < tamanioArreglo; i++)
        total += a[i];

    cout << "Total de elementos del arreglo: " << total << endl;
    return 0; 
} // fin de main


