#include <iostream>
using namespace std;
int darvuelta(int );
int main()
{
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<"El numero al reves es: "<<darvuelta(numero)<<endl;
    return 0;
}

int darvuelta(int n){

    int aux =0;
    while(n>0)
    {//multiplica el auxiliar por diez y le suma el modulo de n con 10 que seria el ultimo numero de n 
        aux =aux*10 + n%10;
        n = n/10; //aqui se le quita las decenas   
    }
    return aux;
}