#include <iostream>
using namespace std;
int main(void)
{
int a;
cout<<"ingrese un numero natural menor o igual a diez"<<endl;
cin>>a;
if(a<=10){
cout<<"1*"<<a<<"="<<1*a<<endl;
cout<<"2*"<<a<<"="<<2*a<<endl;
cout<<"3*"<<a<<"="<<3*a<<endl;
cout<<"4*"<<a<<"="<<4*a<<endl;
cout<<"5*"<<a<<"="<<5*a<<endl;
cout<<"6*"<<a<<"="<<6*a<<endl;
cout<<"7*"<<a<<"="<<7*a<<endl;
cout<<"8*"<<a<<"="<<8*a<<endl;
cout<<"9*"<<a<<"="<<9*a<<endl;
cout<<"10*"<<a<<"="<<10*a<<endl;
}
else {
  cout<<a<<" no es un natural menor que diez\n";
}
return 0;
}
