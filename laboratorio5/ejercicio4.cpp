#include <iostream>
using namespace std;
int solicitar(){
    int n;
    int contador = 0;
    while(n!=0)
    {
        char vocal;
        cout<<"Ingrese una vocal: ";
        cin>>vocal;
        switch(vocal)
        {
            case 'a':
		    case 'e':
		    case 'i':
		    case 'o':
		    case 'u':
			    contador +=1;
			    break;
		    default:
                break;
        }
        cout<<"Quiere seguir? SI =1 NO=0: ";
        cin>>n;
    }
    return contador;
}

int main()
{
    cout<<"Aparecen "<<solicitar()<<" las vocales"<<endl;
    return 0;
}