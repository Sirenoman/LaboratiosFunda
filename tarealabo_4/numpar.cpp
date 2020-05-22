#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<endl;
    cout<<"PROGRAMA PARA VER SI UN NUMERO ES PAR."<<endl;
    do
    {
        cout<<"Ingrese un numero porfavor: ";
        cin>>num;
        if(num>0)
        {
            if (num%2 == 0)
            {
                cout<<"Es un numero PAR"<<endl;
            }else
            {
                cout<<"Es un numero IMPAR"<<endl;
            }
        }
        
    } while (num>0);
    
    cout<<"Escribiste un numero que no se puede demostar"<<endl<<endl;
    return 0;
    
}