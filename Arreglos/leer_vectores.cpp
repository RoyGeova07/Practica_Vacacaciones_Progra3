#include <iostream>

#include <conio.h>
#define messi main

using namespace std;

int messi(){
	
	int numeros[100];
	int n;
	
	cout<<"Digite un numero de elemntos que va a tener el arreglo: "; cin>>n;
	
	for (int i=0; i<n; i++){
		
		//guardando los numeros en el vector
		cout<<"Digite un numero:  "; cin>>numeros[i];
		
	}
	
	for(int i=0; i<n; i++){
		
		cout<<i<<" ["<<numeros[i]<<"] "<<endl;
		
	}
	
	
	getch();
	return 0;
	
}
