/*
--VARIÁVEL--
int x; -- DECLARAÇÃO DE UMA VARIÁVEL

x - armazena apenas um valor do tipo inteiro
    a cada instante do programa

x - é acessado de 4 formas:

1 - ler um valor para x:
    scanf("%d",&x);
2 - imprimir o valor de x:
    printf("%d",x);
3 - atribuir um valor para x:
    x = 13;
4 - utilizar x em uma expressão:
    a = x * 21;

Obs: SEMPRE acessamos uma variável com
---- referência direta ao seu nome

********************

--VETOR--

- variável unidimensional indexada homogênea
- permite que mais de um valor do mesmo tipo
  seja armazenado
- utiliza um índice para acessar cada valor

declaração:

int v[5]; -- <tipo> <nome>[<dimensão>]

tipo - tipo de dado
nome - é o nome da variável
dimensão - é a quantidade de elementos
           da variável

int v[5];
     0    1    2    3    4    <-- índices
  +----+----+----+----+----+
  |    |    |    |    |    |  <-- valores
  +----+----+----+----+----+

v pode armazenar até cinco valores do tipo
inteiro

v - é acessado de 4 formas:

1 - ler um valor para v:
    scanf("%d",&v[0]); - estática
    scanf("%d",&v[i]); - dinâmica
2 - imprimir o valor de v:
    printf("%d",v[0]); - estática
    printf("%d",v[i]); - dinâmica
3 - atribuir um valor para v:
    v[0] = 13; - estática
    v[i] = 13 - dinâmica
4 - utilizar v em uma expressão:
    a = v[0] * 21; - estática
    a = v[i] * 21; - dinâmica
Obs: SEMPRE acessamos um vetor com
---- referência direta ao seu nome e ao
     valor do índice da posição na qual
     há um valor armazenado

     for(i = 0;i < 5;i = i + 1)
       printf("%d

********************

--MATRIZ --

- variável multidimensional indexada homogênea
- permite que mais de um valor do mesmo tipo
  seja armazenado
- utiliza mais de um índice para acessar cada valor

declaração:

int m[5][5]; -- <tipo> <nome>[<dimensão linha>][<dimensão coluna>]

tipo - tipo de dado
nome - é o nome da variável
dimensão linha - é a quantidade de linhas em uma matriz
dimensão coluna - é a quantidade de colunas em uma matriz

int m[5][5];
     0    1    2    3    4    <-- índices das colunas
  +----+----+----+----+----+
 0|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
 1|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
 2|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
 3|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
 4|    |    |    |    |    |  <-- valores
  +----+----+----+----+----+
índices das linhas

m pode armazenar até 25 valores do tipo
inteiro

m - é acessado de 4 formas:

1 - ler um valor para m:
    scanf("%d",&m[0][0]); - estática
    scanf("%d",&m[i][j]); - dinâmica
2 - imprimir o valor de m:
    printf("%d",m[0][0]); ]- estática
    printf("%d",m[i][j]); - dinâmica
3 - atribuir um valor para m:
    m[0][0] = 13; - estática
    m[i][j] = 13 - dinâmica
4 - utilizar v em uma expressão:
    a = m[0][0] * 21; - estática
    a = m[i][j] * 21; - dinâmica
Obs: SEMPRE acessamos uma matriz com
---- referência direta ao seu nome e ao
     valor do índice da linha e do índice
     da coluna na qual há um valor armazenado

     for(i = 0;i < 5;i = i + 1){
       for(j = 0;j < 5;j = j + 1)
         printf("%d ",m[i][j])
		   printf("\n");
		 }
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define L 30

int main()
{
	int v[L];
	int m[L][L];
	int i, j, l, c, aux;

	srand(time(NULL));

	for(i = 0; i < L; i = i + 1) {
		//printf("\nDigite o valor para a posicao %d do vetor: ",i);
		//scanf("%d",&v[i]);
		v[i] = rand() / 1000;
	}

	printf("\n");
	for(i = 0; i < L; i = i + 1) {
		printf("%3d", v[i]);
	}
//método da bolha de ordenação
	for(i = 0; i < L-1; i++) {
		for(j = i + 1; j < L; j++) {
			if(v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	printf("\n");
	for(i = 0; i < L; i = i + 1) {
		printf("%3d", v[i]);
	}	

	for(l = 0; l < L; l = l + 1)
		for(c = 0; c < L; c = c + 1)
			m[l][c] = rand() / 1000;

	printf("\n\n");
	for(l = 0; l < L; l = l + 1) {
		for(c = 0; c < L; c = c + 1)
			printf("%3d", m[l][c]);
		printf("\n");
	}

	return 0;
}
