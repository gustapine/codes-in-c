//3.Faça  um  programa  que 
// leia  dez  números  inteiros  e  calcule  a  diferença  entre  o maior e o menor número do conjunto.
#include <stdlib.h>
#include <stdio.h>

int main(){

int a, b, i;

  printf("coloque o primeiro numero: ");
  scanf("%i",&a);
  
  printf("coloque o segundo numero: ");
  scanf("%i",&b);
  
  printf("a sequencia vai ser: \n");

 if(a){
 
while(a < b){

a++;
printf("%i \n", a);
}

}



return 0;
}
