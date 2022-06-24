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
	int numeros[Q], i, maior, menor;
	
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
	
//encontrar o menor e o maior elementos no vetor

	maior = numeros[0];
	menor = numeros[0];	
	for(i = 1;i < Q;i = i + 1)
	{
		if(numeros[i] > maior)
			maior = numeros[i];
		if(numeros[i] < menor)
			menor = numeros[i];		
	}	
	
	printf("\nO menor valor no vetor e %d",menor);
	printf("\nO maior valor no vetor e %d",maior);
	
	
	return 0;
}
