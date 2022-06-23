#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int valor;
	
	printf("coloque um valor e veja se ele é positivo: ");
	scanf("%i",&valor);
	
	if( valor> 0){

		printf("POSTIVO");
	}	
	else if(valor < 0){
		printf("NEGATIVO");
	}
	else{
		printf("Zero");

	}
	
	return 0;
}
