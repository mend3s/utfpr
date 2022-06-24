/*
*Questão 07: Faça um programa em C que carregue um vetor com 20 números inteiros
não repetidos e um segundo vetor com 15 números inteiros não repetidos 
(o programa deve garantir que os números para os vetores não sejam repetidos). 
Calcule e mostre dois vetores resultantes. O primeiro vetor resultante será
composto pelos números pares gerados pelo elemento do primeiro vetor somado a 
todos os elementos do segundo vetor. O segundo vetor resultante será composto 
pelos números ímpares gerados pelo elemento do primeiro vetor somado a todos os 
elementos do segundo vetor.

*/
#include "C:\Users\gcanh\OneDrive\Documentos\_material_para_aulas\_algoritmos\C\include\lib01.h"
int main(){
  srand(time(NULL));
  int a[20], b[15], par[20], imp[20], ipar, iimp, i, soma;
  
  preenche(a,20);
  preenche(b,15);
  
  for(i = 0, soma = 0;i < 15;i = i + 1){
			soma = soma + b[i];
	}
	printf("\nSOMA --> %d\n",soma);
	  
	ipar = 0;
	iimp = 0;  
  for(i = 0;i < 20;i = i + 1){
  	if ((soma + a[i]) % 2 == 0){
  		par[ipar] = soma + a[i];
  		ipar = ipar + 1;
		}
		else{
  		imp[iimp] = soma + a[i];
  		iimp = iimp + 1;
		}
	}
	
  imprime(a,20,"\nVetor A");	
  imprime(b,15,"\nVetor B");  
  imprime(par,ipar,"\nVetor Par");
  imprime(imp,iimp,"\nVetor Impar");   
  
	return 0;
}

