//esse programa pega duas notas e fala se voce foi aprovado ou reprovado com base em media 7
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	float n1, n2, med;
 	
 	printf("\n\nDigite sua primeira nota:\n\n");
 	scanf("%f",&n1);
 	
	 printf("\n\nDigite sua segunda nota:\n\n");
 	scanf("%f",&n2);
 	
 	med = (n1+n2)/2;
 	
 	if(med>=7.0)
 	{
      printf("\n\Voce foi Aprovado:\n\n");	
 	}
 	  else 
	   {
 	  	if(med<7.0)
 	  	{
 	  	printf("\n\Voce foi Reprovado:\n\n");
 	    }
			}
			printf("\n\n sua media foi:%0.1f\n\n",med);
 	
  system("PAUSE");
  return(0);	
 }