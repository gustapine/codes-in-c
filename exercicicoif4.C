#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int valor;
	
	printf("coloque um valor e veja se ele: ");
	scanf("%i",&valor);
	
	if( valor%2 == 0 ){
		valor++;
		printf("%i", valor);
	}	
	else{
		valor--;
		printf("%i", valor);
	}
	
	return 0;
}
