#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int productos,cantidad;
    double precio,totalventa=0.0;

    cout<<"Ingrese el numero del producto 1 - 5 y la cantidad vendida (-1 para terminar):\n ";

    while (true)
    {
        
        cout<<"Producto: ";
        cin>>productos;

        if (productos == -1)
        {

            break;

        }

        cout<<"Cantidad: ";
        cin>>cantidad;

        switch (productos)
        {
        case 1:
            
            precio=2.98;

            break;
        
        case 2: 

            precio=4.50;
            break;
        
        case 3: 

            precio=9.98;
            break;

        case 4: 

            precio=4.49;
            break;

        case 5: 

            precio=6.87;
            break;
        
        default:

            cout<<"Numero de producto  invalido, vuelvalo a intentar\n";
            
            continue;

        }

        double subtotal = precio*cantidad;
        totalventa+=subtotal;
        

    }
    
    cout<<fixed<<setprecision(2);
    cout<<"Total de venta: $"<<totalventa<<endl;

    return 0;
}