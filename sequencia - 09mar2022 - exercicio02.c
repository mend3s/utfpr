/*
2. Calcular a média final obtida por um aluno, 
   para 4 notas bimestrais.

entradas de dados:
	nota1, nota2, nota3, nota4 (4 notas bimestrais)
	
saídas de dados:
	média final (média aritmética simples)

processamento:
	obter as 4 notas
		obter nota1
		obter nota2
		obter nota3
		obter nota4
	calcular a média final
		mediafinal = (nota1 + nota2 + nota3 + nota4) / 4
	mostrar a media calculada		
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
//área de declaração de variáveis - sempre no início da função
	float n1, n2, n3, n4, media;
	
	printf("O separador de decimais para numeros deve ser a \"virgula\" ,\n");
	printf("---------------------------------------------------------\n");
//entradas de dados
//toda entrada de dados necessita de uma informção ao usuário
	printf("\nDigite a primeira nota: "); //printf comando de saída
	scanf("%f",&n1); //scanf é um comando de entrada
									 //possui duas partes:
									 //"%f" - diz qual é o tipo de dados que será lido
									 //&n1 - associa o valor lido à variável na memória
	printf("\nDigite a segunda nota: ");
	scanf("%f",&n2);
	printf("\nDigite a terceira nota: ");
	scanf("%f",&n3);
	printf("\nDigite a quarta nota: ");
	scanf("%f",&n4);
	
//transformar as entradas em saída de dados
	media = (n1 + n2 + n3 + n4) / 4;
// = é comando de atribuição. Resolve a expressão à sua direita
//														e armazena o resulta na variável à sua
//														esquerda	
	
//mostrar o resultado (realizar a saída de dados)
	printf("\nA media e %0.2f",media);
//este printf escreva o texto A media e, e no local onde
//está o identificador %0.2f insere o valor da variável que
//está após a vírgula. Somente aparece na tela o que está
//entre aspas " "
//0.2 entre % e f significa que um número formatado com duas
//casas decimais será mostrado na tela, sem esta informação
//um número com seis casas decimais aparece na tela

	return 0;
}
