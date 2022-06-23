#include <stdio.h>
#include <stdio.h>

int main(){
	float n1, n2, n3, media;
	
	printf("Digite a primeira idade: ");
	scanf("%f", &n1);
	printf("Digite a segunda idade: ");
	scanf("%f", &n2);
	printf("Digite a terceira idade: ");
	scanf("%f", &n3);
	
	media = n1 + n2 + n3 / 3;
	
	if(media < 25){
		printf("turma jovem");
	
	}else if(media > 25 && media < 40){
		printf("turma adulta");
	}else{
		printf("turma idosa");
	}
	
return 0;
}
