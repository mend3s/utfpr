//encontre o maior e o menor números na matriz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 6
#define COL 6

int main(){
	
	int m[LIN][COL], i, j, maior, menor;
	
	srand(time(NULL));
	
	for(i = 0;i < LIN;i = i + 1)
		for(j = 0;j < COL;j = j + 1)
		  m[i][j] = rand()/100;
	
	maior = m[0][0];
	menor = m[0][0];

	for(i = 0;i < LIN;i = i + 1){
	  for(j = 0;j < COL;j = j + 1){
		  printf("%03d ",m[i][j]);	
		  if(m[i][j] > maior)
			  maior = m[i][j];
		  if(m[i][j] < menor)
			  menor = m[i][j];
	  }
	  printf("\n");
	}
	
	printf("\nMaior %d \nMenor %d",maior, menor);
		
	return 0;
}