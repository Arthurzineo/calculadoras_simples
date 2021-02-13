//leia o raio e calcule a area e perimetro do circulo

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//--------------------------------------------//
 int main()
 {
//--------------------------------------------//
	 float raio, area, peri;
//--------------------------------------------//
 	printf("\n\ninforme o valor do raio do circulo:\n\n");
 	scanf("%f", &raio);
//--------------------------------------------//
 	area = 3,14*raio*raio;
 	peri = 2*3,14*raio;
//--------------------------------------------//	
 	printf("\n\n o valor da area do circulo eh:%0.2f",area);
 	
 	printf("\n\n o valor do perimetro do circulo eh:%0.2f",peri);
//--------------------------------------------//	
  system("PAUSE");
  return(0);	
 }
 