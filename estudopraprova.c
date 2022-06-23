/*
1. Faça um programa que peça dois números inteiros e gere os números 
inteiros que estão no intervalo entre eles.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	int numero1, numero2, i;
	
	// entrada
	printf("Digite 1 numero: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&numero2);
	fflush(stdin);
	
	// processamento e saída
	if(numero1<numero2){
		for(i=numero1+1;i<numero2;i++){
			printf("%i, ",i);
		}
	}else{
		for(i=numero1-1;i>numero2;i--){
		printf("%i, ",i);
	}
	}
	
	
	return 0;
}
