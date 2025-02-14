#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modificarArreglo(int[], int); // se ve extraño; arreglo y tamaño
void modificarElemento(int);       // recibe el valor del elemento del arreglo

int main()
{
    const int tamanioArreglo = 5;            // tamaño del arreglo a
    int a[tamanioArreglo] = {0, 1, 2, 3, 4}; // inicializa el arreglo a

    cout << "Efectos de pasar todo el arreglo por referencia:"
         << "\n\nLos valores del arreglo original son:\n";

    // imprime los elementos originales del arreglo
    for (int i = 0; i < tamanioArreglo; i++)
        cout << setw(3) << a[i];

    cout << endl;

    // pasa el arreglo a a modificarArreglo por referencia
    modificarArreglo(a, tamanioArreglo);
    cout << "Los valores del arreglo modificado son:\n";

    // imprime los elementos modificados del arreglo
    for (int j = 0; j < tamanioArreglo; j++)
        cout << setw(3) << a[j];

    cout << "\n\n\nEfectos de pasar el elemento del arreglo por valor:"
         << "\n\na[3] antes de modificarElemento: " << a[3] << endl;

    modificarElemento(a[3]); // pasa el elemento a[ 3 ] del arreglo por valor
    cout << "a[3] despues de modificarElemento: " << a[3] << endl;

    return 0; // indica que terminó correctamente
} // fin de main


void modificarArreglo(int b[], int tamanioDeArreglo)
{
    // multiplica cada elemento del arreglo por 2
    for (int k = 0; k < tamanioDeArreglo; k++)
        b[k] *= 2;
} 

// elemento a[ 3 ] del arreglo que se pasa de main
void modificarElemento(int e)
{
   
    cout << "Valor del elemento en modificarElemento: " << (e *= 2) << endl;
} 