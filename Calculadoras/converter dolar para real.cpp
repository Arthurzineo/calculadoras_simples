//converter dolar para real.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	float dolar, real;
 	printf("\n\ncolocar um valor em dolar para coverter para reais:\n\n");
 	scanf("%f", &dolar);
 	
 	real = dolar*5.37;
 	
 	printf("\n\nO valor convertido ficou: %0.2f reais \n\n",real);
 	
 	
  system("PAUSE");
  return(0);	
 }