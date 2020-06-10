#include <iostream>
using namespace std;
int main()
{
    int n, suma, cont, prom;
    suma = 0; cont = 0; prom = 0;
    while(n>0)
    {
        cout<<"Ingrese un numero cualquier, y sino quiere seguir ingresando digite 0: ";cin>>n;
        if (n>0)
        {
            suma += n;
            cont ++;
        }
    }
    prom = suma / cont;
    cout<<"Promedio es de: "<<prom<<endl;
    return 0;
}