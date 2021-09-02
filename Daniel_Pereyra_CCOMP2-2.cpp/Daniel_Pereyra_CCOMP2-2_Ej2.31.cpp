#include <iostream>

using namespace std;

int main(){
	int a{0}; //Total de millas recorridos al dia
	int b{0}; //Coste por galon de gasolina
	int c{0}; //Promedio de millas por galon
	int d{0}; //Coste del aparcamiento por dia
	int e{0}; //Herramientas por dia
	int oper1{0};
	int oper2{0};
	int resp{0};
	cout<<"Ingrese las millas recorridas al dia: ";
	cin>>a;
	cout<<"Ingrese costo de gasolina por galon: ";
	cin>>b;
	cout<<"Ingrese el promedio de millas por galon: ";
	cin>>c;
	cout<<"Ingrese coste del aparcamiento por dia: ";
	cin>>d;
	cout<<"Ingrese costo de herramientas por dia: ";
	cin>>e;
	oper1=d+e;  //Suma de Coste del aparcamiento por dia + Herramientas por dia
	oper2=(a/c)*b; // (Total de millas recorridos al dia / Promedio de millas por galon)* Coste por galon de gasolina
	resp=oper1+oper2;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"El costo diario por ir al trabajo es de: "<<resp<<endl;
		
}
