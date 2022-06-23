#include <stdio.h>
#include <stdlib.h>

int main(){
	int primeiro;
	
	printf("coloque valor:");
	scanf("%i",&primeiro);
	fflush(stdin);
	
	if(primeiro<0){
		printf("%i eh negativo", primeiro);
	}else{
		printf("%i eh positivo", primeiro);
	}
	
	
	return 0;
}
