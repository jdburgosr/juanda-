#include <iostream>

int suma (int a,int b) {
  return a+b;
}
int main (void)
{
  int a(0),b(0);
  std::cout<<"ingrese los dos enteros: ";
  std::cin>>a>>b;
  int z(0);
  std::cout<<suma(a,b)<<"\n";
  return 0;
}
