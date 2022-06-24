/*
Shell Sort (não utiliza recursividade).
É um refinamento do método de inserção direta.
O algoritmo difere do método de inserção direta pelo fato de no lugar de
considerar o vetor a ser ordenado como um único segmento, ele considera vários segmentos sendo aplicado o método de
inserção direta em cada um deles.Basicamente o algoritmo passa várias vezes pela lista dividindo o grupo maior em menores.
Nos grupos menores é aplicado o método da ordenação por inserção
*/
#include <stdio.h>
#include <stdlib.h>
void shellSort(int *vetor, int tamanho){
   int i = (tamanho - 1) / 2;
   int chave, k, aux;
   while(i != 0){
      do{
         chave = 1;
         for(k = 0; k < tamanho - i; ++k){
            if(vetor[k] > vetor[k + i]){
               aux = vetor[k];
               vetor[k] = vetor[k + i];
               vetor[k + i] = aux;
               chave = 0;
            }
         }
      }while(chave == 0);
      i = i / 2;
   }
}

int main(){
  int v[10], i;
  printf("Entre os %d elementos do vetor:\n", 10);
  for(i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
  }
  shellSort(v, 10);
  printf("\n\nVetor ordenado:\n");
  for(i = 0; i < 10; i++) {
    printf("%d\t", v[i]);
  }
  printf("\n");
  return 0;
}
