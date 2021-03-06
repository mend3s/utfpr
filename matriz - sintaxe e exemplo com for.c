/*
MATRIZ
======

Um vetor ? uma vari?vel MULTIdimensional indexada. Permite que v?rios valores de um mesmo tipo
sejam armazanados na mesma vari?vel, em linhas e colunas
? necess?rio que haja mais de um ?ndice para acessar cada uma das posi??es em uma matriz, ou seja
um ?ndice para cada uma de suas dimens?es, que usualmente s?o uma para linhas e outro para colunas.


MATRIZ
=====+

Declara??o de vari?vel matriz
-----------------------------

tipodedado nome[dimens?oLINHAS][dimens?oCOLUNAS]

[dimens?oLINHAS] - quantidade de linhas da matriz
[dimens?oCOLUNAS] - quantidade de colunas da matriz


float matriz[5][5];  //declara uma vari?vel matriz, do tipo float, 25 elementos, ou  5 linhas X 5 colubnas

Acesso a uma vari?vel matriz
----------------------------

atribui??o
- - - - - -
	matriz = 12.7; //ERRO - n?o podemos acessar diretamente a matriz
	matriz[0][1] = 11.6;  //atribui o valor 11.6 ? intersec??o da linhas 0 com a coluna 1
	 											//l?-se "matriz linha 0 coluna 1"
	 											//			"matriz indexada por 0 1"
	
entrada de dados
- - - - - - - - -
	scanf("%f",&matriz[i][j]);  //i para linhas e j para colunas
	scanf("%f",&matriz[0][0]);
	
sa?da de dados
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
	srand(time(NULL));  //inicializa a gera??o de n?meros rand?micos com a semente time(NULL) - hora do Sistema Operacional
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

