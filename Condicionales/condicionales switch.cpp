#include <iostream>


using namespace std;

int main(){
	
	int numero;
	
	
	cout<< "Introduce un numero entre el 1 el 5: "; cin>>numero;
	
	//if(numero < 1 || numero > 5){
		
	//	cout<<"el numero que ingreso no esta entre el 1 y el 5";
		
	//}
	
	switch(numero){
		
		case 1: cout<<"El numero es 1"; break;
		case 2: cout<<"El numero es 2"; break;
		case 3: cout<<"El numero es 3"; break;
		case 4: cout<<"El numero es 4"; break;
		case 5: cout<<"El numero es 5"; break;
		
		default: cout<<"El numero no esta entre el 1 y el 5"; break;
		
	}
	
	return 0;
	
}
