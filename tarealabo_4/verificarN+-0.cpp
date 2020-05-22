#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<endl;
    cout<<"PROGRAMA PARA VER SI UN NUMERO ES POSITIVO, NEGATIVO O ES 0. "<<endl;
    cout<<"Ingrese numero porfavor: ";
    cin>>n;
    if (n>0)
    {
        cout<<"Es positivo "<<endl;
    }else if (n<0)
    {
        cout<<"Es negativo "<<endl;
    }else
    {
        cout<<"Ingresaste 0."<<endl<<endl;
    }
    return 0;
}