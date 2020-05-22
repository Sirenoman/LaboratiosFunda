#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char palabra[30];
    int lon;
    cout<<endl;
    cout<<"PROGRAMA PARA MEDIR LA LONGITUD DE UNA PALABRA "<<endl;
    cout<<"Digite su palabra por favor: ";
    cin.getline(palabra, 30, '\n');
    lon = strlen(palabra);
    /*Lo que hace el strlen es retornar la longitud de los caracteres de la palabra en
    enteros*/
    cout<<"Longitud: "<<lon<<endl;
    if (lon > 10 )
    {
        cout<<"La palabra es mayor a 10 caracteres. "<<endl;
    }else{
        cout<<"La palabra NO es mayor a 10 caracteres. "<<endl;
    }
    if (lon%2 == 0)
    {
        cout<<"tambien es PAR la longitud de la palabra"<<endl;
    }else{
        cout<<"Tambien es IMPAR la longitud de la palabra"<<endl;
    }

    return 0;
}