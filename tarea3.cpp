#include <iostream>
int main(void)
{
int a,ii=1;
std::cout<<"ingrese un dia de noviembre (noviembre tiene treinta dias)\n";
std::cin>>a;
if(0<a && a<=30)
{
for(ii;ii<=7;ii++)
{
if((a-ii)%7==0) break;
}
if(ii==1) std::cout<<"ese dia es miercoles\n";
if(ii==2) std::cout<<"ese dia es jueves\n";
if(ii==3) std::cout<<"ese dia es viernes\n";
if(ii==4) std::cout<<"ese dia es sabado\n";
if(ii==5) std::cout<<"ese dia es domingo\n";
if(ii==6) std::cout<<"ese dia es lunes\n";
if(ii==7) std::cout<<"ese dia es martes\n";
}
else
{
 std::cout<<"numero ingresado invalido\n";
}
}
