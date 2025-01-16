#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define Roy main

using namespace std;

int fibonnaci(int n);

int Roy(){

    int nelementos;

    do
    {
        
        cout<<"Digite el numero de elementos: ";
        cin>>nelementos;

    } while (nelementos<=0);

    cout<<"Serie de fibonacci: ";
    for (int i = 0; i < nelementos; i++)
    {
        
        cout<<fibonnaci(i)<<" , ";

    }
    
    

    return 0;
}

int fibonnaci(int n){

    if(n==0){

        return 0;

    }else if(n==1){

        return 1;

    }else{

        return fibonnaci(n-1)+fibonnaci(n-2);

    }

}
