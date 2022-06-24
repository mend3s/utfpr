/*
     x!    (x+1)!
s = ---- + ------ + ....
     y!    (y+1)!
*/

#include <stdio.h>

int fatorial(int);

int main()
{
	int x, y, fx, fy, qtd, cont;
	float s;

	printf("digite o valor de x: ");
	scanf("%d", &x);
	printf("digite o valor de y: ");
	scanf("%d", &y);
	printf("quantos termos para a serie: ");
	scanf("%d", &qtd);
	cont = 0;
	s = 0;
	while(cont < qtd) {
		x = x + 1;
		y = y + 1;
		cont = cont + 1;
		s = s + (float)fatorial(x) / (float)fatorial(y);
	}

	printf("\ns --> %f", s);

	return 0;
}

int fatorial(int n)
{
	int aux;
	aux = n - 1;
	while(aux > 1) {
		n = n * aux;
		aux = aux - 1;
	}
	return n;
}