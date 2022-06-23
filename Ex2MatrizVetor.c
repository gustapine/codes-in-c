/*2. Construa um algoritmo que leia um vetor de 
5 números reais e mostre a soma, a 
multiplicação e os números.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float numero[5], soma, mult;
	
	for (i=0;i<5;i++){
		printf("coloque o numero: ");
		scanf("%f",&numero[i]);
		fflush(stdin);
	}
	for (i=0;i<5;i++){
		soma+=numero[i];
		printf("A soma de todos eh: %f ", soma);
	}
	
	printf("A soma de todos eh7: %i ", soma);
	printf("os numeros sao: ", numero);
	
	}
	
	 
 return 0;
}
