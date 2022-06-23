#include <stdio.h>
#include <stdlib.h>

int main(){
	int primeiro, segundo;
	
	printf("coloque o primeiro valor:");
	scanf("%i",&primeiro);
	fflush(stdin);
	
	printf("coloque o segundo: ");
	scanf("%i",&segundo);
	fflush(stdin);
	
	if(primeiro>segundo){
		printf("%i eh o maior", primeiro);
	}else{
		printf("%i segundo eh o maior", segundo);
	}
	
	
	return 0;
}
