#include <iostream>

#include <conio.h>
#define messi main

using namespace std;

int messi(){
	
	//se define dos vectores con caracteres
	char uno[]={'a','b','c','d','e'};
	char dos[]={'f','g','h','i','j'};
	
	//almacenarlos caracteres
	char tres[10];
	
	//copiar los caracteres de uno a tres
	for(int i=0; i<5; i++){
		
		tres[i]=uno[i];
		
	}
	
	//con estre bucle la posicion del 0 al 5 ya estan ocupadas
	
	//copiar caracteres de dos a tres
	for(int i=5; i<10; i++){
		
		tres[i]=dos[i-5];
		
	}
	
	//salida
	for(int i=0; i<10; i++){
		
		cout<<tres[i]<<endl;
		
	}
	
	getch();
	return 0;
}
