#include <iostream>

using namespace std;
//tambien se puede declarar e implementar una funcion antes de main
int solicitar(int n){
    int contador =0;
    for (int i=0; i<n; i++){
        char vocal;
        cout<<"Ingrese una vocal: ";
        cin>>vocal;
        switch (vocal)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contador +=1;
            break;
        default:
            break;
        }
    }
    return contador;
}

int main(){
    int n;
    cout<<"Ingrese la cantidad de caracteres a ingresar: ";cin>>n;
    cout<<"aparecen "<<solicitar(n)<<" vocales"<<endl;
    return 0;
}