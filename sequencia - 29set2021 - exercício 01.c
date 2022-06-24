/*
1. Obter o nome e a idade de um usuário e escrever na tela a 
seguinte mensagem: 
Hello! FULANO, você tem XX anos!

entradas de dados:
	nome, idade

saídas de dados:
	mensagem:
		Hello! FULANO, você tem XX anos!
		
		trocar FULANO pelo nome lido e XX pela idade lida

processamento:
	obter o nome do usuário
		obter significa: 1 - mostrar ao usuário uma mensagem 
												 indicativa do que será digitado
										 2 - ler o valor que será digitado
										 3 - associar o valor lido a uma variável
	obter a idade do usuário
	mostrar a mensagem:
		Hello! FULANO, você tem XX anos!
		
		trocar FULANO pelo nome lido e XX pela idade lida										 	 

*/
#include <stdio.h>  // printf e scanf
#include <stdlib.h> // fflush
int main()
{
	int idade;
	char nome[51]; // armazena 49 caracteres, uma vez que o último
								 // é o \0 que indica o final da string
/*
char letra; - apenas um caracter
char nome[50]; - string que é uma sequencia de caracteres
*/	
	printf("Digite seu nome: ");
	fflush(stdin); // limpa o buffer de teclado
								 // stdin - standard input - entrada padrão - teclado
	gets(nome);    // gets - lê uma string do teclado e armazena na variável
	printf("Digite sua idade: ");
	scanf("%d",&idade); // %d indica que uma variável int será lida
											// &idade indica que o conteúdo lido será armazenado no endereço de memória da variável
	
	printf("\nHello! %s, voce tem %d anos!",nome,idade);
	
	return 0;
}
