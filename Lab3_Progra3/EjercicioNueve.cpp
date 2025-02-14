//EJERCICIO 6.14

#include <iostream>
#include <cmath>  // Para usar floor()
#include <iomanip>

using namespace std;

// Funciones de redondeo
double redondearAEntero(double numero) {
    return floor(numero + 0.5);
}

double redondearADecimas(double numero) {
    return floor(numero * 10 + 0.5) / 10;
}

double redondearACentesimas(double numero) {
    return floor(numero * 100 + 0.5) / 100;
}

double redondearAMilesimas(double numero) {
    return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
    double numero;

    cout << "Ingrese un número (0 para salir): ";
    while (cin >> numero && numero != 0) {
        // Imprimir valores redondeados
        cout << fixed << setprecision(6);
        cout << "\nNúmero original: " << numero << endl;
        cout << "Redondeado a entero: " << redondearAEntero(numero) << endl;
        cout << "Redondeado a décimas: " << redondearADecimas(numero) << endl;
        cout << "Redondeado a centésimas: " << redondearACentesimas(numero) << endl;
        cout << "Redondeado a milésimas: " << redondearAMilesimas(numero) << endl;

        cout << "\nIngrese otro número (0 para salir): ";
    }

    cout << "Programa terminado." << endl;
    return 0;
}