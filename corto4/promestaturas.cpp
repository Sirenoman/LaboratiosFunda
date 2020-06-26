#include <iostream>
#include <iomanip>

using namespace std;
float prom(float[]);
void calculodeprom(float[], float);
int main(){
    float altura[25], prome;
    int i;
    cout<<"\nCALCULO DEL PROMEDIO DE ALTURA DE 25 ALUMNOS"<<endl;
    cout<<"Comience ingresando las alturas\n";
    for(i=0;i<25;i++){//Ingrese las alturas de los 25 alumnos
        cout<<"Ingrese altura "<<i+1<<": ";
        cin>>altura[i];
    }
    prome =prom(altura); //El valor que regrese el promedio que lo guarde para trabajarlo en la otra funcion
    /*setprecision() es para redondear el resultado del promedio al menos a 3 numeros*/
    cout<<"el promedio de las alturas es: "<<setprecision(3)<<prome<<endl;
    //Llamamos a la otra funcion que dice cuales estan arriba o abajo de la media
    calculodeprom(altura, prome);
    return 0;
}
float prom(float a[]){
    float promedio, suma=0;
    int i;
    for(i=0;i<25;i++){
        suma = suma + a[i]; 
    }
    promedio= suma/25;
    return promedio;
}
void calculodeprom(float a[], float media){
    int i=0, cont1=0, cont2=0;
    while(i<25){
        if(a[i] > media)
            cont1++;
        else if(a[i] < media)
            cont2++;
        i++;
    }
    cout<<"Existen "<<cont1<<" de estaturas arriba de la media y "<<endl;
    cout<<"Existen "<<cont2<<" de estaturas abajo de la media. "<<endl;
}