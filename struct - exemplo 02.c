/*
Escreva um programa que receba duas notas, o nome e o
RA de um grupo de 20 alunos e que mostre, para cada aluno
a mensagem aprovado se a nota for maior ou igual a 6
ou reprovado caso contrário, além do nome e do RA
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define Q 3
struct A
{
   char nome[50];
   int ra;
   float notas[2];
   float media;
   char situacao[4]; //APR ou REP
}typedef tipoaluno;

int main(){
  setlocale(LC_ALL,"Portuguese");

  tipoaluno aluno[Q];
  int i, j, op, ra;
  float soma;

  for(j = 0;j < Q;j = j + 1){
    printf("Digite o nome do %dº aluno: ",j+1);
    fflush(stdin);
    gets(aluno[j].nome);
    printf("Digite o RA do aluno: ");
    scanf("%d",&aluno[j].ra);
    for(i = 0, soma = 0;i < 2;i = i + 1){
      printf("Digite a %dª nota do aluno: ",i+1);
      scanf("%f",&aluno[j].notas[i]);
      soma = soma + aluno[j].notas[i];
    }
    aluno[j].media = soma / 2;
    if (aluno[j].media >= 6)
      strcpy(aluno[j].situacao,"APR");
      else
        strcpy(aluno[j].situacao,"REP");
  }
  do{
    printf("\nEscolha uma das opções abaixo: ");
    printf("\n1 - Lista todos os alunos");
    printf("\n2 - Pesquisa por RA");
    printf("\n3 - Encerra\n");
    scanf("%d",&op);
    switch (op){
      case 1:
        for(j = 0;j < Q;j = j + 1){
          printf("\n------------------------------\n");
          printf("\nAluno.....: %s",aluno[j].nome);
          printf("\nRA........: %d",aluno[j].ra);
          for(i = 0;i < 2;i = i + 1)
            printf("\nNota %d....: %2.2f",i+1,aluno[j].notas[i]);
          printf("\nMédia.....: %2.2f",aluno[j].media);
          printf("\nSituação..: %s",aluno[j].situacao);
        }
        break;
      case 2:
        printf("\nDigite o número do RA para pesquisa: ");
        scanf("%d",&ra);
        for(j = 0;j < Q;j = j + 1){
           if (ra == aluno[j].ra){
             printf("\n------------------------------\n");
             printf("\nAluno.....: %s",aluno[j].nome);
             printf("\nRA........: %d",aluno[j].ra);
             for(i = 0;i < 2;i = i + 1)
               printf("\nNota %d....: %2.2f",i+1,aluno[j].notas[i]);
             printf("\nMédia.....: %2.2f",aluno[j].media);
             printf("\nSituação..: %s",aluno[j].situacao);
             ra = -1;
           }
        }
        if (ra != -1)
           printf("\nRA não encontrado\n");
        break;
    }
  }while (op != 3);
  return 0;
}


