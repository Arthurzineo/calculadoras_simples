/*Esse programa lê a base e a altura de um triângulo em metros,
calcula e imprime sua área.
*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	float base, alt, area;
 	
 	printf("\n\npara descobrir a area do tringulo digite em seguida o que for solicitado.\n\n");
 	
	printf("\n\ndigite em metros a base do triangulo\n\n");
	scanf("%f", &base);
 	
	printf("\n\ndigite em metros a altura do triangulo\n\n");
	scanf("%f", &alt);
	 
	area = base*alt/2;
	  
	printf("\n\na area do trinagulo eh:%0.2f m^2.\n\n",area);
 	
  system("PAUSE");
  return(0);	
 }