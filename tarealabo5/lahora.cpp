#include <iostream>
using namespace std;

int main()
{
    int h, m, s;
    string c;
    cout<<"\nprograma para ver la hora un segundo adelantado."<<endl;
    do
    {
        cout<<"Ingrese la hora correcta:"<<endl;
        cin>>h;
    } while (h<0 || h>=24);
    do
    {
        cout<<"Ingrese los minutos correctos:"<<endl;
        cin>>m;
    } while (m<0 || m>=60 );
    do
    {
        cout<<"Ingrese los segundos correctos:"<<endl;
        cin>>s;
    } while (s<0 || s>=60);
    s++;
    if (s >=60)
    {
        s = 0;
        m++;
        if (m>=60)
        {
            m = 0;
            h++;
            if (h>=24)
                h=0;
        }
    }
    if (h>12)
        c="pm";
    else
        c="am";
    cout<<h<<":"<<m<<":"<<s<<" "<<c<<endl;
    return 0;   
}