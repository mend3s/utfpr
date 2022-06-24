/*
Questão 02: Obter valores para um vetor de inteiro com dimensão 20 e:
a) Trocar cada número par do vetor pelo valor que está em sua primeira posição;
b) Trocar cada número ímpar do vetor pelo valor que está em sua última posição.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int v[20], i;
	srand(time(NULL));
	i = 0;
	while(i < 20){
		v[i] = rand() / 100 + 1;
		i = i + 1;
	}
	
	printf("\nVetor original\n");
  for(i = 0;i < 20;i = i + 1){
		printf("%d ",v[i]);
	}
	
	for(i = 1;i < 19;i = i + 1){
		if (v[i] % 2 == 0)
			v[i] = v[0];
		  else
				v[i] = v[19];		
	}
	
	printf("\nVetor depois da troca\n");
  for(i = 0;i < 20;i = i + 1){
		printf("%d ",v[i]);
	}
	
	
	return 0;
}
