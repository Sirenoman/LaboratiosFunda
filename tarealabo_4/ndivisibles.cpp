#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<endl;
    cout<<"PROGRAMA PARA VER SI 2 NUMEROS SON DIVISIBLES ENTRE SI. "<<endl;
    cout<<"ingrese primer numero porfavor: ";
    cin>>a; 
    cout<<endl;
    cout<<"Ingrese segundo numero porfavor: ";
    cin>>b;
    if (a%b == 0)
    {
        cout<<"Son numeros divisibles entre si"<<endl;
    }else
    {
        cout<<"NO son numeros divisibles entre si"<<endl;
    }
    
    return 0;
}