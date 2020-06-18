#include <iostream>
using namespace std;
bool bisiesto(int);
int main(){
    int dia, mes, year, limited;
	cout<<"Programa para ver el dia siguiente a la fecha que usted digite\n";
	do{
		cout<<"Digite dia: ";cin>>dia;
		if(dia<0 || dia>31)
			cout<<"Error al digitar dia.\n";
	}while(dia<0 || dia>31);
	do{
		cout<<"Digite mes: ";cin>>mes;
		if(mes<0 || mes>12)
			cout<<"Error al digitar mes.\n";
	}while(mes<0 || mes>12);
	do{
		cout<<"Digite año: ";cin>>year;
		if(year<0)
			cout<<"Error al digitar año.\n";
	}while(year<0);
	if(dia>29 && mes==2)
		cout<<"ERROR, fecha digitada no es valida.\n";
	else if(dia>30 && (mes==4 || mes==11 ||mes==6 || mes==9)){
		cout<<"ERROR, fecha digitada no es valida.\n";
	}else{
			
		switch(mes)
		{
		case 1:
			limited = 31;
			break;
		case 2:
			if(bisiesto(year) == true)
				limited = 29;
			else
				limited=28;
			break;
		case 3:
			limited = 31;
			break;
		case 4:
			limited  = 30;
			break;
		case 5:
			limited = 31;
			break;
		case 6:
			limited = 30;
			break;
		case 7:
			limited = 31;
			break;
		case 8:
			limited = 31;
			break;
		case 9:
			limited = 30;
			break;
		case 10:
			limited = 31;
			break;
		case 11:
			limited = 30;
			break;
		case 12:
			limited = 31;
			break;
		default:
			break;
		}
		dia++;
		if(dia>limited){
			dia = 1;
			mes++;
			if(mes>12){
				mes=1;
				year++;
			}
		}
		cout<<"Fecha: "<<dia<<"/"<<mes<<"/"<<year<<endl;
	}
	return 0;
}
//funcion de bisiesto
bool bisiesto(int a){
	int b, c, d;
	d = a%400;
	if(d==0){
		return true;
	}
	c = a%4;
	d = a%100;
	if(c==0 && d!=0){
		return true;
	}else{
		return false;
	}
}