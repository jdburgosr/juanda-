#include <iostream>

int fib (int a) {
  if (a==1 ||a==0){
    return 1;}
  else {
    return fib(a-2) + fib(a-1) ;
  }
}

int main (void) {
  int max(0);
  std::cout<<"¿hasta qué numero quiere la sucesión de Fibonnacci?"<<std::endl;
  std::cin>>max;
  std::cout<<"la serie hasta "<<max<<" es:\n"<<"0\t";
  for (int i=0;i<max;++i) {
   
    std::cout<<fib(i)<<"\t";
  }
  std::cout<<std::endl;
  return 0;
}
 

 
 
  
