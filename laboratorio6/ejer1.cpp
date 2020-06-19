#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"ingrese el tamanio del arreglo: ";cin>>n;
    int arr[n];
    //llenamos el array
    for(int i=0; i<n; i++){
        cout<<"Ingrese el dato: ";cin>>arr[i];
    }
    cout<<"\nArreglo: [";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}