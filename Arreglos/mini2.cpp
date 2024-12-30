#include <iostream>

#include <conio.h>
#define messi main

using namespace std;

int messi(){
	
	 int a=0;
	 int lea[5], otro[5];
	 
	 //se escribe los 5 numeros
	  for(int i=0; i<5; i++){
	  	
	  	cout<<"Ingrese un valor: ";
	  	cin>>lea[i];
	  	
	  	
	  }
	  
	  //se copian en otro arreglo, para que se multipliquen
	  for(int i=0; i<5; i++){
	  	
	  	otro[i]=lea[i]*3;
	  	
	  }
	 
	 // y por ultumo se muestran en pantalla
	 for(int i=0; i<5; i++){
	 	
	 	cout<<otro[i]<<endl;
	 	
	 }
	
	return 0;
}
