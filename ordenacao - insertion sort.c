/*Algoritmo de Inserção (Insertion Sort)
Compare a chave (x) com os elementos à sua esquerda, deslocando para direita cada elemento maior do que a chave;
Insira a chave na posição correta à sua esquerda, onde os elementos já estão ordenados;
Repita os passos anteriores atualizando a chave para a próxima posição à direita até o fim do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
void insertionSort(int v[], int n){
  int i, j, x;
  for(i = 1; i < n; i++){
    x = v[i];
    j = i - 1;
    while(j >= 0 && v[j] > x){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = x;
  }
}

int main(){
  int v[10], i;
  printf("Entre os %d elementos do vetor:\n", 10);
  for(i = 0; i < 10; i++){
    scanf("%d", &v[i]);
  }
  insertionSort(v, 10);
  printf("\n\nVetor ordenado:\n");
  for(i = 0; i < 10; i++){
    printf("%d\t", v[i]);
  }
  printf("\n");
  return 0;
}
