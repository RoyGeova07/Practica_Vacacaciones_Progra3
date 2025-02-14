#include <iostream>
using std::cout;
using std::endl;

int cuadradoPorValor(int);         
void cuadradoPorReferencia(int &); 

int main()
{
    int x = 2; // valor para cuadrado usando cuadradoPorValor
    int z = 4; // valor para cuadrado usando cuadradoPorReferencia

    // demuestra cuadradoPorValor
    cout << "x = " << x << " antes de cuadradoPorValor\n";
    cout << "Valor devuelto por cuadradoPorValor: "
         << cuadradoPorValor(x) << endl;
    cout << "x = " << x << " despues de cuadradoPorValor\n"
         << endl;
}