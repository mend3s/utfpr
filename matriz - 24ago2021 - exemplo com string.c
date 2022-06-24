#include <stdio.h>
int main()
{
	
	int i, lin, col;
	
//******************************************************	

	char letra; //variável char, armazena um caracter
	
	scanf("%c",&letra);
	printf("%c",letra);

//******************************************************	
	
	char nome[50]; //variável string, armazena uma cadeia de caracteres
								 //uma variável string é um vetor de char, mas 
								 //é tratada em um programa em Linguagem C como uma
								 //variável "simples"
								 
	gets(nome);
	printf("%s",nome);

//******************************************************	
	
	char nomes[3][50]; //vetor de string, armazena três cadeias de
										 //caracteres, apesar de ser uma matriz, nós
										 //tratamos como um vetor
										 
	gets(nomes[0]);
	gets(nomes[1]);
	gets(nomes[2]);
	for(i = 0;i < 3;i = i + 1)
		printf("\n%s",nomes[i]);
										 
//******************************************************	
	
	char muitos_nomes[3][3][50]; //uma matriz de cadeia de caracteres
															//com três linhas e três colunas
															//cada uma com até 49 caracteres
															//deve ser tratada como uma matriz
															//de linhas e colunas, ignorando-se
															//a "profundidade"
															
	gets(muitos_nomes[0][0]);
	gets(muitos_nomes[0][1]);
//	...
	gets(muitos_nomes[3][3]);
	for(lin = 0;lin < 3;lin = lin + 1)
	{
	  for(col = 0;col < 3;col = col + 1)
			printf("%s ",muitos_nomes[lin][col]);	
		printf("\n");
	}
	
	return 0;
}