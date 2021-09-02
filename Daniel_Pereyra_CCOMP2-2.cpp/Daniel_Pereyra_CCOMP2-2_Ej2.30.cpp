#include <iostream>

using namespace std;

int main(){
	int peso{0};
	float altura{0}; 
	float BMI;
	
	cout<<"Introduzca el peso en kg y luego su altura en metros\n";
	cin>>peso>>altura;
	BMI = peso / (altura * altura);
	
	
	cout<<"Tu indice de masa corporal es: " << BMI << endl ;
	cout<<"VALORES DE IMC"<<endl;
	cout<<"Bajo de peso: Menos de 18.5"<<endl;
	cout<<"Normal: Entre 18.5 y 24.9"<<endl;
	cout<<"Sobrepeso: Entre 25 y 29.9"<<endl;
	cout<<"Obeso: 30 o mas"<<endl;	
}
