#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	
	//TABLAS MULTIPLICAR 
	
	int numerosolicitado1=0,numerosolicitado2=0;
	int opcion=0;
	int unatabla=0,cantidaduna=0;
	
	
	
	while(opcion!=3){
		
		cout<<"\nTABLAS DE MULTIPLICAR\n";
		cout<<"1. Imprimir solo una tabla especifica\n";
		cout<<"2. Imprimir varias tablas \n";
		cout<<"3. Salir\n";
		cout<<"Ingrese una opcion: ";
		cin>>opcion;
		
		if(opcion<1||opcion>3){
			
			cout<<"\nINGRESE EL NUMERO DE ACUERDO AL MENU";
			continue;
		}
		
		if(opcion==1){
			
			cout<<"BIENVENIDO A LA OPCION 1 \n";
			
			cout<<"Ingrese el numero de la tabla que quiere que se imprima: ";
			cin>>unatabla;
			cout<<"Ingrese la cantidad de numeros que quiera que se multpliquen: ";
			cin>>cantidaduna;
			
			for(int i=1; i<=cantidaduna; i++){
				
				cout<<unatabla<<" X "<<i<<" = "<<unatabla*i<<endl;
				
			}
			
		}else if(opcion==2){
			
			cout<<"LAS TABLAS DEL MULTIPLICAR HASTA EL 12 ";
			
		 for (int tabla = 1; tabla <= 12; tabla++) { 
                cout << "\nTabla del " << tabla << ":\n";
                for (int i = 1; i <= 12; i++) { 
                    cout << tabla << " X " << i << " = " << tabla * i << endl;
                }
            }
			
		}else if(opcion==3){
			
			cout<<"GRACIAS POR USAR ESTE MINI PROGRAMA";
			
		}
		
		
		
		
	}
	

	return 0;
}
