#include <iostream>
#include <string.h>

const int longCAD = 20;
using namespace std;

struct Articulo{
    char nombreArticul[longCAD +1];
    int cantidad;
    float precio;
    float costoxarticulo;
};

void leerArticulos(Articulo * , int);
void mostrarArticulos (Articulo *, int);
float calcularCosto(Articulo *, int);
void costoTotalcompra(Articulo *, int);

int main(){
    int nArticulos;
    float Total;
    cout<<endl;
    cout<<"PROGRAMA QUE TE REGRESA TU FACTURA DE COMPRA,"<<endl<<endl;
    cout<<"Por favor digite la cantidad de articulos que va a comprar: "; 
    cin>> nArticulos;
    cin.ignore(100, '\n');
    Articulo *factura = new Articulo[nArticulos];/*Con el puntero *factura podre trabajar 
    los datos del arreglo dentro de la funcion*/
    leerArticulos(factura, nArticulos);
    calcularCosto(factura, nArticulos);
    mostrarArticulos(factura, nArticulos);
    costoTotalcompra(factura, nArticulos);
    cout<<"\nGracias por comprar en nuestra tienda.\nVuelva pronto";
    cout<<endl;
    return 0;
}
//funcion que lee los datos de la estructura
void leerArticulos( Articulo *datos, int n){
   int i;
   char nombre[longCAD];
   cout<<"Escriba los datos que se les pide de cada articulo, por favor. "<<endl;
   for(i=0; i<n; i++){
       cout<<"Nombre del articulo: ";
       cin.getline(datos[i].nombreArticul, longCAD, '\n');
       datos[i].nombreArticul[longCAD]='\0';//Ayuda a dejar el tamaño correcto si la cadena pasa de 20 caracteres
       cout<<"Precio unitario del articulo: ";
       cin >> datos[i].precio;
       cout<<"Cantidad: ";
       cin >> datos[i].cantidad;
       cout<<endl;
       cin.ignore(100, '\n');
   }
    system("cls");
}
//Funncion que calcula el costo por articulo
float calcularCosto(Articulo *dato, int n){
    int i;
    for(i=0; i<n; i++){
        dato[i].costoxarticulo = dato[i].precio * dato[i].cantidad;
    }
}
//Funcion que muestra el contenido del arreglo
void mostrarArticulos(Articulo *datos, int n){
    int i;
    cout<<"SU FACTURA ES."<<endl;
    for(i=0; i<n; i++){
        cout<<"Articulo "<<i+1<<": " << datos[i].nombreArticul << endl;
        cout<<"Cantidad: " << datos[i].cantidad << endl;
        cout<<"Precio: $" << datos[i].precio << endl;
        cout<<"Costo por el Articulo: $" << datos[i].costoxarticulo << endl;
    }
}
//Funcion que Retorna el Costo TOTAL de la compra
void costoTotalcompra(Articulo *dato, int n){
    cout<<"\nEl costo total de su compra es: $";
    int i; 
    float total=0;
    for(i=0; i<n; i++){
        total = total + dato[i].costoxarticulo;
    }
    cout<<total;
}