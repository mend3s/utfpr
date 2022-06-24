#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define D 3
int main(){
  int A[D][D], B[D][D], R[D][D], K, I, J;

  srand(time(NULL));

  printf("matriz A \n");
  for(I=0; I<D; I=I+1)
    for(J=0; J<D; J=J+1){
      //printf("digite um valor para a linha %d e coluna %d: ", I, J);
      //scanf("%d", &A[I][J]);
      A[I][J] = rand()/1000;
    }
  printf("\n");
  for(I=0; I<D; I=I+1){
    for(J=0; J<D; J=J+1)
      printf("%3d ", A[I][J]);
    printf("\n");
  }

  printf("\nmatriz B \n");
  for(I=0; I<D; I=I+1)
    for(J=0; J<D; J=J+1){
      //printf("digite um valor para a linha %d e coluna %d: ", I, J);
      //scanf("%d", &B[I][J]);
      B[I][J] = rand()/1000;
    }
  printf("\n");
  for(I=0; I<D; I=I+1){
    for(J=0; J<D; J=J+1)
      printf("%3d ", B[I][J]);
    printf("\n");
  }

  for(I=0;I<D;I=I+1)
    for(J=0;J<D;J=J+1){
      R[I][J]=0;
      for(K =0;K<D;K=K+1)
        R[I][J]=R[I][J]+A[I][K]*B[K][J];
    }

  printf("\n");
  for(I=0; I<D; I=I+1){
    for(J=0; J<D; J=J+1)
      printf("%5d ", R[I][J]);
    printf("\n");
  }
  return 0;
}
