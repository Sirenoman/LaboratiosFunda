#include <iostream>
using namespace std;

int main()
{
    int nm=47, res, i=5, con=0;
    cout<<"\nBIENVENIDO! Al juego de adivinar el numero magico.\nEl numero esta en el  rango del 1 al 100,"<<endl;
    cout<<"Digite un numero o escriba crtl+Z para salir\n";
    //con ciclo while evaluara tres condiciones para verificar si quieres escribir un numero y si se paso de N° de intentos
    while (cin>>res && i!=0 && res!=nm)
    {
        if (res>nm)
            cout<<"\n"<<res<<" es mayor que el numero magico."<<endl;
        if(res<nm)
            cout<<"\n"<<res<<" es menor que el numero magico."<<endl;
        cout<<"Te quedan "<<i--<<" intentos"<<endl;
        cout<<"Digite un numero o escriba crtl+Z para salir\n";
    }
    //condicion para evaluar si es correcta y decirlo  al usuario si lo hizo bien o no
    if (res==nm)
    {
        cout<<"\nFELICIDADES lo has logrado\n";
    }else
    {
        cout<<"\nBUEN INTENTO\n";
    }
    return 0;
}