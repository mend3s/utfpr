#include <stdio.h>
#include <stdlib.h>
void quickSort(int *vetor, int inicio, int fim){
   int i, j, meio, aux;
   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];
   do{
      while(vetor[i] < meio)
         i++;
      while(vetor[j] > meio)
         j--;
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(i <= j);
   if(inicio < j)
      quickSort(vetor, inicio, j);
   if(i < fim)
      quickSort(vetor, i, fim);
}

int main(){
  int v[10], i;
  printf("Entre os %d elementos do vetor:\n", 10);
  for(i = 0; i < 10; i++){
    scanf("%d", &v[i]);
  }
  quickSort(v, 0, 9); //vetor, início, fim
  printf("\n\nVetor ordenado:\n");
  for(i = 0; i < 10; i++){
    printf("%d\t", v[i]);
  }
  printf("\n");
  return 0;
}
