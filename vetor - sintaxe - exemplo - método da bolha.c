/*
VETORES
=======

Um vetor ? uma vari?vel unidimensional indexada. Permite que v?rios valores de uma mesmo tipo
sejam armazanados na mesma vari?vel.
? necess?rio que haja um ?ndice para acessar cada uma das posi??es em um vetor

Relembrando
-----------

Vari?vel - espa?o de mem?ria que armazena um ?nico valor de um determinado tipo a cada instante, sendo
					 referenciada por um nome.
					 
Declara??o de vari?vel:
-----------------------
tipodedado nome;

int idade; //declara a vari?vel idade, do tipo inteiro.

Acesso a uma vari?vel
---------------------

atribui??o
- - - - - -
	idade = 31;     //constante
	idade = x * 2;	//express?o
	idade = y;      //vari?vel	
			
entrada de dados
- - - - - - - - -
	scanf("%d",&idade);
	
sa?da de dados
- - - - - - - -
	printf("%d",idade);	

VETOR
=====	

Declara??o de vari?vel vetor
----------------------------

tipodedado nome[dimens?o]

[dimens?o] - tamanho do vetor, ou a quantidade de elementos do vetor

float temperaturas[31];  //declara uma vari?vel vetor, do tipo inteiro, com 31 elementos, ou tamanho 31
												 //permite que sejam armazenadas at? 31 valores de temperaturas nesta vari?vel

Acesso a uma vari?vel vetor
---------------------------

atribui??o
- - - - - -
	temperaturas = 32.7; //ERRO - n?o podemos acessar diretamente o vetor
	temperaturas[0] = 30.7;  //atribui o valor 30.7 ao vetor temperaturas, na posi??o 0 - EST?TICA
													//l?-se "temperaturas indexada por 0"		
	
	temperaturas[i] = 28.2;  //atribui o valor 28.2 ao vetor temperaturas, na posi??o indexada pela vari?vel i - DIN?MICA
													 //l?-se "temperaturas indexada por i"
  temperaturas[i] = y;
  temperaturas[i] = x * 2;

entrada de dados
- - - - - - - - -
	scanf("%f",&temperaturas[i]);
	scanf("%f",&temperaturas[8]);
	
sa?da de dados
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
	srand(time(NULL));  //inicializa a gera??o de n?meros rand?micos com a semente time(NULL) - hora do Sistema Operacional
	setlocale(LC_ALL,"Portuguese");
	float notas[Q]; //armazena as notas finais de uma turma da disciplina IF61D
	float maior, menor, aux;
	int idx, i, j;
	
  idx = 0;
  while(idx < Q)
  {
	  //printf("\nDigite a m?dia final do %d? aluno: ",idx+1);
	  //scanf("%f",&notas[idx]);
	  do
	  {
	    notas[idx] = rand() / 100 / 10.0;
	  }while(notas[idx] > 10);
		//rand() - gera um n?mero inteiro entre 0 e 32768
	  
	  idx = idx + 1;
	}
	
	printf("\n\nVetor de notas sem ordena??o\n");
	
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
	
	printf("\nA maior nota ? %0.2f",maior);
	printf("\nA menor nota ? %0.2f",menor);
	
//M?todo da Bolha de Ordena??o	
  for(i = 0; i < Q - 1; i = i + 1){
     for(j = i + 1; j < Q; j = j + 1){
   	   if(notas[i] > notas[j]){
	        aux = notas[i];
	        notas[i] = notas[j];
	        notas[j] = aux;
	      }
     }
  }
	
	printf("\n\nVetor de notas com ordena??o\n");
	
	for(idx = 0;idx < Q;idx = idx + 1)
	{
		printf("%0.2f ",notas[idx]);
	}	

	return 0;
}
