#include <iostream>

using namespace std;
int main() {
  int numero{0};
  int numero1{0};
  int n1{0};
  int n2{0};
  int n3{0};
  int n4{0};
  cout<<"Ingrese un numero con 4 digitos";
  cin>>numero;

  n1=numero/1000;
  n2 =numero/100 %10;
  n3 =numero/10 % 10;
  n4 =numero%10;


  cout<<n4<<"  "<<n3<<"  "<<n2<<"  "<<n1<<endl;	

}
