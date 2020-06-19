#include <iostream>

using namespace std;
int main(){
    int n, busc, cont=0;
    cout<<"Ingrese el tamanio del arreglo: ";cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){//llenar el arreglo
        cout<<"Ingrese digito: ";cin>>arr[i];
    }
    cout<<"Que numero desea buscar en el arreglo: ";cin>>busc;
    for (int i = 0; i <n; i++)
    {
        if(busc == arr[i]){
            cont++;
        }
    }
    cout<<"El numero "<<busc<<" Aparece un total de: "<<cont<<" veces en el arreglo"<<endl;
    return 0;
}