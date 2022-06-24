/*
6. Obter dois números quaisquer, e informar:
a) a soma destes números;
b) a subtração destes números;
c) a multiplicação destes números;

entradas de dados:
	dois numeros inteiros
	
saídas de dados:
	a) a soma destes números;
	b) a subtração destes números;
	c) a multiplicação destes números; 	

processamento:
	obter o primeiro numero (a)
	obter o segundo numero (b)
	calcular a soma dos dois numeros
		soma = a + b
	calcular a subtração dos dois numeros
		sub = a - b
	calcular a multiplicação dos dois numeros
		mult = a * b
	mostrar os resultados obtidos
*/
#include <stdio.h>
int main()
{
	int a, b, soma, sub, mult;
	
	printf("Informe o primeiro numero inteiro: ");
	scanf("%d",&a);
	printf("Informe o segundo numero inteiro: ");
	scanf("%d",&b);
	
	soma = a + b;
	sub = a - b;
	mult = a * b;
	
	printf("\nA soma dos dois numeros e %d",soma);
	printf("\nA subtracao dos dois numeros e %d",sub);
	printf("\nA multiplicacao dos dois numeros e %d",mult);
	
	return 0;
}


