#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo;
	
	printf("coloque o seu sexo");
	printf("F - Feminino");
	Printf("M - Masculino");
	scanf("%c",&sexo);
	fflush(stdin);
	
	switch(sexo){
		case 'F' || 'f':
		printf("Feminino"); 
		break;
		
		case 'M' || 'm':
		printf("Masculino 34460114");
		break;
		
		default:
			printf("erro");
			break;
	}
	
	
	return 0;
}
