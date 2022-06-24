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
	int a, b;
	
//	printf("Informe dois numeros inteiros separados por ENTER: ");
//	scanf("%d%d",&a,&b);
	printf("Informe dois numeros inteiros separados por / : ");
	scanf("%d/%d",&a,&b);

//OUTRO EXEMPLO:
//--------------
//	printf("Informe a data no formato DD/MM/AAAA ");
//	scanf("%d/%d/%d",&dia,&mes,&ano);

	printf("\nA soma dos dois numeros e %d",a + b);
	printf("\nA subtracao dos dois numeros e %d",a - b);
	printf("\nA multiplicacao dos dois numeros e %d",a * b);
	
	return 0;
}
