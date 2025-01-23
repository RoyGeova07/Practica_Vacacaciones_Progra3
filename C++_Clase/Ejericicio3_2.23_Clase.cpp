#include <iostream>//libreria

//Hecho por Roy Umaña 22411312.

using namespace std;//este me sirve para no usar el std:: por cada salida de pantalla

//Ejericio 1: 2.23

// Escriba un programa que lea cinco enteros y que determine e imprima los enteros
// mayor y menor en el grupo.

int main(){

    //varibales necesitadas
    int numero1,numero2,numero3,numero4,numero5;

    int menor,mayor;

    cout<<"Digite el primer numero: "<<endl;
    cin>>numero1;//lectura del numero ingresado

    cout<<"\nDigite el segundo numero: "<<endl;
    cin>>numero2;

    cout<<"\nDigite el tercer numero: "<<endl;
    cin>>numero3;

    cout<<"\nDigite el cuarto numero: "<<endl;
    cin>>numero4;

    cout<<"\nDigite el quito numero: "<<endl;
    cin>>numero5;

    //condicionales para determinar los 5 numeros
    mayor=numero1;
    menor=numero1;

    if (numero2>mayor) mayor =numero2;

    if (numero2<menor) menor=numero2;

    if(numero3>mayor) mayor=numero3;
    if(numero3<menor) menor=numero3;

    if(numero4>mayor) mayor=numero4;
    if(numero4<menor) menor=numero4;

    if(numero5>mayor) mayor =numero5;
    if(numero5<menor) menor=numero5;

    //salida de pantalla de la respuesta
    cout<<"\nEl numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    
    

}

