/*
Questão 26 - Leia duas matrizes 10 x 10 e faça uma substituição entre
a diagonal inferior da primeira com a diagonal superior da segunda.

valores
	   0    1		 2    3    4	  5    6   7     8     9  
	+----+----+----+----+----+----+----+----+----+----+
0 |	   | ds | ds | ds | ds | ds | ds | ds | ds | ds |
	+----+----+----+----+----+----+----+----+----+----+
1 |	di |    | ds | ds | ds | ds | ds | ds | ds | ds |
	+----+----+----+----+----+----+----+----+----+----+
2	|	di | di |    | ds | ds | ds | ds | ds | ds | ds |
	+----+----+----+----+----+----+----+----+----+----+
3	|	di | di | di |    | ds | ds | ds | ds | ds | ds |
	+----+----+----+----+----+----+----+----+----+----+
4	|	di | di | di | di |    | ds | ds | ds | ds | ds |
	+----+----+----+----+----+----+----+----+----+----+
5 |	di | di | di | di | di |    | ds | ds | ds | ds |
	+----+----+----+----+----+----+----+----+----+----+
6 |	di | di | di | di | di | di |    | ds | ds | ds |
	+----+----+----+----+----+----+----+----+----+----+
7	|	di | di | di | di | di | di |di  |    | ds | ds |
	+----+----+----+----+----+----+----+----+----+----+
8 |	di | di | di | di | di | di | di | di |    | ds |
	+----+----+----+----+----+----+----+----+----+----+
9	|	di | di | di | di | di | di | di | di | di |    |
	+----+----+----+----+----+----+----+----+----+----+

Diagonal Inferior		Diagonal Superior

lin	col							lin	col
1		0								0		1
2		0								0		2
2		1								1		2
3		0								0		3
3		1								1		3
3		2								2		3
4		0								0		4
4		1								1		4
4		2								2		4
4		3								3		4
5		0								0		5
5		1								1		5
5		2								2		5
5		3								3		5
5		4								4		5
6		0								0		6
6		1								1		6
6		2								2		6
6		3								3		6
6		4								4		6
6		5								5		6
7		0								0		7
7		1								1		7
7		2								2		7
7		3								3		7
7		4								4		7
7		5								5		7
7		6								6		7
8		0								0		8
8		1								1		8
8		2								2		8
8		3								3		8
8		4								4		8
8		5								5		8
8		6								5		8
8		7								7		8
9		0								0		9
9		1								1		9
9		2								2		9
9		3								3		9
9		4								4		9
9		5								5		9
9		6								6		9
9		7								7		9
9		8								8		9

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 6
#define C 6

int main()
{
	int a[L][C], b[L][C], lin, col, aux;
	
	srand(time(NULL));
	
	for(lin = 0;lin < L;lin = lin + 1)
	{
		for(col = 0;col < C;col = col + 1)
		{
			a[lin][col] = rand()/100;			
			b[lin][col] = rand()/100;
		}
	}

	printf("\n\nMatriz A\n");
	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					printf("%4d",a[lin][col]);
				}
			printf("\n");
		}
		
	printf("\n\nMatriz B\n");
	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					printf("%4d",b[lin][col]);
				}
			printf("\n");
		}			


	for(lin = 1; lin < L; lin = lin + 1)
		{
			for(col = 0; col < lin; col = col + 1)
				{
					aux = a[lin][col];
					a[lin][col] = b[col][lin];
					b[col][lin]= aux;
				}
		}

	printf("\n\nMatriz A - depois da troca\n");
	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					printf("%4d",a[lin][col]);
				}
			printf("\n");
		}
		
	printf("\n\nMatriz B - depois da troca\n");
	for(lin = 0; lin < L; lin = lin + 1)
		{
			for(col = 0; col < C; col = col + 1)
				{
					printf("%4d",b[lin][col]);
				}
			printf("\n");
		}		
	
	return 0;
}

