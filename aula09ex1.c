#include <stdlib.h>
#include <stdio.h>

int main(){

int a, b;

  printf("coloque o primeiro numero: ");
  scanf("%i",&a);
  
  printf("coloque o segundo numero: ");
  scanf("%i",&b);
  
  printf("a sequencia vai ser: \n");

while(a < b){

a++;

printf("%i \n", a);

}



return 0;
}
