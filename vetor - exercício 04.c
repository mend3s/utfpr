/*
Questão 04: Elabore um programa em linguagem C que receba um vetor A de dez 
elementos inteiros. Esse programa deve calcular o fatorial de cada elemento 
de A e armazená-los em um vetor B. O programa deve mostrar o vetor A e o 
vetor B ao seu final.
Vetor A
1 2 3 4 5 ... 10
2 1 0 3 4 ...  6
Vetor B
1 2 3 4 5  ... 10
2 1 1 6 24 ... 720

*/
#include <stdio.h>
int main(){
	long int a[10], b[10], i, f, fat;
	
  i = 0;
  while(i < 10){
		printf("Digite o %ld valor para o vetor A: ",i+1);
		scanf("%ld",&a[i]);
	  i = i + 1;
	}
	
	printf("\nVetor A\n");
  for(i = 0;i < 10;i = i + 1){
		printf("%ld ",a[i]);
	}
	
	for(i = 0;i < 10;i = i + 1){
		fat = a[i];
		f = fat - 1;
		while(f > 1){
			fat = fat * f;
			f = f - 1;
		}
		b[i] = fat;
	}
	printf("\nVetor B\n");
  for(i = 0;i < 10;i = i + 1){
		printf("%ld ",b[i]);
	}	
	
	return 0;
}