#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preenche(int v[], int limite)
{
    int i;
	  srand(time(NULL));
     for(i = 0; i < limite; i++)
       v[i] = rand()/100;
}
void mostra(int *v, int limite)
{
     int i;
     for(i = 0; i < limite; i++)
       printf("%d  ", v[i]);
}
int main ()
{
	int vet[10];
	preenche(vet, 10);
	mostra(vet, 10);
	return 0;
}
