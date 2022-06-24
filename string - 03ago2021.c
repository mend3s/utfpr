#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

	char fim[4];

	/* isto é um erro em linguagem C

	 fim = "sim";

		uma atribuição de um texto para uma variável string em
		linguagem C, deve ser realizada com strcpy
	*/

	strcpy(fim,"sim");

	/* isto é um erro em linguagem C

		while(fim == "sim)

		uma comparação de string em linguagem C deve ser realizada
		com strcmp - string compare - compara a primeira com a segunda
		string, se forem iguais o resultado é zero
	*/

	while(strcmp(fim,"sim")==0)
		{
			printf("\nDigite sim para continuar ou nao para encerrar ");
			fflush(stdin);
			gets(fim);
			strlwr(fim);
		}

	return 0;
}