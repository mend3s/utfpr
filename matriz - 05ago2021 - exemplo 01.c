/*
Revisão
-------

Variável - é um espaço de memória que armazena um valor
					 de um determinado tipo, a cada instante da execução
					 de um programa

Declaração de uma variável:
---------------------------
	int idade;

Acesso ao conteúdo de uma variável:
-----------------------------------
	entrada de dados:
	-----------------
		scanf("%d",&idade);

	saída de dados:
	---------------
		printf("A idade e %d",idade);

	atribuição:
	-----------
		idade = 18;

	expressão:
	----------
		if(idade >= 18) ...

***************************************************************************************

Vetor
-----
	Vetor é uma variável composta homogênea unidimensional.
	Permite que vários valores, do mesmo tipo de dados,
	sejam armazenados sob um mesmo nome de variável.
	Para que isso aconteça, um índice de posição é utilizado.

Declaração de um vetor:
-----------------------

sintaxe:
--------
	tipo_de_dado nome_da_variável_vetor[dimensão];

	tipo_de_dado - é o tipo de dados dos valores que serão armazenados
								 int, float, double, char
	nome_da_variável_vetor - é o nome do vetor
	[dimensão] - é a quantidade de elementos, ou o tamanho do vetor

exemplo:
--------
	int idades[5]; //armazena cinco idades
	float notas[4]; //armazena 4 notas

Acesso ao conteúdo de uma variável vetor:
-----------------------------------------
	entrada de dados:
	-----------------

		estática
		--------
			scanf("%f",&notas[0]);
			scanf("%f",&notas[1]);
			scanf("%f",&notas[2]);
			scanf("%f",&notas[3]);

		dinâmica
		--------
			i = 0;
			while(i < 4)
			{
			  scanf("%f",&notas[i]);
			  i = i + 1;
			}

	saída de dados:
	---------------

		estática
		--------
			printf("a primeira nota e %f",notas[0]);
			printf("a segunda nota e %f",notas[1]);
			printf("a terceira nota e %f",notas[2]);
			printf("a quarta nota e %f",notas[3]);

		dinâmica
		--------
			i = 0;
			while(i < 4)
			{
			  printf("a %dª nota e %f",i+1,notas[i]);
			  i = i + 1;
			}

	atribuição:
	-----------
		notas[0] = 7;
		notas[i] = 8;

	expressão:
	----------
		media = (notas[0]+notas[1]+notas[2]+notas[3])/4;

***************************************************************************************

Matriz
------
	Matriz é uma variável composta homogênea multidimensional.
	Permite que vários valores, do mesmo tipo de dados,
	sejam armazenados sob um mesmo nome de variável.
	Para que isso aconteça, mais de um índice de posição é utilizado.
	Normalmente utilizamos dois índices, uma para LINHA e outro para COLUNA.

Declaração de uma matriz:
-------------------------

sintaxe:
--------
	tipo_de_dado nome_da_variável_matriz[dimensão_LINHAS][dimensão_COLUNAS];

	tipo_de_dado - é o tipo de dados dos valores que serão armazenados
								 int, float, double, char
	nome_da_variável_matriz - é o nome da matriz
	[dimensão_LINHAS] - é a quantidade de linhas da matriz
	[dimensão_COLUNAS] - é a quantidade de colunas da matriz

exemplo:
--------
	int matriz[3][3];

		 0   1    2
	+----+----+----+
0 |    |    |    |
	+----+----+----+
1	|    |    |    |
	+----+----+----+
2	|    |    |    |
	+----+----+----+

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 2
#define C 15

int main()
{
	int matriz[L][C], lin, col;

	srand(time(NULL));

	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					matriz[lin][col] = rand()/100;
				}
		}

	printf("\n\nMatriz linha x coluna %dx%d\n\n",L,C);

	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					printf("%4d",matriz[lin][col]);
				}
			printf("\n");
		}

	printf("\n\nMatriz coluna x linha %dx%d\n\n",C,L);

	for(col = 0; col < C; col = col + 1)
		{
			for(lin = 0; lin < L; lin = lin + 1)
				{
					printf("%4d",matriz[lin][col]);
				}
			printf("\n");
		}

	return 0;
}
