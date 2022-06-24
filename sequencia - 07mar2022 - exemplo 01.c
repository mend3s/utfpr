/*
Um carro percorre uma determinada distância, consumindo uma certa 
quantidade de combustível, que custa um determinado valor por litro.
Quanto custa cada quilômetro rodado por este carro?

Entradas de dados:
Quantidade de combustível, valor por litro do combustível, distância percorrida

Saídas de dados:
Custo por km rodado

Processamento: obter significa que o usuário do “programa” irá informar 
algum dado através do meio de entrada padrão (teclado)

Obter a quantidade de combustível consumida (q)
Obter o valor por litro do combustível (v)
Obter a distância percorrida (d)
Calcular o custo por km rodado (c):
	c = q * v / d
Realizar a saída de dados:
Mostrar o custo calculado
*/
#include <stdio.h>
int main()
{
//quantidade de combustível consumida (q)
//valor por litro do combustível (v)
//distância percorrida (d)	
//custo por km rodado (c)	
	float q, v, c, d;
		
	printf("Informe a quantidade de combustivel consumido: ");	
	scanf("%f",&q);	
	printf("Informe o valor por litro do combustivel: ");
	scanf("%f",&v);
	printf("Informe a distancia percorrida: ");		
	scanf("%f",&d);

	c = q * v / d;
	
	printf("O custo por km rodado e de R$%0.2f",c);	
		
	return 0;
}