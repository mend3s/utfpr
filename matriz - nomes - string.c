#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main(){

  char nomes[2][2][50]={{"Luiz XVI", "Maria Antonieta"},{"Francisco","João"}};
  int lin, col, p;
    
  setlocale(LC_ALL, "Portuguese");
  
  for(lin = 0;lin < 2;lin++){
   for(col = 0;col < 2;col++){
     printf("Nome [%d][%d] --> ",lin,col);
     fflush(stdin);
     gets(nomes[lin][col]);
     //scanf("%[^\n]s",&nomes[lin][col]);
     //fgets(nomes[lin][col],49,stdin);
   }
  } 
 
  for(lin = 0;lin < 2;lin++){
   for(col = 0;col < 2;col++){
   	for(p = 0;nomes[lin][col][p] != '\0';p++){
     nomes[lin][col][p] = getche();
     //scanf("%[^\n]s",&nomes[lin][col]);
     //fgets(nomes[lin][col],49,stdin);
    }
   }
	}
	  
 
 
  printf("\n");	
	
  for(lin = 0;lin < 2;lin++){
   for(col = 0;col < 2;col++)
     printf("%s\t",nomes[lin][col]);
   printf("\n");
  }
  
  printf("\n");
 
  for(lin = 0;lin < 2;lin++){
	  for(col = 0;col < 2;col++)
	    for(p = 0;p < 50;p++)
   	    putchar(nomes[lin][col][p]);
	  printf("\n");
  }
  
  printf("\n");  
  for(lin = 0;lin < 2;lin++){
	  for(col = 0;col < 2;col++)
	   for(p = 0;nomes[lin][col][p] != '\0';p++)
   	   putchar(nomes[lin][col][p]);
	  printf("\n");
  } 
  return 0;
}