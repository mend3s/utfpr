/*
Questão 29 - Leia uma matriz 50 x 2, onde cada coluna corresponde a um lado de 
um triangulo retângulo.
Declare um vetor que contenha a área dos respectivos triângulos e o escreva.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int m[50][2], i, j;
	
	srand(time(NULL));
	
	for(i = 0;i < 50;i = i + 1)
		for(j = 0;j < 2;j = j + 1)
			m[i][j] = rand()/1000;
		
	for(i = 0;i < 50;i = i + 1){
		printf("\nA area do triangulo %2d (base %2d e altura %2d) e de %3d",
		         i+1,m[i][0],m[i][1],m[i][0]*m[i][1]);
	}
		
	return 0;
}