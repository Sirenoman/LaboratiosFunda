#include <iostream>

using namespace std;
void imprimir(int arr[]){
	cout<<"Imprimir de forma descendente: "<<endl;
	for(int i=99; i>=0; i--){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int contador=1;
	int vector[100];
	//lenar array
	for(int i=0; i<100; i++){
		vector[i] = contador;	
		contador += 2;
	}
	//mostramos descendentemente
	imprimir(vector);
	return 0;
}

	