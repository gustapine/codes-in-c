#include <stdio.h>
#include <stdlib.h>

int main(){
	int primeiro;
	
	printf("coloque valor:");
	scanf("%i",&primeiro);
	fflush(stdin);
	
	primeiro++;
	
	if(primeiro%2==0){
		printf("%i foi impar", primeiro);
	}else{
		printf("%i foi par", primeiro);
	}
	
	
	return 0;
}
