#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string palabra;
    cout<<"PROGRAMA QUE VERIFICA LA PRIMERA Y ULTIMA LETRA DE UNA PALABRA"<<endl<<endl;
    cout<<"Ingrese su palabra: ";
    cin>>palabra;
    // .front() retorna el primer elemento de la variable guardada y .back() retorna el ultimo elemento de la variable
    if(palabra.front()==palabra.back())
    {
        cout<<"La primera letra y La ultima son iguales. "<<endl<<endl;
    }else{
        cout<<"La primera letra y La ultima NO son iguales. "<<endl<<endl;
    }
    
    return 0;
}