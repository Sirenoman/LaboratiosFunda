#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int cant;
float precio;
int con = 0;
float total = 0;

int main()
{
    cout << "BIENVENIDO A TU CAJERO DE PRODUCTOS."<<endl;
    cout <<"Por favor, escriba los productos con su precio y cantidad comprada."<<endl;
    do
    {
        cout << "1. Comprar"<<endl; 
        cout << "2. Retirar compra"<<endl;
        cin >> con;
        cin.ignore(255, '\n');
        if (con == 1)
        {
            cout <<"Producto:";
            string producto;
            getline(cin,producto);
            cout<<endl;
            cout <<"Cantidad: ";
            cin >> cant;
            cout<<endl;
            cout <<"Precio: ";
            cin >> precio;
            cout <<endl;
            total = total + (precio*cant);
            
        }else if (con != 2 && con !=1)
        {
            cout <<"¡No es una opcion dentro del programa!"<<endl;
        }

    } while (con != 2);
    
    cout<<"Su factura es gracias a SS: \n";
    cout <<"Total a pagar: $";
    cout <<total<<endl;

    return 0;
}