#include <iostream>

using namespace std;
float leerarr(float arr[],int );
float suma(float arr[], float arr2[],int , float resul[]);
void desplegar(float vector[], int);
int main(){
    int n;
    cout<<"Ingrese el tamanio general de los arreglo: ";cin>>n;
    float a1[n], a2[n], result[n];
    cout<<"Llenar con datos el arreglo 1: "<<endl;
    leerarr(a1,n);
    cout<<"Llenar con datos el arreglo 2: "<<endl;
    leerarr(a2, n);
    suma(a1, a2, n, result);
    desplegar(result, n);

    return 0;
}
float leerarr(float a1[], int n){
    for (int i = 0; i<n; i++)
    {
        cout<<"Ingrese dato:  ";cin>>a1[i];
    }
}
float suma(float arr[], float arr2[], int n, float result[]){
    for(int i=0; i<n; i++){
        result[i] = arr[i] + arr2[i];
    }
}
void desplegar(float vector[], int n){
    cout<<"Arreglo resultante: [";
    for(int i=0; i<n; i++){
        cout<<vector[i]<<" ";
    }
    cout<<"]"<<endl;
}