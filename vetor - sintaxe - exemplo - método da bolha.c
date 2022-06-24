/*
VETORES
=======

Um vetor é uma variável unidimensional indexada. Permite que vários valores de uma mesmo tipo
sejam armazanados na mesma variável.
É necessário que haja um índice para acessar cada uma das posições em um vetor

Relembrando
-----------

Variável - espaço de memória que armazena um único valor de um determinado tipo a cada instante, sendo
					 referenciada por um nome.
					 
Declaração de variável:
-----------------------
tipodedado nome;

int idade; //declara a variável idade, do tipo inteiro.

Acesso a uma variável
---------------------

atribuição
- - - - - -
	idade = 31;     //constante
	idade = x * 2;	//expressão
	idade = y;      //variável	
			
entrada de dados
- - - - - - - - -
	scanf("%d",&idade);
	
saída de dados
- - - - - - - -
	printf("%d",idade);	

VETOR
=====	

Declaração de variável vetor
----------------------------

tipodedado nome[dimensão]

[dimensão] - tamanho do vetor, ou a quantidade de elementos do vetor

float temperaturas[31];  //declara uma variável vetor, do tipo inteiro, com 31 elementos, ou tamanho 31
												 //permite que sejam armazenadas até 31 valores de temperaturas nesta variável

Acesso a uma variável vetor
---------------------------

atribuição
- - - - - -
	temperaturas = 32.7; //ERRO - não podemos acessar diretamente o vetor
	temperaturas[0] = 30.7;  //atribui o valor 30.7 ao vetor temperaturas, na posição 0 - ESTÁTICA
													//lê-se "temperaturas indexada por 0"		
	
	temperaturas[i] = 28.2;  //atribui o valor 28.2 ao vetor temperaturas, na posição indexada pela variável i - DINÂMICA
													 //lê-se "temperaturas indexada por i"
  temperaturas[i] = y;
  temperaturas[i] = x * 2;

entrada de dados
- - - - - - - - -
	scanf("%f",&temperaturas[i]);
	scanf("%f",&temperaturas[8]);
	
saída de dados
- - - - - - - -
	printf("%f",temperaturas[i]);	
	scanf("%f",&temperaturas[8]);
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define Q 12

int main()
{
	srand(time(NULL));  //inicializa a geração de números randômicos com a semente time(NULL) - hora do Sistema Operacional
	setlocale(LC_ALL,"Portuguese");
	float notas[Q]; //armazena as notas finais de uma turma da disciplina IF61D
	float maior, menor, aux;
	int idx, i, j;
	
  idx = 0;
  while(idx < Q)
  {
	  //printf("\nDigite a média final do %dº aluno: ",idx+1);
	  //scanf("%f",&notas[idx]);
	  do
	  {
	    notas[idx] = rand() / 100 / 10.0;
	  }while(notas[idx] > 10);
		//rand() - gera um número inteiro entre 0 e 32768
	  
	  idx = idx + 1;
	}
	
	printf("\n\nVetor de notas sem ordenação\n");
	
	maior = notas[0];
	menor = notas[0];
	
	for(idx = 0;idx < Q;idx = idx + 1)
	{
		printf("%0.2f ",notas[idx]);
		
		if(notas[idx] > maior)
		  maior = notas[idx];

		if(notas[idx] < menor)
		  menor = notas[idx];
	}
	
	printf("\nA maior nota é %0.2f",maior);
	printf("\nA menor nota é %0.2f",menor);
	
//Método da Bolha de Ordenação	
  for(i = 0; i < Q - 1; i = i + 1){
     for(j = i + 1; j < Q; j = j + 1){
   	   if(notas[i] > notas[j]){
	        aux = notas[i];
	        notas[i] = notas[j];
	        notas[j] = aux;
	      }
     }
  }
	
	printf("\n\nVetor de notas com ordenação\n");
	
	for(idx = 0;idx < Q;idx = idx + 1)
	{
		printf("%0.2f ",notas[idx]);
	}	

	return 0;
}
