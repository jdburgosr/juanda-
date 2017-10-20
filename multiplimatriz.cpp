#include <iostream>
#define columnas 5
#define filas 3

int foo [filas][columnas];
int fooT [columnas][filas];
int foomult [filas][filas];
int main (void)
{
  int n,m,i;
  int c(0);

  for (n=0; n<filas; n++) {
    for (m=0; m<columnas; m++) {

      foo[n][m]=(n+1)*(m+1);     
      std::cout<<foo[n][m]<<"\t";
    }
    std::cout<<std::endl;
  }

  std::cout<<"su transpuesta es:\n";
  for (n=0; n<columnas; n++) {  //los limites cambian en la transpuesta
    for (m=0; m<filas; m++) {

      fooT[n][m]=foo[m][n];     
      std::cout<<fooT[n][m]<<"\t";
    }
    std::cout<<std::endl;
  }

  std::cout<<"la multiplicacin A*At es: "<<std::endl;

  for (n=0; n<filas; n++) {

    for (m=0; m<filas; m++) {

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
