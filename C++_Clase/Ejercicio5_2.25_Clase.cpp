#include <iostream>//libreria 

//Hecho por Roy Umaña 22411312.

using namespace std;//este me sirve para no usar el std:: por cada salida de pantalla

//Escriba un programa que lea dos enteros, determine si el primero 
//es un múltiplo del segundo e imprima el resultado.

int main(){
        
    //variables necesitadas
    int n1,n2;

    cout<<"Digite el primer numero: "<<endl;
    cin>>n1;//lectura de datos

    cout<<"\nDigite el segundo numero: "<<endl;
    cin>>n2;

    //condicionales
    if (n1!=0)
    {
    
        if (n1 % n2 ==0)
        {
            
            cout<<n1<<" es multiplo de " <<n2<<endl;

        }else{

            cout<<n1<<" no es multiplo de "<<n2<<endl;

        }
        
        
    }else{

        cout<<"El segundo numero no puede ser cero"<<endl;

    }
    

    
    

    return 0;
}