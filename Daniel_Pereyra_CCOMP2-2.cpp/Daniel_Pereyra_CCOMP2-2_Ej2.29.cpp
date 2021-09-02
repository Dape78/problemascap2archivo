#include <iostream>

using namespace std;
int main() {
  int l{0};
  int l1{1};
  int l2{2};
  int l3{3};
  int l4{4};
  int area{0};
  int area1{0};
  int area2{0};
  int area3{0};
  int area4{0};
  int volumen{0};
  int volumen1{0};
  int volumen2{0};
  int volumen3{0};
  int volumen4{0};
  
  area=6*(l*l);
  area1=6*(l1*l1);
  area2=6*(l2*l2);
  area3=6*(l3*l3);
  area4=6*(l4*l4);
  volumen=l*l*l;
  volumen1=l1*l1*l1;
  volumen2=l2*l2*l2;
  volumen3=l3*l3*l3;
  volumen4=l4*l4*l4;
  
  cout<<"Face length	Surface area	Volume      \n";
  cout<<"of cube(cm)     of cube(cm^2)   of cube(cm^3) "<<endl;
  cout<<l<<"		"<<area<<"		"<<volumen<<endl;
  cout<<l1<<"		"<<area1<<"		"<<volumen1<<endl;
  cout<<l2<<"		"<<area2<<"		"<<volumen2<<endl;
  cout<<l3<<"		"<<area3<<"		"<<volumen3<<endl;
  cout<<l4<<"		"<<area4<<"		"<<volumen4<<endl;
}
