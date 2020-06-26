#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void murcielago(char[]);
int main(){
    char palabra[50];
    cout<<"\nCLAVE DE MURCIELAGO PARA CAMBIAR CARACTERES\n";
    cout<<"digite una cadena: ";
    cin.getline(palabra, 50, '\n');//ocupo getline para poder escribir una linea con espacios
    
    //Se llama a la funcion que recorre el arreglo de caracteres e imprime la clave.
    murcielago(palabra);
    return 0;
}
void murcielago(char a[]){
    int i=0;
    while(a[i] !='\000'){
    
        switch (a[i])
        {
        case 'm':
            a[i] = '0';
            break;
        case 'u':
            a[i] = '1';
            break;
        case 'r':
            a[i] = '2';
            break;
        case 'c':
            a[i] = '3';
            break;
        case 'i':
            a[i] = '4';
            break;
        case 'e':
            a[i] = '5';
            break;
        case 'l':
            a[i] = '6';
            break;
        case 'a':
            a[i] = '7';
            break;
        case 'g':
            a[i] = '8';
            break;
        case 'o':
            a[i] = '9';
            break;
        default:
            break;
        }
        i++;
    }
    cout<<a<<endl;
}