#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Descifrar.h"


int Descifrar::Cifrar(int numero){

    int num1,num2,num3,num4,num;

    num1=numero/1000;
    num2=(numero%1000)/100;
    num3=(numero%100)/10;
    num4=numero%10;
    
    num1=(num1+7)%10;
    num2=(num2+7)%10;
    num3=(num3+7)%10;
    num4=(num4+7)%10;

    cout<<"El numero descifrado sera: "<<num3<<num4<<num1<<num2;
    

}



int main(){

    int numero;
    Descifrar des;

    cout<<"Ingrese un numero de 4 digitos a cifrar: ";
    cin>>numero;

    if (numero<1000 ||numero>9999)
    {
        
        cout<<"\nEl numero debe tener exactamente cuatro digitos."<<endl;
        return 1;

    }

    
    des.Cifrar(numero);

    

}