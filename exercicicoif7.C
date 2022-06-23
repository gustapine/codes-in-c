#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char a;
	
	printf("coloque um valor e veja se ele eh vogal ou consoante: ");
	scanf("%c",&a);
	fflush(stdin);
	
	if( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){

		printf("vogal");
	}	
	else{
		printf("consoante");
	}

	
	return 0;
}

