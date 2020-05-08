#include <iostream>

using namespace std;
int num1;
int num2;
int num3;
int promedio;

int main()
{
    cout <<"->Programa para sacar promedio de tres numeros Enteros"<<endl;
    cout << "Inserte primer numero:"; 
    cin >> num1;
    cout <<"Inserte segundo numero: ";
    cin >> num2;
    cout <<"Ahora, Tercer numero: ";
    cin >> num3;
    promedio = (num1+num2+num3)/3;
    cout << "Su promedio es: "<<promedio<<endl;
}