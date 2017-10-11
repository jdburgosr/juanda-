#include <iostream>
	
int factorial (int x) {
  if (x>1) {
    return  (x*factorial (x-1));
      }
  else {
    return ( 1);
      }
}

int main (void)
{
  double a(0),b(1);
std::cout<<"ingrese un natural: ";
std::cin>>a;
 std::cout<<a<<"!= "<<factorial (a)<<std::endl;
 std::cout<<a;
  for (a; a>1;a-=1)
     b=a*b;
   
  std::cout<<"!= "<<b<<std::endl;
   
return 0;
}
