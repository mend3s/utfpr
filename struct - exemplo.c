#include <stdio.h>
#include <string.h>

struct e{
	char rua[50];
	int numero;
};

struct a{
	int id;
	char nome[40];
	struct e endereco;
	float notas[3];
	float media;
};

typedef struct a tp_aluno; //cria o tipo de dado tp_aluno como
                           //sendo uma struct a										 
													 
int main(){
	
	struct a aluno[10]; //declaração de um vetor aluno como sendo
	                    //do tipo tp_aluno
	
	int n, i;
	float soma;
	
	for(n = 0;n < 10;n = n + 1){
		aluno[n].id = n+1;
	  strcpy(aluno[n].nome,"Joao ");
	  strcpy(aluno[n].endereco.rua,"Av. Alberto Carazzai ");
		aluno[n].endereco.numero = 1640+n+i;
		for(i = 0,soma = 0;i <= 2;i = i + 1){
	  	aluno[n].notas[i] = n+i+1;
	  	soma = soma + aluno[n].notas[i];
		}
		aluno[n].media = soma / i;
	}
	
	for(n = 0;n < 10;n = n + 1){
    printf("\n--------------------------------");		
	  printf("\nNumero %d - Nome %s",aluno[n].id, aluno[n].nome);
	  printf("\nEndereco: %s, %d",aluno[n].endereco.rua,aluno[n].endereco.numero);
		for(i = 0,soma = 0;i <= 2;i = i + 1){
	  	printf("\n\tNota %d --> %2.2f",i+1,aluno[n].notas[i]);
		}
	   printf("\nMedia %2.2f",aluno[n].media);
	}
	
	return 0;
}