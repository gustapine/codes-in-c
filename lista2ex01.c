#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	
	printf("coloque aqui o primeiro valor: ");
	scanf("%i",&a);
	fflush(stdin);
	
	printf("coloque aqui o segundo valor:  ");
	scanf("%i",&b);
	fflush(stdin);
	
	if(a == b){
		printf("os valores sao iguais!\n");
	}else if (a < b){
		printf("o segundo valor eh maior\n");
	}else{
		printf(" o primeiro valor eh maior\n");
	}
	
	
	return 0;
}
