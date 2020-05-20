#include <iostream>
using namespace std;
//suma de numeros pares

int main(){
	int acum=0, n;
	cout<<"ingrese un numero: "<<endl;
	cin>>n;
	for(int i = 1; i<=n; i++){
		if(i%2 == 0){
			acum += i;
		}
	}
	cout<<"La suma de numeros pares es: "<<acum<<endl;
	return 0;
}