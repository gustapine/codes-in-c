/*1. Construa um algoritmo que leia um vetor de 10 
n�meros inteiros e mostre a 
soma dos n�meros.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, numero[10], soma;
	
	for (i=0;i<9;i++){
		printf("coloque o numero: ");
		scanf("%i",&numero[i]);
		fflush(stdin);
	}
	for (i=0;i<9;i++){
		soma+=numero[i];
	}
	printf("A soma de todos eh7: %i ", soma);
	 
 return 0;
}
