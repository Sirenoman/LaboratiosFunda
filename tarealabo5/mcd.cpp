#include <iostream>
using namespace std;
int mcd(int, int);
int main()
{
	int num1, num2;
	cout<<"ingrese el primer numero: ";cin>>num1;
	cout<<endl;
	cout<<"Ingrese el segundo numero: ";cin>>num2;
	cout<<"El M.C.D de los dos numeros es: "<<mcd(num1, num2)<<endl;
	return 0;
}

int mcd(int a, int b){
	int res =0;
	int r;
	do{
		r = a%b;
        if(r > 0){
            a=b;
            b=r;
            res=b;
        }else{
            res=b;
        }
	}while(r>0);
    return res;
}