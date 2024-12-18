#include <iostream>


using namespace std;

int main(){
	
	int Edad;
	char Sexo[10];//10 de espacio "arreglo"
	float Altura;
	
	cout <<"Introduce tu edad: "; cin>>Edad; 
	cout <<"Introduce tu sexo: "; cin>>Sexo;
	cout <<"Introduce tu Altura: "; cin>>Altura;
	
	cout <<"\nEdad: " <<Edad;
	cout<<"\nSexo: "<<Sexo;
	cout<<"\nAltura en metros: "<<Altura;
	
	return 0;
}
