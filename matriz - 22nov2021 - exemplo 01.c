/*
Variáveis
---------

Uma variável é um espaço na memória do computador,
que armazena um único valor, de um determinado tipo,
a cada instante de um programa.

Uma variável sempre é declarado, e depois
referenciado por um nome.

int numero; //declaração - <tipo de dados> <nome da variável>;

scanf("%d",&numero);
printf("%d", numero);
numero = 1;
numero = x * 3.14;
numero = a;

VETOR
-----

Um vetor é uma variável indexada unidimensional homogênea.

Permite que, sob um mesmo nome, mais de um valor
do mesmo tipo seja armazenado, utilizando um
índice para indicar a posição de cada um destes
valores dentro na variável.

Declaração
----------

int valores[5]; //<tipo de dados> <nome da variável>[dimensão]

dimensão - quantidade de elementos que o vetor possuirá

valores
   0    1		 2    3    4	   <-- índice do vetor
+----+----+----+----+----+
|		 |    |    |    |    |
+----+----+----+----+----+

Acesso estático (utiliza um valor constante como índice de posição):
---------------

scanf("%d",&valores[2]);
printf("%d", valores[2]);
valores[3] = 1;
valores[4] = x * 3.14;
valores[1] = a;

Acesso dinâmico (utiliza uma variável como índice de posição)
---------------

for(i = 0;i < 5;i = i + 1)
	scanf("%d",&valores[i]);


MATRIZ
------

Uma matriz é uma variável indexada multidimensional homogênea.

Permite que, sob um mesmo nome, mais de um valor
do mesmo tipo seja armazenado, utilizando um
índice para cada uma das dimensões da matriz.
Usualmente utilizamos apenas duas dimensões - LINHA e COLUNA
para indicar a posição de cada valor na variável matriz

Declaração
----------

int valores[5][5]; //<tipo de dados> <nome da variável>[dimensão linhas][dimensão colunas]

dimensão linhas - quantidade de linhas que o vetor possuirá
dimensão colunas - quantidade de coluna que o vetor possuirá

valores
	   0    1		 2    3    4	   <-- índice das colunas
	+----+----+----+----+----+
0 |		 |    |    |    |    |
	+----+----+----+----+----+
1 |		 |    |    |    |    |
	+----+----+----+----+----+
2	|		 |    |    |    |    |
	+----+----+----+----+----+
3	|		 |    |    |    |    |
	+----+----+----+----+----+
4	|		 |    |    |    |    |
	+----+----+----+----+----+
índice das linhas

Acesso estático (utiliza um valor constante como índice de linha e outro de coluna):
---------------

scanf("%d",&valores[2][2]);
printf("%d", valores[2][2]);
valores[3][0] = 1;
valores[4][1] = x * 3.14;
valores[1][3] = a;

Acesso dinâmico (utiliza uma variável como índice de linha e outra de coluna):
---------------

for(i = 0;i < 5;i = i + 1)
	for(j = 0;j < 5;j = j + 1)
	  scanf("%d",&valores[i][j]);

*/
#include <stdio.h>
#include <stdlib.h> // srand - rand
#include <time.h>   // time(NULL)

#define L 10
#define C 10

int main()
{
	int numeros[L][C], lin, col, maior, menor, l1, c1, l2, c2;
	//l1 e c1 armazenam o endereço do maior numero
	//l2 e c2 armazenam o endereço do menor numero

	srand(time(NULL));

	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					numeros[lin][col] = rand() / 100;
				}
		}

	printf("\nMatriz original\n");
	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					printf("%4d",numeros[lin][col]);
				}
			printf("\n");
		}

//encontrar o maior e o menor números na matriz, e seus
//respectivos endereços
	maior = numeros[0][0];
	l1 = 0;
	c1 = 0;
	menor = numeros[0][0];
	l2 = 0;
	c2 = 0;
	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					if(numeros[lin][col] > maior)
						{
							maior = numeros[lin][col];
							l1 = lin;
							c1 = col;
						}
					if(numeros[lin][col] < menor)
						{
							menor = numeros[lin][col];
							l2 = lin;
							c2 = col;
						}
				}
		}

	printf("\nO menor numero e %d e esta na linha %d e coluna %d",menor, l2, c2);
	printf("\nO maior numero e %d e esta na linha %d e coluna %d",maior, l1, c1);
	
	return 0;
}
