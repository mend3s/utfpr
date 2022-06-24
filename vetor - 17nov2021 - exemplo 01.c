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
*/
#include <stdio.h>
#include <stdlib.h> // srand - rand
#include <time.h>   // time(NULL)

#define Q 10

int main()
{
	int numeros[Q], i, j, aux;

	srand(time(NULL));

	for(i = 0; i < Q; i = i + 1)
		{
			//printf("\nDigite um valor para a posicao %d do vetor: ",i);
			//scanf("%d",&numeros[i]);
			do
				{
					numeros[i] = rand() / 100;
				}while(numeros[i] % 2 == 0);
		}

	printf("\nVetor original\n");

	for(i = 0; i < Q; i = i + 1)
		{
			printf("%d ",numeros[i]);
		}

	for(i = Q-1; i > 0; i--)
		{
			for(j = 0; j < i; j++)
				{
					if(numeros[j] > numeros[j+1])
						{
							aux = numeros[j];
							numeros[j] = numeros[j+1];
							numeros[j+1] = aux;
						}
				}
		}

	printf("\nVetor ordenado\n");

	for(i = 0; i < Q; i = i + 1)
		{
			printf("%d ",numeros[i]);
		}

	return 0;
}
