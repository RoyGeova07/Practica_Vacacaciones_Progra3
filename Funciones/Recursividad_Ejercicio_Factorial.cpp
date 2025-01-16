#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define Roy main

using namespace std;

int Factorial(int);

int Roy(){
    int opciones=0;
    int facto=0,contador=0;
    int resultado;
    const int maximo=100;
    int numeros[maximo];//almacena los numeros ingresados
    int factoriales[maximo];//aqui almacena los factoriales

    //--------  //n , f
    vector<pair<int, int>> resultados;//este alamcena pares de <numero, factorial>
    //--------


    while (opciones !=4 )
    {
        cout<<"\n***MENU***"<<endl;
        cout<<"1. Factorial"<<endl;
        cout<<"2. Numeros agregados con arreglos"<<endl;
        cout<<"3. Numero agregados con vector<pair<int, int>>"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opciones;


        if(opciones==1){

            while (true)
            {
            
            cout<<"\nIngrese un numero: ";
            cin>>facto;

            
                if(cin.fail()){

                    cout << "\nERROR EL VALOR INGRESADO NO ES UN NUMERO" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');

                }else if(facto<=0){

                    cout<<"\nERROR NO PODES INGRESAR CERO O UN NUMERO MENOR"<<endl;

                }else{

                    break;

                }
            
            }
            resultado=Factorial(facto);
            cout<<"El Factorial de su numero ingresado es: "<<resultado<<endl;

            //aqui se guardara el numero y el factorial en el vector.
            resultados.push_back(make_pair(facto,resultado));

            //guardar el numero y su factorial en el arreglo
            if(contador<maximo){

                numeros[contador]=facto;
                factoriales[contador]=resultado;
                contador++;

            }else{

                cout << "\nERROR: Se ha alcanzado el limite de resultados almacenados." << endl;

            }


        }else if(opciones==2){

            if(contador==0){

                cout<<"\nNo se ingresado numeros aun."<<endl;

            }else{

                cout<<"\n***TODOS LOS RESULTADOS DEL FACTORIAL*** "<<endl;
                for (int i = 0; i < contador; i++)
                {
                    
                    cout<<i+1<<". Numero: "<<numeros[i]<<", Factorial: "<<factoriales[i]<<endl;

                }
                

            }


        }else if(opciones==3){

            if(resultados.empty()){

                cout<<"\nNo se ingresado numeros aun."<<endl;                

            }else{

                cout<<"\n***TODOS LOS RESULTADOS DEL FACTORIAL CON vector<pair<int, int>>***"<<endl;
                for(const auto& par : resultados){

                    cout<<"Numero: "<<par.first<<", Factorial: "<<par.second<<endl;

                }

            }

        }else if(opciones==3){

            cout<<"\nADIOSSSSSSS"<<endl;
            
        }else{

            cout<<"\nOPCION NO VALIDA. INTENTE DE NUEVO."<<endl;

        }
        

    }
    
    return 0;
}

int Factorial(int n){

    if(n==0){//caso base

        n=1;

    }else{//caso general

        n=n*Factorial(n-1);

    }

    return n;

}