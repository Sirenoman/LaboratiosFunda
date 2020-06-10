#include <iostream>
using namespace std;
int buscar(int cantidad, int digito){
    //se le pasa un numero n y del digito que pide hay que buscarlo
    int contador = 0;
    int aux = cantidad;
    while(cantidad>0)
    {
        cantidad%=10;
        if(cantidad == digito)
            contador +=1;
        aux/=10;
        cantidad = aux;
    }
    return contador;
}
int main(){
    int nume, dig;
    cout<<"Ingrese una cantidad: ";cin>>nume;
    cout<<"Ingrese un digito a busca: ";cin>>dig;
    cout<<"El numero "<<dig<<" aparece "<<buscar(nume, dig)<<endl;
    return 0;
}