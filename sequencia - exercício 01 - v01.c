/*
1. Obter o nome e a idade de um usu?rio e escrever 
na tela a seguinte mensagem: 
Hello! FULANO, voc? tem XX anos!

entradas de dados:
  nome e idade
sa?das de dados:
  mensagem: Hello! FULANO, voc? tem XX anos!
processamento
  substituir FULANO pelo nome informado e XX pela idade informada	  

obter nome
obter idade
escrever a mensagem substituindo FULANO por nome e XX por idade
	
inteiro idade
caracter nome
escreva("Digite seu nome: ")
leia(nome)
escreva("Digite sua idade: ")
leia(idade)
escreva("Hello! ",nome,"voc? tem ",idade," anos!")

*/
#include <stdio.h> //entradas e sa?das de dados - printf e scanf
#include <stdlib.h> //fflush(stdin) - limpa buffer de entrada de dados
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	char nome[50]; //string
	printf("Digite sua idade: ");
	scanf("%d",&idade);	
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(nome); 
	printf("Hello! %s voc? tem %d anos",nome,idade);
	return 0;
}