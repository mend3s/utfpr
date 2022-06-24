#include <stdio.h>
#include <string.h>

struct a
{
  int ra;
  char nome[50];
  float notas[4];
  float media;
};

typedef struct a tp_pessoa;

int maiormedia(tp_pessoa[], int);
void bubbleSort(tp_pessoa[], int);
void bubbleSort_nome_PTR(tp_pessoa[], int);
void imprime(tp_pessoa[],int);

int main()
{
  int i, qa;
  float soma;
  tp_pessoa aluno[4];

  for(qa = 0;qa <= 3; qa++){
    printf("\nDigite o RA do %d aluno: ", qa+1);
    scanf("%d", &aluno[qa].ra);
    fflush(stdin);
    printf("Digite o nome do %d aluno: ", qa+1);
    scanf("%[^\n]s", &aluno[qa].nome);
    for(i = 0, soma = 0;i <= 3;i++){
      printf("Digite a %d nota do aluno %s ", i+1, aluno[qa].nome);
      scanf("%f", &aluno[qa].notas[i]);
      soma = soma + aluno[qa].notas[i];
    }
    aluno[qa].media = soma / 4.0;
    printf("\nA media do aluno %s e %2.2f", aluno[qa].nome, aluno[qa].media);
   }
 printf("\nA maior media da turma e %2.2f do aluno %s ", aluno[maiormedia(aluno,4)].media, aluno[maiormedia(aluno,4)].nome);
 imprime(aluno,4);
 bubbleSort_nome_PTR(aluno, 4);
 imprime(aluno,4);
 return 0;
}

void imprime(tp_pessoa v[], int limite){
  int i;
  printf("\n\n---------------");
  printf("\nLista de Alunos");
  printf("\n---------------");
  for(i = 0;i < limite;i = i + 1){
     printf("\n----------------------------------------------------");
     printf("\nRA .......: %d",v[i].ra);
     printf("\nNome .....: %s",v[i].nome);
     printf("\nN1 %2.2f N2 %2.2f N3 %2.2f N4 %2.2f",v[i].notas[0],v[i].notas[1],v[i].notas[2],v[i].notas[3]);
     printf("\nMedia ....: %2.2f",v[i].media);
  }
}

int maiormedia(tp_pessoa v[], int limite){
  int i, p;
  float maior = 0.0;
  for(i = 0;i < limite;i++)
    if (v[i].media > maior){
        maior = v[i].media;
        p = i;
    }
  return p;
}

void bubbleSort_nome_PTR(tp_pessoa v[], int n){
  int i, j;
  tp_pessoa aux;
  for(i = n-1; i > 0; i--){
    for(j = 0; j < i; j++){
       if(strcmp(v[j].nome,v[j+1].nome) > 0){
         aux = v[j];
         v[j] = v[j + 1];
         v[j + 1] = aux;
       }
    }
  }
}

void bubbleSort(tp_pessoa *v, int n){
  int i, j;
  tp_pessoa aux;
  for(i = n-1; i > 0; i--){
    for(j = 0; j < i; j++){
      if(v[j].ra > v[j + 1].ra) {
         aux = v[j];
         v[j] = v[j + 1];
         v[j + 1] = aux;
      }
    }
  }
}
