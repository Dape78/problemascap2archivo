#include <iostream>
using namespace std;

int main(){
	int n1{0};
	int n2{0};
	int n3{0};
	int n4{0};
	int n5{0};
	int mayor{0};
	int menor{0};
	
	cout<<"Ingrese cinco numeros enteros para determinar el mayor y menor\n";
	cin >> n1 >> n2 >>n3 >> n4 >> n5;
	
	if (n1>n2){
		mayor=n1;
		menor=n2;	
	}else{
		mayor=n2;
		menor=n1;	
	}
	if (n3>mayor){
		mayor=n3;
	}
	if (n3<menor){
		menor=n3;
	}
	if (n4>mayor){
		mayor=n4;
	}
	if (n4<menor){
		menor=n4;
	}	
	if (n5>mayor){
		mayor=n5;
	}
	if (n5<menor){
		menor=n5;
	}
	 cout<<"El mayor es: "<<mayor<< ", y el menor es: "<<menor<<endl;
}
