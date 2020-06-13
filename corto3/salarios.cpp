#include <iostream>
using namespace std;
float salarioR(float);
int main()
{
    int empleados, hn, he;
    float salt;
    cout<<"\nPROGRAMA PARA CALCULAR EL SALARIO MENSUAL DE SUS EMPLEADOS."<<endl;
    do
    {
        cout<<"Por favor digite la cantidad de empleados de su empresa: ";cin>>empleados;
    } while (empleados<=0);
    for (int i = 1; i <=empleados; i++)
    {
        cout<<"Ingrese las horas trabajas por el empleado "<<i<<endl;
        cout<<"Horas normales: ";cin>>hn;
        cout<<"Horas extras (Si no realizo, digite 0): ";cin>>he;
        salt = (hn*1.75)+(he*2.50);
        cout<<"Salario total = $"<<salt<<" Dolares"<<endl;
        cout<<"Salario Real = $"<<salarioR(salt)<<" Dolares"<<endl<<endl;;
    }   
    return 0;
}
float salarioR(float a)
{
    if (a>=500)
    {
        a = a - ((a*0.10) + (a*0.04) + (a*0.0625));
    }else{
        a = a - ((a * 0.04) + (a * 0.0625));
    }
    return a;
}