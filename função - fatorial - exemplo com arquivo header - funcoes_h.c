#include <stdio.h>
#include "funcoes.h"
int main(){
	int num;
	printf("digite um numero para o fatorial: ");
	scanf("%d",&num);
  printf("\nO fatorial de %d eh %d",num,fatorial(num));
	return 0;
}