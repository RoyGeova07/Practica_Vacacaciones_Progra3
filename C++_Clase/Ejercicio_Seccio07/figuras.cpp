#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int cuenta; 

    for (cuenta = 1; cuenta <= 10; cuenta++) // itera 10 veces
    {
        if (cuenta == 5) // si cuenta es 5,
            break;       // termina el cicl

        cout << cuenta << " ";
    } // fin de for

    cout << "\nSalio del ciclo en cuenta = " << cuenta << endl;
    return 0; // indica que terminó correctamente
} // fin de main