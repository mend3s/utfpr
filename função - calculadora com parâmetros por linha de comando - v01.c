/*
Criar um programa em C que receba como parâmetro para a função main
três argumentos:
1 - um código indicando uma operação aritmética (+ / - *)
2 - dois números inteiros
O programa deve possuir também quatro funções, uma para cada operação
aritmética a ser realizada, sendo:
+  sem parâmetro e sem retorno
/ sem parâmetro e com retorno
- com parâmetro e sem retorno
* com parâmetro e com retorno
Ao ser chamado por linha de comando o programa deve verificar:
1 - se os parâmetros fornecidos são válidos
2 - chamar a função correspondente e mostrar o resultado da operação
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void soma();       // + sem parâmetro e sem retorno
int divisao();     // / sem parâmetro e com retorno
void sub(int,int); // - com parâmetro e sem retorno
int mult(int,int); // * com parâmetro e com retorno
int verificaop(char*);
int verficanum(char*);
int sa, sb;
int main(int argc, char *argv[]){
  char str1[4], str2[4];
  char *ptr1, *ptr2;    //char *ptr1 e *ptr2 declaram variáveis (ptr1 e ptr2) que São ponteiros para char
/* **********************************************************************************************************
Se um ponteiro p armazena o endereço de uma variável i, podemos dizer p aponta para i ou p é o endereço de i.
(Em termos um pouco mais abstratos, diz-se que p é uma referência à variável i.)
 https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html
********************************************************************************************************** */
  ptr1 = argv[2];       //atribuição do valor de argv[2] para o ponteiro para CHAR ptr1
  ptr2 = argv[3];       //atribuição do valor de argv[3] para o ponteiro para CHAR ptr2
  int x, y;
  if (argc != 4){
    printf("\n.Parametros invalidos\n");
    exit(0);
  }
    else
      if (verificaop(argv[1]) == 0){
        printf("\n..Parametros invalidos\n");
        exit(0);
      }
        else{
          strcpy(str1,ptr1);  //cópia do valor apontado por ptr1 (argv[2]) para a string str1
          strcpy(str2,ptr2);  //cópia do valor apontado por ptr2 (argv[3]) para a string str2
         // if ((isdigit(*argv[2])) && (isdigit(*argv[3]))){ //esta linha pode ser utilizado caso o usuário informa apenas valores
                                                             //válidos na linha de comando. Comentar a próxima linha caso esta seja utilizada
           if ((verficanum(str1)) && (verficanum(str2))){ //passa str1 e depois str2 para a função verificanum. Recebe 1(true)
                                                          //caso a sring enviada possua somente dígitos válidos (0...9). recebe
                                                          //0 caso contrário
             switch (*argv[1]){  //*argv[1] indica o valor do objeto apontado por *argv[1]
              case '+':
                sa = atoi(argv[2]);
                sb = atoi(argv[3]);
                soma();
                break;
              case '/':
                sa = atoi(argv[2]);
                sb = atoi(argv[3]);
                printf("A divisao e %d", divisao());
                break;
              case '-':
                x = atoi(argv[2]);
                y = atoi(argv[3]);
                sub(x,y);
                break;
              case '.':
                x = atoi(argv[2]);
                y = atoi(argv[3]);
                printf("\nA multiplicao e %d",mult(x,y));
                break;
            }
          }
          else{
            printf("\n...Parametros invalidos\n");
            exit(0);
          }
        }
  return 0;
}

void soma(){
  printf("\nA soma e %d",sa+sb);
}
int divisao(){
  if (sb != 0)
    return sa / sb;
    else
      return 0;
}
void sub(int a, int b){
  printf("\nA subtracao e %d",a - b);
}
int mult(int a, int b){
  return (a * b);
}
int verificaop(char *op){ //char *op declara uma variável (op) que é um ponteiro para char
                          //(uma variável que armazena um endereço de memória do tipo char)
  switch (*op){ //*op indica o valor do objeto apontado por *op
    case '+': case '-': case '/': case '*':
      return (1);
      break;
    default:
      return (0);
      break;
  }
}
int verficanum(char *num){ //um vetor quando passado como parâmetro de função é sempre um ponteiro
                           //a declaração num[] é equivalente a *num
//esta função recebe uma string que contém um valor informado pelo usuário por linha de comando (argv[2] ou argv[3])
//caso haja algum dígito fora do limite 0...9 a função retorna 0(false), caso contrário retorn 1(true)
  int i, ok = 1;
  for(i = strlen(num) - 1;i >= 0;i = i - 1){
     switch(num[i]){
       case '0'...'9':
         break;
       default:
         ok = 0;
         break;
     }
  }
  return ok;
}
