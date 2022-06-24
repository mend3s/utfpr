/*
1. Obter o nome e a idade de um usuário e 
escrever na tela a seguinte mensagem:
Hello! FULANO, você tem XX anos!

entradas de dados:
	nome, idade
	
saída de dados:
	mensagem:
	 	Hello! FULANO, você tem XX anos!
	 	
processamento:
	obter o nome
	obter a idade
	mostrar a mensagem:
	 Hello! FULANO, você tem XX anos!
	 trocando FULANO pelo nome lido e XX pela idade lida	 	
*/
#include <stdio.h>
#include <stdlib.h> //para usar fflush(stdin)
int main()
{
	int idade;  //%d ou %i
	char nome[50];  //%s
/*
char - tipo de dados caracter. Permite o armazenamento
			 de texto/literal
			 
Se uma variável for declarada:

char n;

Ela pode armazenar apenas um caracter, dizemos que é
um char, e usamos %c

Se uma variável é declarada:

char nome[50];

Ela pode armazenar até 49 caracteres, sendo que o 
último caracter sempre será um \0 que indica o final
do texto. O \0 é inserido automaticamente quando o
conteúdo da variável é lido.
Chamamos esta variável de string (uma cadeira de char)	
e usamos %s		 
*/
	printf("Digite o nome: ");
	fflush(stdin); //fflush limpa o buffer da entrada padrão 
								 //stdin - standard input - entrada padrão - teclado	
								 //para usar fflush(stdin) use #include <stdlib.h>
	gets(nome);
/*
gets - é utilizado para a leitura de variáveis do tipo
			 string (cadeia de caracter)
*/
	printf("Digite a idade: ");
	scanf("%d",&idade);
	
	printf("\nHello! %s, voce tem %d anos!",nome,idade);
		
	return 0;
}