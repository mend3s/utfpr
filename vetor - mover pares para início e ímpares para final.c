/*
preencher um vetor de inteiros com dimensão 20 e depois mover todos
os números ímpares do vetor para o final e os pares para o início.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int v[20], i, j, aux;
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
	
	for(i = 0;i < 19;i = i + 1){
		for(j = 0;j < (19 - i);j = j + 1){
			if(v[j] % 2 != 0){
				aux = v[j + 1];
				v[j + 1] = v[j];
				v[j] = aux;
			}
		}
	}
		
	printf("\nVetor depois da troca\n");
  for(i = 0;i < 20;i = i + 1){
		printf("%d ",v[i]);
	}		

	return 0;
}