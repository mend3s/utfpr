/*
MATRIZ
======

Um vetor é uma variável MULTIdimensional indexada. Permite que vários valores de um mesmo tipo
sejam armazanados na mesma variável, em linhas e colunas
É necessário que haja mais de um índice para acessar cada uma das posições em uma matriz, ou seja
um índice para cada uma de suas dimensões, que usualmente são uma para linhas e outro para colunas.


MATRIZ
=====+

Declaração de variável matriz
-----------------------------

tipodedado nome[dimensãoLINHAS][dimensãoCOLUNAS]

[dimensãoLINHAS] - quantidade de linhas da matriz
[dimensãoCOLUNAS] - quantidade de colunas da matriz


float matriz[5][5];  //declara uma variável matriz, do tipo float, 25 elementos, ou  5 linhas X 5 colubnas

Acesso a uma variável matriz
----------------------------

atribuição
- - - - - -
	matriz = 12.7; //ERRO - não podemos acessar diretamente a matriz
	matriz[0][1] = 11.6;  //atribui o valor 11.6 à intersecção da linhas 0 com a coluna 1
	 											//lê-se "matriz linha 0 coluna 1"
	 											//			"matriz indexada por 0 1"
	
entrada de dados
- - - - - - - - -
	scanf("%f",&matriz[i][j]);  //i para linhas e j para colunas
	scanf("%f",&matriz[0][0]);
	
saída de dados
- - - - - - - -
	printf("%f",matriz[i][j]); 
	printf("%f",matriz[0][0]);
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define L 5
#define C 5

int main()
{
	srand(time(NULL));  //inicializa a geração de números randômicos com a semente time(NULL) - hora do Sistema Operacional
	setlocale(LC_ALL,"Portuguese");

  float matriz[L][C]; //declara uma matriz quadrada com 3 linhas e 3 colunas
  int lin, col;
  
  for(lin = 0;lin < L;lin = lin + 1)
  {
  	for(col = 0;col < C;col = col + 1)
  	{
    	matriz[lin][col] = rand()/100;    		
		}
	}

  printf("\nMatriz\n");

  for(lin = 0;lin < L;lin = lin + 1)
  {
  	for(col = 0;col < C;col = col + 1)
  	{
    	printf("%8.2f",matriz[lin][col]);    		
		}
		printf("\n");
	}

	return 0;
}

