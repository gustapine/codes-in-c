#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int a;
	float b;
	
	printf("coloque um valor, ele eh: ");
	scanf("%f",&b);
	
	a = b;
	
	if( b == a ){
		printf("ele eh inteiro");
}
	else{
		
		printf("ele eh quebrado");
	}
	
	return 0;
}
