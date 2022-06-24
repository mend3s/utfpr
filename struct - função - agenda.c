/*
3. Fazer um programa para armazenamento de endereços em uma lista de contatos.
Este programa é constituído de um registro de catálogo de endereços contendo as
seguintes informações
Nome do contato;
Logradouro ou rua;
Cidade;
Estado;
CEP;
a) Defina o registro (struct) acima e no programa principal defina um vetor de
registros. Esse vetor de registros devera armazenar uma lista de contatos;
b) Crie uma função para buscar um elemento do registro no vetor pelo CEP e
retornar para ver se o endereço existe ou não;
c) Crie uma função para listar todos os registros inseridos;
d) Crie uma função para ordenar a lista pelo nome;
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista_contatos{
		char nome[50];
		char rua[50];
		char cidade[20];
		char estado[20];
		int cep;
}typedef lc;

int acharcep(lc[],int);
void listarcontatos(lc[]);
void listarcontato(lc[],int);
void ordenarpornome(lc[]);

int main(){
	int i, op, cepb, r;
	lc agenda[5];
	
	for(i = 0;i < 5;i++){	
	  printf("---------------Agenda--------------\n");
	
	  printf("Digite o nome: ");
	  fflush(stdin);
	  gets(agenda[i].nome);
	
	  printf("Digite o Logradouro (rua): ");
	  fflush(stdin);
	  gets(agenda[i].rua);
	
	  printf("Digite a cidade: ");
	  fflush(stdin);
	  gets(agenda[i].cidade);
	
	  printf("Digite o estado: ");
	  fflush(stdin);
	  gets(agenda[i].estado);
	
	  printf("Digite o cep:");
	  scanf("%d", &agenda[i].cep);
	}

  do{		
	printf("\n-----MENU-----\n");
	printf("\n1 - Procurar um cep");
	printf("\n2 - Listar contatos");
	printf("\n3 - Ordenar por nome");
	printf("\n4 - Encerrar\n");
	scanf("\n%d", &op);
	
    switch(op) {
	   case 1:
	   	   printf("\nInforme o CEP para a busca: ");
	   	   scanf("%d",&cepb);
           r = acharcep(agenda,cepb);
           if (r == -1)
	       	  printf("CEP não encontrado");
	          else
	       	     listarcontato(agenda,r);
		   break;
	   case 2:
	       listarcontatos(agenda);
	       break;
	   case 3:
	       ordenarpornome(agenda);
	       break;
	   	}
  }while (op!=4);  	
  return 0; 
}
//b) Crie uma funcao para buscar um elemento do registro no vetor pelo CEP e
//retornar para ver se o endereco existe ou nao;
int acharcep(lc a[], int c){
	int i;
	for(i=0;i<5;i++){
	  if (a[i].cep == c)
	  	return i;
    }
    return -1;  
}
//c) Crie uma funcao para listar todos os registros inseridos;
void listarcontatos(lc a[]){
	int i; 
	for(i=0;i<5;i++){
		printf("\n----------Lista de Contatos----------\n");
		printf("\nNome: %s",a[i].nome);
		printf("\nRua : %s",a[i].rua);
		printf("\nCidade: %s",a[i].cidade);
		printf("\nEstado: %s",a[i].estado);
		printf("\nCEP: %d",a[i].cep);			
    }
}
//c')Lista apenas um contato
void listarcontato(lc a[], int n){
	printf("\n----------Contato----------\n");
	printf("\nNome: %s",a[n].nome);
	printf("\nRua : %s",a[n].rua);
	printf("\nCidade: %s",a[n].cidade);
	printf("\nEstado: %s",a[n].estado);
	printf("\nCEP: %d",a[n].cep);	
}
//d) Crie uma funcao para ordenar a lista pelo nome;
void ordenarpornome(lc a[]){
	int x, n; 
	char ordnome[50];
	char ordrua[50];
	char ordcidade[20];
	char ordestado[20];
	int ordcep;
	
	for (x=0;x<5;x++){
	  for(n=x;n<5;n++){
		  if (strcmp(a[x].nome,a[n].nome)>0){
			  strcpy(ordnome,a[x].nome);
			  strcpy(a[x].nome,a[n].nome);
			  strcpy(a[n].nome,ordnome);
			  
			  strcpy(ordrua,a[x].rua);
			  strcpy(a[x].rua,a[n].rua);
			  strcpy(a[n].rua,ordrua);
			  
			  strcpy(ordcidade,a[x].cidade);
			  strcpy(a[x].cidade,a[n].cidade);
			  strcpy(a[n].cidade,ordcidade);
			  
			  strcpy(ordestado,a[x].estado);
			  strcpy(a[x].estado,a[n].estado);
			  strcpy(a[n].estado,ordestado);
			  
			  ordcep = a[x].cep;
			  a[x].cep = a[n].cep;
			  a[n].cep = ordcep;
			  
		  }
	  }
  }
}