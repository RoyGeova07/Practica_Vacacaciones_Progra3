#include <iostream>

using namespace std;

//EXPRESIONESSS

int main(){
	
	float a,b, resultado=0;
	
	cout<< "Ingrese el numero de a: "; cin>>a;
	cout<< "Ingrese el numero de b: "; cin>>b;
	
	resultado=(a/b)+1;
	
	//para redondear
	cout.presicion(2);
	cout<<"\nEl resultado es: "<<resultado;
	
	return 0;
}
