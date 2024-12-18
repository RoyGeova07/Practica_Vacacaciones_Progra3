#include <iostream>

using namespace std;


int main(){
	
	int numero1,numero2;
	int suma=0,resta=0,multiplicacion=0,division=0;
	
								//lectura
	cout<<"Escribe un numero: "; cin>>numero1;
	cout<< "Escribe otro numero: "; cin>>numero2;
	
	//operaciones aritmeticas 
	suma=numero1+numero2;
	resta=numero1-numero2;
	multiplicacion=numero1*numero2;
	division=numero1/numero2;
	
	cout<<"\nLa suma es: " <<suma<<endl;
	cout<<"\nla resta es: "<<resta<<endl;
	cout<<"\nla multplicacion es: "<<multiplicacion<<endl;
	cout<<"\nla division es: "<<division<<endl;
	
	
	return 0;
}
