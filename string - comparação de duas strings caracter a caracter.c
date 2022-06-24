#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[50], comparar[50];  //string
	int i, controle;
	
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	
	strcpy(comparar,"Joao dos Santos");
	
	if(strlen(nome) == strlen(comparar)){
		i = 0;
		controle = 0;
	  while (i < strlen(nome)){
		  if (nome[i] != comparar[i]){
				printf("\nAs strings nao sao iguais\n");
				controle = 1;
				break;
			}
			i = i + 1;
	  }	
	 	if (controle == 0){
		  printf("\nAs strings sao iguais\n");
	  }
	}
	else{
		printf("\nAs strings nao sao iguais\n");
	}
	
	return 0;
}