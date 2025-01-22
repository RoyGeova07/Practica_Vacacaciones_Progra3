
//Hecho por Roy Umaña - 22411312

//librerias
#include <iostream>

//este me sirve para no usar el std:: por cada salida de pantalla
using namespace std;

//el main, para poder ejecutar el codigo
int main(){

    // las variables de numero
    int numero1,numero2,numero3;

    //variable de suma
    int suma=0;
    int promedio=0;
    int menor=0;
    int mayor=0;
    
    //pregunta al usuario
    cout<<"Introduzca tres enteros distintos: ";
    cin>>numero1>>numero2>>numero3;

    //calcular la suma de los 3 numeros
    suma = numero1+numero2+numero3;

    //aqui se crea una variable flotante, para poder calcular el promedio
    promedio = suma / 3;

    //aqui con condicionales se saca el menor numero de los 3 introducidos por el usuario
    menor = numero1;
    if (numero2 < menor) menor = numero2;
    if (numero3 < menor) menor = numero3;

    //aqui con condicionales se saca el mayor numero de los 3 introducidos por el usuario
    mayor = numero1;
    if (numero2 > mayor) mayor = numero2;
    if (numero3 > mayor) mayor = numero3;

    //la salida de pantalla con las respuestas
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"El producto es: "<<numero1*numero2*numero3<<endl;
    cout<<"El menor es: "<<menor<<endl;
    cout<<"El mayor es: "<<menor<<endl;

    //es return 0 porque el main es de tipo entero y por ello devuelve un 0.
    return 0;
}