/*
Conceitos:
----------

Variável - um espaço de memória que armazena um único valor,
					 de um determinado tipo, a cada instante da
					 execução de um programa.

como declarar uma variável:
---------------------------
	<tipo de dados> <nome da variável>;
	int idade;
	float valor;
	char nome[50];
	char letra;

como acessar o conteúdo de uma variável:
----------------------------------------

O acesso ao conteúdo para leitura, escrita,
atribuição e uso em uma expressão, para uma
variável, é sempre realizado diretamente por
seu nome.

	leitura:
		scanf("%f",&valor);
		gets(nome);
	escrita:
		printf("%f",valor);
	atribuição/expressão
		valor = 45.7;
		idade = idade + 1;

=======================================================

Vetor - uma variável unidimensional, indexada, homogênea.
				Permite que um grupo de mais de um valor, sempre do
				mesmo tipo de dados, seja armazenado em uma variável,
				acessados com a utilização de um índice (posição na
				variável na qual o valor está armazenado).

como declarar um vetor:
-----------------------
	<tipo de dados> <nome da variável>[dimensão];

	dimensão - é a quantidade de elementos/valores que o vetor
						 irá/poderá armazenar.

	float notas[4];

	permite que 4 notas do tipo float sejam armazenadas no
	vetor notas:
         0     1     2     3      <--- índice, que indica
    	+-----+-----+-----+-----+				 a posição de cada
 notas|     |     |     |     |				 valor na variável
	    +-----+-----+-----+-----+

	Em linguagem C o índice sempre começa em 0(zero).
	*************************************************

como acessar o conteúdo de um vetor:
------------------------------------

O acesso ao conteúdo para leitura, escrita,
atribuição e uso em uma expressão, para um
vetor é sempre realizado por seu nome seguido
da posição/do índice no qual o valor está ou
será armazenado

	leitura:
		scanf("%f",&notas[0]); // notas indexado por zero

	escrita:
		printf("%f",notas[0]);

	atribuição/expressão
		notas[0] = 7.5;
		notas[1] = 8.5;
		notas[2] = 6.5;
		notas[3] = 6.0;
		media = (notas[0]+notas[1]+notas[2]+notas[3])/4;

	A referência ao índice pode ser estática* (como mostrado
	acima), ou dinâmica**:

*uma referência estática usa valores constantes para acessar o
 o conteúdo de um vetor, indicando sempre as mesmas posições
 de seus índices.

**uma referência dinâmica usa uma variável do tipo inteiro
  para acessar o conteúdo de um vetor, alterando seus índices.

	for(i = 0, media = 0;i < 4;i = i + 1)
	{
	  media = media + notas[i];
  }
*/

/*
Questão 01: Obter valores para um vetor de inteiros com
dimensão 20 e então determinar qual o menor e qual
o maior valor do conjunto. O vetor não está e não
deverá ser ordenado.

entradas de dados:
	valores para um vetor de inteiros com dimensão 20

saídas de dados:
	o maior e o menor valores no vetor

processamento:
	inicializar o índice (i) com 0
	preencher o vetor
		enquanto i for menor do que 20
			obter valor para a posição do vetor indexada por i
			incrementar i em 1
		fimenquanto
	encontrar o maior e o menor valores no vetor
		atribuir o valor da posição 0 do vetor para a variável maior
		atribuir o valor da posição 0 do vetor para a variável menor
		inicializar o índice (i) com 0
		enquanto i for menor do que 20
			se o valor da posição indexada por i for menor do que a variável menor
				ENTÃO
					menor recebe valor da posição indexada por i
			se o valor da posição indexada por i for maior do que a variável maior
				ENTÃO
					maior recebe valor da posição indexada por i
			incrementar i em 1
		fimenquanto
	mostrar o menor valor
	mostrar o maior valor
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Q 50

int main()
{
	int vetor[Q], menor, maior, i;

//srand(time(NULL)); inicializa a geração de números
//									 randômicos, utilizando a hora do
//									 sistema operacional como seed
	srand(time(NULL));
	i = 0;
	while(i < Q)
		{
//		printf("\nDigite um numero para a posicao %d do vetor: ",i);
//		scanf("%d",&vetor[i]);

//		vetor[i] = rand();  //rand() gera um número inteiro
			//  entre 0 e 32767
			//  32767 é o valor da constante
			//  RAND_MAX em stdlib.h

			do
				{
					vetor[i] = rand() / 100;
				}
			while(vetor[i] % 2 != 0); //aceita somente números pares

			i = i + 1;
		}
//	for(i = 0;i < 20;i = i + 1)
//	{
//		printf("\nDigite um numero para a posicao %d do vetor: ",i);
//		scanf("%d",&vetor[i]);
//	}
	menor = vetor[0];
	maior = vetor[0];
	i = 0;
	while(i < Q)
		{
			if(vetor[i] < menor)
				menor = vetor[i];
			if(vetor[i] > maior)
				maior = vetor[i];
			i = i + 1;
		}

	printf("\nO menor valor e %d",menor);
	printf("\nO maior valor e %d",maior);

	printf("\n\nConteudo do Vetor\n");
	i = 0;
	while(i < Q)
		{
			printf("%d ",vetor[i]);
			i = i + 1;
		}

	return 0;
}
