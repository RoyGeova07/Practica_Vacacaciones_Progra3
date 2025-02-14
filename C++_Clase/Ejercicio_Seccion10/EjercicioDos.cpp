#include <iostream>
using std::cin;
using std::cout;
using std::endl;


inline double cubo(const double lado)
{
    return lado * lado * lado; // calcula el cubo
} 

int main()
{
    double valorLado; // almacena el valor introducido por el usuario
    cout << "Escriba la longitud del lado de su cubo: ";
    cin >> valorLado; // lee el valor del usuario

    // calcula el cubo de valorLado y muestra el resultado
    cout << "El volumen del cubo con un lado de "
         << valorLado << " es " << cubo(valorLado) << endl;
    return 0; 
}