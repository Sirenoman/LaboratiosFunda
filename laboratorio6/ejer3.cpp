#include <iostream>
#include <math.h>
using namespace std;
float promedio(int a[], int n);
float incerteza(float a[], int n);
int main(){
    int n;
    cout<<"Ingrese el tamanio del arreglo: ";cin>>n;
    float arreglo[n];
    //se llena el arreglo
    for(int i=0; i<n; i++){
        cout<<"Ingrese el dato: ";cin>>arreglo[i];
    }
    cout<<"El valor de la incerteza es : "<<incerteza(arreglo, n)<<endl;
    return 0;
}
float promedio(float array[], int n){
    float suma=0, promedio;
    for(int i=0; i<n; i++){
        suma+= array[i];
    }
    promedio = suma/n;
    return promedio;
}
float incerteza(float a[], int n){
    float suma=0, resta, prom=promedio(a,n), resultado;
    for(int i=0; i<n; i++){
        resta=a[i]-prom;
        suma += pow((resta),2);
    }
    resultado = suma/(n-1);
    resultado = sqrt(resultado);
    return resultado;

}
