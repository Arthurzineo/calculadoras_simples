/*mostrar quantas horas voce trabalhou e quantos
dependentes voce tem, vai mostrar seu salario bruto */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	float sal,des;
 	int hor, dep;
 	
	 printf("\n\nquantas horas voce trabalhou esse mes:\n\n");
 	scanf ("%d",&hor);
 	
	 printf("\n\nquantos dependentes voce tem:\n\n");
 	scanf ("%d",&dep);
 	
 	sal = (hor*12)+(dep*40);
 	
	 printf("\n\nO seu salario bruto eh:%0.2f\n\n",sal);
	 
	 sal = sal-sal*0.05;
	 printf("\n\nO seu salario com o desconto do IR eh:%0.2f\n\n",sal);
	 
	 sal = 0;
	 sal = (hor*12)+(dep*40);
	 sal = sal-sal*0.085;
	 printf("\n\nO seu salario com o desconto do INSS eh:%0.2f\n\n",sal);
	  sal = 0;
	 sal = (hor*12)+(dep*40);
	 sal = sal-sal*0.135;
	 printf("\n\nO seu salario liquido eh:%0.2f\n\n",sal);
	 
 	
 	
  system("PAUSE");
  return(0);	
 }