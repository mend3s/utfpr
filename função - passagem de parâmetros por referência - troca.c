#include <stdio.h>
#define Q 10

void troca(int *,int *);

int main(){
	int x, y;
  x = 11;
  y = 33;
	
	printf("\nantes da chamada ---> x -> %d\t y -> %d",x,y);
	troca(&x,&y);
	printf("\ndepois da chamada --> x -> %d\t x -> %d",x,y);	
	return 0;	
}

void troca(int *a,int *b){
	int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}