
//Hecho por Roy Umaña - 22411312

//librerias
#include <iostream>

//este me sirve para no usar el std:: por cada salida de pantalla
using namespace std;

//el main para poder ejecutar un codigo.
int main(){

    // las variables de numero
    int numero1,numero2;

    //salida de pantalla para preguntarle al usuario que numero ingresara
    cout<<"Digite un numero: ";
    cin>>numero1;//aqui se le el numero que ingreso el usuario con cin

    //salida de pantalla para poder pedir la usuario el segundo numero
    cout<<"Digite el segundo numero: ";
    cin>>numero2;

    //aqui las condicionales para poder calcular el numero mas grande o si los 2 numeros son iguales
    if (numero1>numero2)
    {

        cout<<"El numero "<<numero1<<" es mas grande."<<endl;

    }else if(numero2>numero1){

        cout<<"El numero "<<numero2<<" es mas grande."<<endl;

    }else if(numero1==numero2){

        cout<<"El numero "<<numero1<<" es igual al numero "<<numero2<<" osea son iguales"<<endl;    

    }
    
     //es return 0 porque el main es de tipo entero y por ello devuelve un 0.
    return 0;
}