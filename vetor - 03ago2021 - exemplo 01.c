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

//=======================================================================

Vetor
-----
	Vetor é uma variável composto homogênea unidimensional.
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

Exemplo:
--------

Obtenha 4 notas de um aluno e mostre sua média final

entradas de dados:
	4 notas
saídas de dados:
	media final
processamento:
	obter 4 notas
	calcular a media
	mostrar a media
*/
#include <stdio.h>
int main()
{
	float notas[4], soma;
	float exemplo;
	int i;

	printf("\nDigite 4 notas para calcular a media\n");
	/*
		i = 0;
		soma = 0;
		while(i < 4)
		{
			printf("\nDigite a %da nota: ",i+1);
			scanf("%f",&notas[i]);
			soma = soma + notas[i];
			i = i + 1;
		}
	*/
	for(i = 0, soma = 0; i < 4; i = i + 1)
		{
			printf("\nDigite a %da nota: ",i+1);
			scanf("%f",&notas[i]);
			soma = soma + notas[i];
		}
	printf("\nA media final e %0.1f",soma/4);

	return 0;
}
