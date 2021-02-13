*criar um programa que leia os coeficientes de uma função de 
quadratica ( de segundo grau), calcule e escreva suas raizes
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	float x1, x2, a, b, c;
 	//----------//
 	printf("\n\ndigite o A da funcao\n\n");
	scanf("%f", &a);
	//----------//
	printf("\n\ndigite o B da funcao\n\n");
	scanf("%f", &b);
	//----------//
	printf("\n\ndigite o C da funcao\n\n");
	scanf("%f", &c);
	//----------//
	x1 = (-b + sqrt( pow(b,2)-4*a*c))/(2*a);
	x1 = (-b - sqrt( pow(b,2)-4*a*c))/(2*a);
	//----------//
	
 		printf("\n\o valor de X1 eh: %0.1f, e o valor de X2 eh: %0.1f\n\n",x1,x2);
  system("PAUSE");
  return(0);	
 }