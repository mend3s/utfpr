//encontre o maior e o menor números no vetor
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Q 20

int main(){
	
	int vetor[Q], i, maior, menor;
	
	srand(time(NULL));
	
	for(i = 0;i < Q;i = i + 1){
		do{	
		  vetor[i] = rand()/100;
		}while((vetor[i] % 2 != 0));
	}
	
	maior = vetor[0];
	menor = vetor[0];
	for(i = 0;i < Q;i = i + 1){
		printf("%d ",vetor[i]);	
		if(vetor[i] > maior)
			maior = vetor[i];
		if(vetor[i] < menor)
			menor = vetor[i];
	}
	
	printf("\nMaior %d \nMenor %d",maior, menor);
	
	return 0;
}