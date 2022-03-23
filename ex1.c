/*

1- Obter o nome e a idade de um usuário e escrever na tela a seguinte mensagem: Hello! FULANO, você tem XX anos!

Entrada de dados:
    nome, idade

saida de dados:

    mensagem: 
        Hello, fulano, voce tem xx anos!

Processamento de dados

    obter nome
    obter idade
    mostrar a mensagem

*/

#include <stdio.h>

int main (){

  int idade;
  char nome[50];

/*

char - tipo de dados caracter. Permite o armazenament de texto/literal

Se uma variavel for declarada :

char n;

Ela pode armazenar apenas um caracter, dizemos que e um char.

Se uma variavel é declarada:

char nome [50];


Ela pode armazenar até 49 caracteres, sendo que o ultimo caracter sempre sera um \0 que indica o final do texto.
o \0 é insrido automaticamente quando o conteudo da variavel é lido.
Chamamos  esta varaivel de string (uma cadeia de char) e usamos %s

*/

    printf("Digite o nome: ");
    gets(nome);

/*

gets - é utilizado para leitura de variaveis do tipo string (cadeia de caracter)

*/

    printf("Digite a idade: ");
    scanf("%i", &idade);

    printf("\nHello! %s, voce tem %i anos", nome,idade);

}

