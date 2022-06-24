#include <stdio.h>
#define Q 10
void preenche(int[],int);
void imprime(int[],int);
int main(){
	int numeros[Q];
	printf("\nEndMem numeros --> %x\n",&numeros);
	preenche(numeros,Q);
	imprime(numeros,Q);
	return 0;	
}
void preenche(int n[],int tam){
	int i;
	for(i = 0;i < tam;i =  i + 1)
		n[i] = i+1;
}
void imprime(int n[],int tam){
	int i;
	for(i = 0;i < tam;i =  i + 1)
		printf("%d ",n[i]);
}