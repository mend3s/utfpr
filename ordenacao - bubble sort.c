/*Ordenação por Troca (BubbleSort)
Compare o primeiro elemento com o segundo. Se estiverem desordenados, então efetue a troca de posição.
Compare o segundo elemento com o terceiro e efetue a troca de posição, se necessário;
Repita a operação anterior até que o penúltimo elemento seja comparado com o úlltimo.
Ao final desta repetição o elemento de maior valor estará¡ em sua posição correta, a n-ésima posição do vetor;
Continue a ordenação posicionando o segundo maior elemento, o terceiro,..., até que todo o vetor esteja ordenado
*/
#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int v[], int n){
  int i, j, aux;
  for(i = n-1; i > 0; i--){
    for(j = 0; j < i; j++){
      if(v[j] > v[j+1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
  }
}

int main(){
  int v[10], i;
  printf("Entre os %d elementos do vetor:\n", 10);
  for(i = 0; i < 10; i++){
    scanf("%d", &v[i]);
  }
   
  bubbleSort(v, 10);
  printf("\n\nVetor ordenado:\n");
  for(i = 0; i < 10; i++){
    printf("%d\t", v[i]);
  }
  printf("\n");
  return 0;
}
