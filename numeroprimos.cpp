#include <iostream>
int f(int a) {
  int b(1),c(0);
  for (b;b<=a;++b){
    if (a%b==0) { ++c; }
  }
  if ( c==2) { return 1; }
  else {
    return 0;
  }
}


int main (void)
{
  int ii=1,n=0;
  for (ii;ii<=1000;++ii) {
    if (f(ii)==1){
      n++;
    }
    std::cout<<ii<<"\t"<<n<<"\n"; }
  
return 0;
}
