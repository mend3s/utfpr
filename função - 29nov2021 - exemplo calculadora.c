/*
Escrever um programa em linguagem C que:
1 - receba dois números inteiros do usuário
2 - pergunte ao usuário qual das quatro operações
		ele deseja realizar:
		1 para divisão
		2 para multiplicação
		3 para adição
		4 para subtração
3 - escreva uma função para cada uma das operações
		que serão realizadas:
		int divisao(int, int);
		int mult(int, int);
		int adicao(int, int);
		int sub(int, int);
4 - o programa deve receber os dois números, perguntar
		ao usuário qual operação será realizada,
		chamar a função correspondente e mostrar o resultado
		na tela
*/
#include <stdio.h>
#include <stdlib.h>

//protótipos das funções
float divisao(float, float);
float mult(float, float);
float adicao(float, float);
float sub(float, float);

int main()
{
	float a, b;
	int op;

	while(1)
		{
			system("cls");
			printf("\nCalculadora para quatro operacoes\n");
			printf("\nSelecione uma das opcoes a seguir:");
			printf("\n1 para divisao");
			printf("\n2 para multiplicacao");
			printf("\n3 para adicao");
			printf("\n4 para subtracao");
			printf("\n5 para encerrar\n");
			scanf("%d",&op);
			if(op == 5)
				exit(0);
			printf("\nDigite o primeiro numero: ");
			scanf("%f",&a);
			printf("\nDigite o segundo numero: ");
			scanf("%f",&b);
			switch(op)
				{
					case 1:
						printf("\nA divisao e %0.2f",divisao(a,b));
						break;
					case 2:
						printf("\nA multiplicao e %0.2f",mult(a,b));
						break;
					case 3:
						printf("\nA adicao e %0.2f",adicao(a,b));
						break;
					case 4:
						printf("\nA subtracao e %0.2f",sub(a,b));
						break;
					default:
						printf("\nOpcao incorreta\n");
				}
			printf("\n");
			system("pause");			
		}
	return 0;
}

float divisao(float n1, float n2)
{
	float resposta;
	if(n2 == 0)
		{
			printf("\nErro de divisao por 0(zero)\n");
			return 0;
		}
	resposta = n1 / n2;
	return resposta;
}

float mult(float n1, float n2)
{
	float resposta;
	resposta = n1 * n2;
	return resposta;
}

float adicao(float n1, float n2)
{
	float resposta;
	resposta = n1 + n2;
	return resposta;
}

float sub(float n1, float n2)
{
	float resposta;
	resposta = n1 - n2;
	return resposta;
}
