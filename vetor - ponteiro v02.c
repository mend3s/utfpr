#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define T 25
void preenche(int [],int);
void mostra(int [], int);
//void preenche(int [T],int);
//void mostra(int [T], int);
//void preenche(int *,int);
//void mostra(int *, int);

int main(){
	int vet[T];
	preenche(vet,T);
	mostra(vet,T);
  return 0;
}
//void preenche(int v[], int tam)
//void preenche(int v[T], int tam)
void preenche(int *v, int tam)
{
     int i;
     srand(time(NULL));
     for(i = 0; i < tam; i++)
       v[i] = rand()/100;
}
//void mostra(int v[], int tam)
void mostra(int v[T], int tam)
//void mostra(int * v, int tam)
{
     int i;
     printf("\nImprimindo o vetor na funcao:\n");
     for(i = 0; i < tam; i++)
       printf("%d  ", v[i]);
}
