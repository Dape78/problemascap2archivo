/*write a program that reads in three integers and determines and prints 
if the first two integers are factors of the second 
*/
#include <iostream>

using namespace std;

int main(){
	int n1{0};
	int n2{0};
	int n3{0};
	
	cout<<"Ingrese tres enteros para determinar si los dos primeros son factores del segundo\n";
	cin >> n1 >> n2 >> n3;
	if (n1%n2==0){
	 	cout <<n1<<" es un factor de "<<n2<<endl;	
	}else{
		cout <<n1<<" no es un factor de "<<n2<<endl;
	}
		

}
