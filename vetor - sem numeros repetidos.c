#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int v[20], x, i, j, n;
  i = 0;
  while (i <= 19){
    x = rand()/1000;
    n = 0;
    for(j = 0; j < i; j++)
      if (v[j] == x){
        n = 1;
        j = i + 1;
      }
     if (n == 0) {
      v[i] = x;
      i++;
    }
  }

  for(i = 0; i <= 19; i++)
    printf("%d ",v[i]);

  return 0;
}
