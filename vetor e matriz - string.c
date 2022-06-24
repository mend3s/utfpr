/*
  char n;//variável char - apenas 1 caracter
  scanf("%c",&n);
  c = getchar();

  char nome[50];//variável string - 49 caracteres
  fflush(stdin);  //#include <stdlib.h>
  gets(nome);
ou
  fflush(stdin);
  scanf("%[^\n]s",&nome);

  char nomes[3][50];//vetor de strings - 3 nomes com 49 caracteres cada
  for(i = 0;i < 3;i++){
    fflush(stdin);
	gets(nomes[i]);
  }

  char muitosnomes[3][3][50];//matriz de strings - 3 x 3 nomes (9 nomes) com até 49 caracteres
  for(i = 0;i < 3;i++)
    for(j = 0;j < 3;j++){
      fflush(stdin);
	  gets(nomes[i][j]);
    }
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main ()
{
  setlocale(LC_ALL,"Portuguese");
  char n = 'a';
  float vect[6] = {1.3, 4.5, 2.7, 4.1, 0.0, 100.1};
  char str[10] = {'J','o','a','o','\0'};
  char str1[10] = "Joao";
  char str_vect[3][10] = {"João","Maria","José"};
  char nomes[2][2][10] = {{"João","Pedro"},{"Francisco","Antonio"}};
  int c, l, p;
  
/*
  for (c=0;c<5;c++){
    printf("\n\nDigite uma string(%d): ", c+1);
   // gets(nomes[c]);
    fflush(stdin);
    scanf("%[^\n]s",&nomes[c]);
   }
*/

  strcpy(nomes[0][0],"MARCOS");

  printf("\n\n\nOs nomes que voce digitou foram:\n\n");
  for (l=0;l<2;l++){
    for(c=0;c<2;c++)
      printf ("%s\t",nomes[l][c]);
    printf("\n");
  }
     printf("\n"); 
  for (l=0;l<2;l++){
    for(c=0;c<2;c++){
    	for(p=0;nomes[l][c][p]!='\0';p++){
        printf ("%c",nomes[l][c][p]);
			}
	 	  printf("\t");
    }
    printf("\n");
	}

  return 0;
}
