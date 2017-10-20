#include <iostream>
#define columnas 2
#define filas 4

double foo [filas][columnas];
double fooT [2][5];
double foomult [filas][5];
int main (void)
{
  int n,m,i;
  double c(0);

  for (n=0; n<filas; n++) {
    for (m=0; m<columnas; m++) {

      foo[n][m]=(n)+m*(1+n);     
      std::cout<<foo[n][m]<<"\t";
    }
    std::cout<<std::endl;
  }

  std::cout<<"la otra es:\n";
  for (n=0; n<2; n++) {  //los limites cambian en la transpuesta
    for (m=0; m<5; m++) {

      fooT[n][m]=foo[m][n]+m*(1+3*n);     
      std::cout<<fooT[n][m]<<"\t";
    }
    std::cout<<std::endl;
  }

  std::cout<<"la multiplicacin A*B es: "<<std::endl;

  for (n=0; n<filas; n++) {

    for (m=0; m<5; m++) {

      for (i=0; i<columnas; i++) {

	c= foo[n][i]*fooT[i][m]+c;
	
      }
      foomult[n][m]=c;
	std::cout<<foomult[n][m]<<"\t";
	c=0;
    }

    std::cout<<std::endl;
  }
  
  return 0;
    }
