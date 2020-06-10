#include <iostream>

using namespace std;
int main()
{
    int numero, uni, dece, cente, mili;
    cout<<"Ingrese un numero cualquiera: ";cin>>numero;
    cout<<endl<<endl;
    uni = numero%10;
    numero = numero/10;
    dece = numero%10;
    numero = numero/10;
    cente = numero%10;
    numero = numero/10;
    mili = numero;
    cout<<"El numero "<<numero<<" tiene:\n"<<uni<<" unidades\n"<<dece<<" decenas\n"<<cente<<" centenas\n"<<mili<<" milesimas\n";
    return 0;
}
