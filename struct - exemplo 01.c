#include <stdio.h>
#include <string.h>
  struct tipo_endereco {
        char rua[50];
        int numero;
        char bairro[20];
        char cidade[30];
        char sigla_estado[3];
        long int CEP;
        }typedef E;

  struct ficha_pessoal{
        char nome[50];
        long int telefone;
        E endereco;
        }typedef cadastro;

int main (){
  cadastro ficha[3];
  int i;
  for(i = 0; i <= 2; i++){
    printf("\ninforme o nome: ");
    gets(ficha[i].nome);
    printf("\ninforme o telefone: ");
    scanf("%d", &ficha[i].telefone);
    printf("\ninforme o endereco: ");
    gets(ficha[i].endereco.rua);
    printf("\ninforme o numero: ");
    scanf("%d", &ficha[i].endereco.numero);
    printf("\ninforme o bairro: ");
    gets(ficha[i].endereco.bairro);
    printf("\ninforme a cidade: ");
    gets(ficha[i].endereco.cidade);
    printf("\ninforme o estado: ");
    gets(ficha[i].endereco.sigla_estado);
    printf("\ninforme o cep: ");
    scanf("%d", &ficha[i].endereco.CEP);
  }

  for(i = 0; i <= 2; i++){
    printf("\nnome: %s", ficha[i].nome );
    printf("\ntelefone: %d ", ficha[i].telefone);
    printf("\nendereco: %s ", ficha[i].endereco.rua);
    printf("\nnumero: %d ", ficha[i].endereco.numero);
    printf("\nbairro: %s ", ficha[i].endereco.bairro);
    printf("\ncidade: %s ", ficha[i].endereco.cidade);
    printf("\nestado: %s ", ficha[i].endereco.sigla_estado);
    printf("\ncep: %d ", ficha[i].endereco.CEP);
  }

	return 0;
}
