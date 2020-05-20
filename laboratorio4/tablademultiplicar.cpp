#include <iostream>
using namespace std;
//tabla de multiplicar con FOR

int main(){
	int n;
	cout<<"ingrese la tabla a calcular: ";
	cin>>n;
	
	for(int i=1; i<=10; i++){
		cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;

	}
	return 0;
}