#include <stdio.h>
#include <stdlib.h>

int main(){
	int primeiro;
	
	printf("coloque valor:");
	scanf("%i",&primeiro);
	fflush(stdin);
	
	if(primeiro%2==0){
		printf("%i eh par", primeiro);
	}else{
		printf("%i eh impar", primeiro);
	}
	
	
	return 0;
}
