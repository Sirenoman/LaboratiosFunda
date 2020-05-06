#include <iostream>
using namespace std;

int main()
{
    int dolar;
    float euro = 1.33;

    cout << "Por favor escriba su cantidad en dolares: ";
    cin >>dolar;
    float convertir = dolar * euro;
    cout <<"El valor en euros es:";
    cout <<convertir<<endl;


    return 0;

}