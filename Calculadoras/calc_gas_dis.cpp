//coloque a distancia percorrida e o preço da gasolina e voce tera quantos reais vai gastar.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main()
 {
 	float km, gasop,litros,gasto;
 	
 	printf("\n\nQuantos kilometros voce vai percorrer:\n\n");
 	scanf("%f",&km);
 	
	 printf("\n\nQual eh o preco da gasolina em reais:\n\n");
 	scanf("%f",&gasop);
 	
 	litros=km/12;
 	gasto=litros*gasop;
 	
 	printf("\n\nseu carro vai consumir:%0.2f litros\n\n",litros);
 	printf("\n\ne seu gasto em reais vai ser de:%0.2f reais\n\n",gasto);
 	
 	
  system("PAUSE");
  return(0);	
 }