#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int valor;
	
	printf("coloque um valor e veja se ele eh par: ");
	scanf("%i",&valor);
	
	if( valor%2 == 0 ){

		printf("EH PAR");
	}	
	else{
		printf("IMPAR");
	}
	
	return 0;
}

