#include <stdio.h>
#include <string.h>
int main(){
	char nome[50]; //string - cadeia de caracteres
	
	printf("\nDigite seu nome: ");
	fflush(stdin);
	gets(nome);
	
//verificar se o nome digitado ? igual a Guilherme	
//------------------------------------------------

  if (strcmp(strupr(nome),"GUILHERME") == 0){
  	printf("\nOK\n");
	}
    else{
			printf("\nNOT OK\n");	
		}
	
//strcmp(string1,string2) 
//compara o conte?do da string1 com o conte?do da 
//string2. Se forem iguais, retorna 0	

//strupr(string) 
//muda o conte?do da string para letras mai?sculas
	return 0;
}



