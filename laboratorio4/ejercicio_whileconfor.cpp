#include <iostream>
using namespace std;
//ejercicio con while Y FOR, buscando el factorial de un numero

int main(){
	long long factorial =1;
    int n;
	do{
		cout<<"ingrese numero por favor: "<<endl;
        cin>>n;
	
	}while(n<=0);
    
	for(int i=1; i<=n; i++){
		factorial*=i;
	}
	cout<<"El factorial de: "<<n<<" es "<<factorial<<endl;
	return 0;
}