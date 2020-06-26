#include <iostream>
#include <iomanip>

using namespace std;
int llenarmatriz (float[][5], int);
float calculonota(float[][5], int);
int main(){
    int n;
    cout<<"CALCULO DE NOTAS DE N ALUMNOS\n";
    cout<<"Por favor ingrese la cantidad de alumnos en enteros: ";cin>>n;
    float notas[n][5];
    //lee la matriz
    llenarmatriz(notas, n);
    //se calcula la nota final y con setprecision lo redondea
    calculonota(notas, n);
    return 0;
    
}
int llenarmatriz(float notas[][5], int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cout<<"Inserte nota N "<<j+1<<" del alumno "<<i+1<<": ";
            cin>>notas[i][j];
        }
        cout<<endl;
    }
}
float calculonota(float nota[][5], int n){
    float suma=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            suma = suma + (nota[i][j]*0.20);
        }
        if(suma> 7.00){
            cout<<"El alumno "<<i+1<<" con promedio "<<setprecision(3)<<suma<<" HA APROBADO"<<endl;
            suma=0; //Se le borran los resultados para que no se sumen con los del siguente
        }else{
            cout<<"El alumno "<<i+1<<" con promedio "<<setprecision(3)<<suma<<" HA REPROBADO"<<endl;
            suma=0; //Lo mismo para el caso de si Reprueba
        }
    }
}