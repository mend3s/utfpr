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

#define Q 50

void bolha(int [], int);
//int [] - vetor que será ordenado
//int - dimensão do vetor
void imprime_vetor(int [], int, char []);
//int [] - vetor que será impresso na tela
//int - dimensão do vetor
//char [] - texto para orientação na tela
void preenche_vetor(int [], int);
//int [] - vetor que será preenchido
//int - dimensão do vetor
int busca_maior_menor(int [], int, int);
//int [] - vetor no qual a busca será realizada
//int - dimensão do vetor
//int - tipo - 1 para buscar o menor valor
//						 2 para buscar o maior valor

int main()
{
	int numeros[Q];

	srand(time(NULL)); //inicializando números aleatórios/randômicos

	preenche_vetor(numeros,Q);
	imprime_vetor(numeros,Q,"Vetor original");

	printf("\n\nResultado da busca sequencial\n");
	printf("\nO maior numero no vetor e %d",busca_maior_menor(numeros,Q,2));
	printf("\nO menor numero no vetor e %d",busca_maior_menor(numeros,Q,1));

  bolha(numeros,Q);

	imprime_vetor(numeros,Q,"Vetor ordenado");

	printf("\n\nResultado no vetor ordenado\n");
	printf("\nO maior numero no vetor e %d",numeros[Q-1]);
	printf("\nO menor numero no vetor e %d",numeros[0]);

	return 0;
}

//Método da Bolha de Ordenação
//----------------------------
//int [] - vetor que será ordenado
//int - dimensão do vetor
void bolha(int v[], int tam)
{
	int i, j, aux;
	for(i = tam-1; i > 0; i--)
		{
			for(j = 0; j < i; j++)
				{
					if(v[j] > v[j+1])
						{
							aux = v[j];
							v[j] = v[j+1];
							v[j+1] = aux;
						}
				}
		}
}

//int [] - vetor que será impresso na tela
//int - dimensão do vetor
//char [] - texto para orientação na tela
void imprime_vetor(int v[], int tam, char texto[])
{
	int i;
	printf("\n\n%s\n",texto);
	for(i = 0; i < tam; i = i + 1)
		{
			printf("%d ",v[i]);
		}
}

//int [] - vetor que será preenchido
//int - dimensão do vetor
void preenche_vetor(int v[], int tam)
{
	int i;
	for(i = 0; i < tam; i = i + 1)
		{
			//printf("\nDigite um valor para a posicao %d do vetor: ",i);
			//scanf("%d",&numeros[i]);
			do
				{
					v[i] = rand()/100; //rand() gera um número inteiro entre 0 e 32767
				}
			while((v[i] < 50) || (v[i] > 150));
		}
}

//int [] - vetor no qual a busca será realizada
//int - dimensão do vetor
//int - tipo - 1 para buscar o menor valor
//						 2 para buscar o maior valor
int busca_maior_menor(int v[], int tam, int tipo)
{
	int valor, i;
	valor = v[0];

	if(tipo == 1) //procura o menor valor
		{
			for(i = 0; i < tam; i = i + 1)
				{
					if(v[i] < valor)
						valor = v[i];
				}
		}
	if(tipo == 2) //procura o maior valor
		{
			for(i = 0; i < tam; i = i + 1)
				{
					if(v[i] > valor)
						valor = v[i];
				}
		}
	return valor;
}
