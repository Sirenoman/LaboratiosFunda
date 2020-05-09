#include <iostream>
#include <cmath>

using namespace std;
const double PI  =3.141592653589793238463;
float radio;
float per;
float ar;
int main()
{
    cout << " PROGRAMA PARA CALCULAR AREA Y PERIMETRO DE UN CIRCULO "<<endl;
    cout << "Inserte valor del Radio : ";
    cin >> radio;
    cout <<endl;
    per = (2*radio)* PI;
    ar = PI * pow(radio,2);
    cout << "El perimetro es: "<<per<<endl;
    cout << "El area es: "<<ar<<endl;   

    return 0;
}