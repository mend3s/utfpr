/*
Questão 01:
Obter valores para um vetor de inteiros com dimensão 20 e então
determinar qual o menor e qual o maior valor do conjunto.
O vetor não está e não deverá ser ordenado.
escrever funções para:
a) preencher o vetor
b) mostrar o conteúdo do vetor na tela
c) encontrar o maior elemento do vetor
d) encontrar o menor elemento do vetor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 20
void preenche_vetor(int*, int);
int maior(int*, int);
int menor(int*, int);
void imprime(int*, int);

int main(){
  int v[20];
  preenche_vetor(v,T);
  printf("\nO maior numero e --> %d\n", maior(v,T));
  printf("\nO menor numero e --> %d\n", menor(v,T));
  imprime(v,T);
  return 0;
}

void preenche_vetor(int *v, int t){
  srand(time(NULL));
  int i, x, j, n;
  i = 0;
  while (i < t){
    x = rand()/100;
    n = 0;
    for(j = 0; j < i; j++)
      if (v[j] == x)
        n = 1;
    if (n == 0) {
      v[i] = x;
      i++;
    }
  }
}

void imprime(int *v, int t){
  int i;
  for(i = 0;i < t; i++)
    printf("%d ",v[i]);
}

int maior(int *v, int t){
  int maior, i;
  maior = v[0];
  for(i = 0; i < t; i++){
    if (v[i] > maior)
        maior = v[i];
  }
  return maior;
}

int menor(int *v, int t){
  int menor, i;
  menor = v[0];
  for(i = 0; i < t; i++){
    if (v[i] < menor)
        menor = v[i];
  }
  return menor;
}
