#include <iostream>

#include <conio.h>
#define messi main

using namespace std;

int messi(){
	
	int numeros[5]={1,2,3,4,5};
	int multiplicacion=1;
	
	for(int i=0; i<5; i++){
		
		multiplicacion= multiplicacion *numeros[i];
	}
	
	cout<<"La multiplicacion de los elementos es: "<<multiplicacion<<endl;
	
	getch();
	return 0;
}
