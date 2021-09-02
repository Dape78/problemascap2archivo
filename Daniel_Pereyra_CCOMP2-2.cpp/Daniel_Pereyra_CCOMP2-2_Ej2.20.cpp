//calcular el diametro y area de un circulo donde se ingrese el radio.

#include <iostream>

using namespace std;

int main(){
	int radio{0};
	int diametro{0};
	int area{0};
	
	
	cout<<"Ingrese el radio de la circunferencia: "; cin>>radio;
	diametro=2*radio;
	area=3.14159*(radio*radio);
	cout<<"El diametro es:" <<diametro<<endl;
	cout<<"El area es: " <<area<<endl;
		
}
