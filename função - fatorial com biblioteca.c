/*
        n!    (n+1)!   (n+2)!  (n+3)!  (n+4)!
  S =  ---- + ------ + ----- + ----- + ----- + ...
        x!    (x+1)!   (x+1)!  (x+1)!  (x+1)!
*/

/*
biblioteca.h est? copiado em:

C:\Program Files (x86)\Falcon\MinGW\include
C:\Program Files (x86)\Falcon\MinGW\lib\gcc\mingw32\4.4.1\include
*/

#include <biblioteca.h>

int main(){
  float s, n, x;
  int c, q;
  printf("digite o valor de n: ");   
	scanf("%f", &n);
  printf("digite o valor de x: ");  
	scanf("%f", &x);
  printf("digite a quantidade de termos: ");  
	scanf("%d", &q);
  s = 0;   
	c = 0;
  while (c < q) {
     s = s + fatorial(n) / fatorial(x);
     n = n + 1;
     x = x + 1;
     c = c + 1;
  }

  printf("%f", s);
  
  return 0;
}