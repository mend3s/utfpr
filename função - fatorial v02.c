/*
        n!    (n+1)!   (n+2)!  (n+3)!  (n+4)!
  S =  ---- + ------ + ----- + ----- + ----- + ...
        x!    (x+1)!   (x+1)!  (x+1)!  (x+1)!
*/
#include <stdio.h>

int main(){
  float s, n, x, fatn, fatx, y;
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
 //cálculo do fatorial de n 	
     fatn = n;
     y = fatn - 1;
     while (y > 1) {
       fatn = fatn * y;
       y = y - 1;
       }
//cálculo do fatorial de x
     fatx = x;
     y = fatx - 1;
     while (y > 1) {
       fatx = fatx * y;
       y = y - 1;
       }

     s = s + fatn / fatx;

     n = n + 1;
     x = x + 1;
     c = c + 1;
  }

  printf("%f", s);
  
  return 0;
}
