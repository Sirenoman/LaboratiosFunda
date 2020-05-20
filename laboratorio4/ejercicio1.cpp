#include <iostream>
using namespace std;
//ejemplo con ciclo WHILE

int main()
{
	int n;
	while(n != 0){
		cout<<"ingrese numero por favor"<<endl;
		cin>>n;
		if(n % 2 == 0){
			cout<<"el numero es par"<<endl;
		}else{
			cout<<"El numero es impar"<<endl;
		}
		
	}	
	cout<<"Metiste el numero 0"<<endl;



	return 0;
}