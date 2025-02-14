//Escriba instrucciones que asignen enteros aleatorios a la variable n en los siguientes rangos:
 //a) 
//1 # n # 2
 //b) 1 # n # 100
 //c) 
//0 # n ≤ 9
 //d) 1000 # n # 1112
 //e) –1 # n # 1
 //f ) –3 # n # 11

#include <iostream>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

using namespace std;

int main() {
    // Inicializar la semilla de numeros aleatorios con el tiempo actual
    srand(time(0));

    // a) 1 ≤ n ≤ 2
    int n_a = 1 + rand() % 2;
    cout << "a) n = " << n_a << endl;

    // b) 1 ≤ n ≤ 100
    int n_b = 1 + rand() % 100;
    cout << "b) n = " << n_b << endl;

    // c) 0 ≤ n ≤ 9
    int n_c = rand() % 10;
    cout << "c) n = " << n_c << endl;

    // d) 1000 ≤ n ≤ 1112
    int n_d = 1000 + rand() % (1112 - 1000 + 1);
    cout << "d) n = " << n_d << endl;

    // e) -1 ≤ n ≤ 1
    int n_e = -1 + rand() % 3; // Rango de tamaño 3 (-1, 0, 1)
    cout << "e) n = " << n_e << endl;

    // f) -3 ≤ n ≤ 11
    int n_f = -3 + rand() % (11 - (-3) + 1);
    cout << "f) n = " << n_f << endl;

    return 0;
}
