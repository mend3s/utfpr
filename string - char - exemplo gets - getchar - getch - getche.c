#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	char texto[50];
	char letra;
	
	printf("\ngets ");
	fflush(stdin);
	gets(texto);     //le uma string
  printf("\ntexto %s",texto);
  
  printf("\ngetchar ");
  fflush(stdin);
  letra = getchar();  //le um caracter, mas ENTER deve ser pressionado
  printf("\nletra %c",letra);
  
  printf("\ngetch ");
  fflush(stdin);
  letra = getch();  //le um caracter, sem a necessidade de ENTER
                    //não mostra o caracter na tela
  printf("\nletra %c",letra);
  
  printf("\ngetche ");
  fflush(stdin);
  letra = getche();  //le um caracter, sem a necessidade de ENTER
                     //mostra o caracter na tela
  printf("\nletra %c",letra);		
	
	return 0;
}