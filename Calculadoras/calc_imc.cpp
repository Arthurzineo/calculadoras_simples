//Este programa lê as varivaveis mass e alt e calcula o IMC.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	float mass, alt, imc;
 	
 	printf("\n\nDigite seu peso em Kg:\n\n");
 	scanf("%f", &mass);
 	
	 printf("\n\nDigite sua altura em metros:\n\n");
 	scanf("%f", &alt);
 	
 	imc = mass/pow(alt,2);
 	
 	printf("\n\nseu IMC é:%0.2f\n\n",imc);
 	
  system("PAUSE");
  return(0);
 }