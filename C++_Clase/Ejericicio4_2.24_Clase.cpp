#include <iostream>//libreria 

//Hecho por Roy Umaña 22411312.

using namespace std;//este me sirve para no usar el std:: por cada salida de pantalla

//2.24 Escriba un programa que lea un entero y que determine e imprima si es impar o par.

int main(){

    //variables
    int n;

    cout<<"Digite un numero: ";
    cin>>n;//lectura del numero ingresado

    //si el numero se divide y su residio es 0 entonces el numero es par.
    if (n %2==0)
    {
        cout<<"El numero es par!";
    }else{

        cout<<"El numero es impar!";

    }
    
    return 0;

}