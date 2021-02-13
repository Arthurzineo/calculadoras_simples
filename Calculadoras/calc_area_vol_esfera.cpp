/*este programa lê o raio de uma esfera.
tal programa devera calcular e  imprimir a área susperficial da esfera e seu volume.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	float raio, volume, area;
 	
	 printf("\n\ndigite o raio da esfera:\n\n");
	scanf("%f", &raio);
	
	area = 4*3.14*pow(raio,2); //calculo da area superficial
	
	volume = 4*3.14*pow(raio,3)/3;
	
	printf("\n\nArea superficial: %0.2f m^2; volume: %0.2f m^3\n\n",area, volume);
	
 	
 	
  system("PAUSE");
  return(0);	
 }