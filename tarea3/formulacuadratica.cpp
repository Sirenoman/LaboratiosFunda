#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int a, b, c;
float x;
cout << "Tu programa para saber resultado de 3 valores con formula cuadratica: "<<endl;
cout << "Ingrese a: ";
cin >> a;
cout << "Ingrese b: ";
cin >> b;
cout << "Ingrese c: ";
cin >> c;

x = (-b +sqrt(pow(b,2) - 4*a*c))/(2*a);

cout <<"El resultado es: ";
cout << x<<endl;

return 0;
}