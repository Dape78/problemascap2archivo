#include <iostream>

using namespace std;

int main(){
	int n1{0};
	int n2{0};
	int sum{0};
	
	cout<<"Ingrese dos enteros\n";
	cin >> n1 >> n2;
	cout <<"El numero que ingresaste fueron: " << n1 << endl;
	cout <<"El numero que ingresaste fueron: " << n2 << endl;
	sum=n1+n2;
	if (sum%2==0){
	 	cout <<"La suma es: " <<sum<<", y no es un numero impar" <<endl;	
	}else{
		cout <<"La suma es: " <<sum<<", y es un numero impar"<< endl;
	}

}
