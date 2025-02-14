//Un almacén de pedidos por correo vende cinco productos distintos, cuyos precios de venta son los siguientes: producto 
//1, $2.98; producto 2, $4.50; producto 3, $9.98; producto 4, $4.49 y producto 5, $6.87. Escriba un programa que lea una serie 
//de pares de números, como se muestra a continuación:
 //a) número del producto;
// b) cantidad vendida.
 //Su programa debe utilizar una instrucción switch para determinar el precio de venta de cada producto. Debe calcular y 
//mostrar el valor total de venta de todos los productos vendidos. Use un ciclo controlado por centinela para determinar 
//cuándo debe el programa dejar de iterar para mostrar los resultados fi nales.

#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

int main(){

    int producto,cantidad;
    double TotalVenta=0.0;

    cout<<"Ingrese el numero del producto (1-5) y la cantidad vendidad."<<endl;
    cout<<"Ingrese 0 como numero de producto para finalizar.\n";

    //aqui un bucle se controla por el centinela

    while (true)
    {
        
        cout<<"\nNumero del producto (1-5, 0 para salir): ";
        cin>>producto;

        //si el usuario ingresa 0, se termina el programa
        if (producto==0)
        {
            
            break;

        }

        //aqui se valida que el producto este en el rango correctooo
        if (producto<1||producto>5)
        {
            
            cout<<"Producto invalido. Ingrese un numero entre 1 y 5"<<endl;
            continue;//aqui se vuelve a solicitar la entrada 

        }

        cout<<"Cantidad vendida: ";
        cin>>cantidad;

        if (cantidad<0)
        {
            
            cout<<"Cantidad invalida. Debe ser un numero positivo."<<endl;
            continue;

        }

        double precio=0.0;

        //aqui se determina el precio segun el numero de producto
        switch (producto)
        {
        case 1: precio = 2.98; break;
        case 2: precio = 4.50; break;
        case 3: precio = 9.98; break;
        case 4: precio = 4.49; break;
        case 5: precio = 6.87; break;

        }
        
        //aqui se calcula el subototal y acumular el total de venta
        double subtotal=precio*cantidad;
        TotalVenta+=subtotal;

        cout<<"Subtotal por este producto: $"<<subtotal<<endl;
        

    }

    cout<<"\nTotal de ventas: $"<<TotalVenta<<endl;
    

    return 0;
}