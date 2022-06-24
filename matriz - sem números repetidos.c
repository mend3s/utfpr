/*
troca os valores que estão acima da diagonal principal, pelos valores que estão 
abaixo da diagonal principal
diagonal principal ------------> 0,0 1,1 2,2 3,3 4,4
acima da diagonal principal ---> 0,1 0,2 0,3 0,4 1,2 1,3 1,4 2,3 2,4 3,4
abaixo da diagonal principal --> 1,0 2,0 3,0 4,0 2,1 3,2 4,1 3,2 4,2 4,3

      0    1     2     3     4
  +-----+-----+-----+-----+-----+
0 | 0,0 | 0,1 | 0,2 | 0,3 | 0,4 |
  +-----+-----+-----+-----+-----+
1 | 1,0 | 1,1 | 1,2 | 1,3 | 1,4 |
  +-----+-----+-----+-----+-----+
2 | 2,0 | 2,1 | 2,2 | 2,3 | 2,4 |
  +-----+-----+-----+-----+-----+
3 | 3,0 | 3,1 | 3,2 | 3,3 | 3,4 |
  +-----+-----+-----+-----+-----+
4 | 4,0 | 4,1 | 4,2 | 4,3 | 4,4 |
  +-----+-----+-----+-----+-----+

  i,j  j,i
-----------
  0,1  1,0
  0,2  2,0
  0,3  3,0
  0,4  4,0
-----------
  1,2  2,1
  1,3  3,1
  1,4  4,1
-----------
  2,3  3,1
  2,4  4,1
-----------
  3,4  4,3
-----------
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
  int i, i2, j, j2, r, aux, m[5][5];
  srand(time(NULL));

  //inicializa a matriz com zeros
  for(i = 0; i <= 4; i++)
    for(j = 0; j <= 4; j++)
       m[i][j] = 0;

  //mostra o conteúdo da matriz
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++)
      printf("%d\t",m[i][j]);
    printf("\n");
  }

  //preenche a matriz com números randômicos não repetidos
  i = 0;
  while (i <= 4){
    j = 0;
    while (j <= 4){
      aux = rand()/1000;
      r = 0;
      for(i2 = 0; i2 <= i; i2++)
        for(j2 = 0; j2 <= j; j2++)
          if (m[i2][j2] == aux)
             r = 1;
      if (r == 0){
        m[i][j] = aux;
        j++;
      }
    }
    i++;
  }
  //mostra o conteúdo da matriz
  printf("\n");
  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++)
      printf("%d\t",m[i][j]);
    printf("\n");
  }

  //troca os valores dentro da matriz
  for(i = 0; i < 4; i++)
    for(j = 0; j < i; j++){
      aux = m[i][j];
      m[i][j] = m[j][i];
      m[j][i] = aux;
    }

  //mostra o conteúdo da matriz
  printf("\n");
  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++)
      printf("%d\t",m[i][j]);
    printf("\n");
  }
  return 0;
}
