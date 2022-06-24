#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

#define Q 5
int main(){
	int vetor[Q];
	float vet[Q];
	
	srand(time(NULL));
	preenchevetorint(vetor, Q);
	imprimevetorint(vetor, Q,"Vetor de Inteiros");
	preenchevetorfloat(vet,Q);
	imprimevetorfloat(vet,Q);
	
	return 0;
}