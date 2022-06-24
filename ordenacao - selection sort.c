/*Algoritmo de Seleção (Selection Sort)
Selecione o menor elemento do vetor;
Troque esse elemento com o elemento da primeira posição do vetor;
Repita as duas operações anteriores considerando apenas os n-1 elementos restantes, em seguida repita com os n-2
elementos restantes; e assim sucessivamente até que reste apenas um elemento no vetor a ser considerado
*/
#include <stdio.h>
#include <stdlib.h>
void selectionSort(int v[], int n){
  int i, j, aux, min;
  for(i = 0; i < n-1; i++){
    min = i;
    for(j = i+1; j < n; j++){
      if(v[j] < v[min]){
        min = j;
      }
    }
    aux = v[i];
    v[i] = v[min];
    v[min] = aux;
   }
}
int main(){
  int v[10], i;
  printf("Entre os %d elementos do vetor:\n", 10);
  for(i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
  }
  selectionSort(v, 10);
  printf("\n\nVetor ordenado:\n");
  for(i = 0; i < 10; i++) {
    printf("%d\t", v[i]);
  }
  printf("\n");
  return 0;
}
