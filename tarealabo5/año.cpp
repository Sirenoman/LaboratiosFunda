#include <iostream>
using namespace std;
bool bisiesto(int);
int main()
{
    int year;
    cout<<"\nPROGRAMA PARA VER SI UN AÑO ES BISIESTO"<<endl;
    do
    {
        cout<<"Ingrese el año: ";cin>>year;
    } while (year<0);
    if(bisiesto(year) == true)
    {
        cout<<"Si es Bisiesto\n\n";
    }else
    {
        cout<<"NO, no es Bisiesto el año\n\n";
    }
    return 0;
}
bool bisiesto(int a){
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