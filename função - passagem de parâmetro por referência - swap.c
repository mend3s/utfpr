#include <stdio.h>

void troca(int *, int *);

int main(){
	int x, y, z;
	x = 2; 
	y = 4;
	z = 7;

  printf("\n%d %d %d\n",x,y,z);	
		
	if(x < y)
		troca(&x,&y);
	if(y < z)
		troca(&y,&z);
	if(x < y)
		troca(&x,&y);

  printf("\n%d %d %d\n",x,y,z);		
	
	return 0;
}

void troca(int *a, int *b){
	int aux;
	aux = *b;
	*b = *a;
	*a = aux;
}
