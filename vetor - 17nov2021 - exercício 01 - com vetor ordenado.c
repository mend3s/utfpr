/*
Questão 01: Obter valores para um vetor de inteiros com dimensão 20 
e então determinar qual o menor e qual o maior valor do conjunto. 
O vetor não está e não deverá ser ordenado.


*/
#include <stdio.h>
#include <stdlib.h> // srand - rand
#include <time.h>   // time(NULL)

#define Q 20

int main()
{
	int numeros[Q], i, j, aux;
	
	srand(time(NULL));
	
	for(i = 0;i < Q;i = i + 1)
	{
		//printf("\nDigite um valor para a posicao %d do vetor: ",i);
		//scanf("%d",&numeros[i]);
	  numeros[i] = rand() / 100;
	}
	
	printf("\nVetor original\n");
	
	for(i = 0;i < Q;i = i + 1)
	{
		printf("%d ",numeros[i]);
	}
	
  for(i = Q-1; i > 0; i--){
    for(j = 0; j < i; j++){
      if(numeros[j] > numeros[j+1]) {
        aux = numeros[j];
        numeros[j] = numeros[j+1];
        numeros[j+1] = aux;
      }
    }
  }	
	
	printf("\nVetor ordenado\n");
	
	for(i = 0;i < Q;i = i + 1)
	{
		printf("%d ",numeros[i]);
	}	

//encontrar o menor e o maior elementos no vetor
	printf("\nO menor valor no vetor e %d",numeros[0]);
	printf("\nO maior valor no vetor e %d",numeros[Q-1]);
	
	return 0;
}
