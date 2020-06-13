#include <iostream>
using namespace std;
bool bisiesto(int);
int main()
{
    int year;
    cout<<"\nPROGRAMA PARA VER SI UN AñO ES BISIESTO"<<endl;
    do
    {
        cout<<"Ingrese el año: ";cin>>year;
    } while (year<0);
    if(bisiesto(year) == true)//con IF evalua lo que devuelve la funcion, y si es True entonces es bisiesto sino, NO lo es
    {
        cout<<"Si es Bisiesto\n";
    }else
    {
        cout<<"NO, no es Bisiesto el año\n";
    }
    return 0;
}
bool bisiesto(int a){//proceso booleano donde se evalua si es bisiesto el a?o con los dos procesos mencionados
    int b,c,d;
    b = a%400;
    c = a%4;
    d = a%100;
    if(b == 0){
        return true;
    }else if(c== 0 && d !=0){
        return true;
    }else
    {
        return false;
    }
}