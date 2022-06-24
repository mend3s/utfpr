/*
Calcular o custo por km rodado, para um veículo que percorre
uma determinada distância, consumindo uma certa quantidade
de combustível, que possui um preço por litro.

entradas de dados (são os dados que o problema fornece):
-----------------
	distancia, quantidade, preco
	
saídas de dados (são as respostas que o problem pede):
---------------		
	custo por km rodado
	
processamento (como transformar entradas em saídas):
-------------
	custo = preco * quantidade / distancia	

organização do algoritmo
------------------------
	obter o valor da distância
	obter o valor da quantidade
	obter o valor do preço
	calcular o custo
		custo = preco * quantidade / distancia	
	mostrar o valor calculado (custo)
*/
#include <stdio.h>
int main() 
{
//declaração de variáveis
	float custo, preco, distancia, quantidade;	
//entradas de dados
	printf("\nCalcula o custo por km rodado por um veiculo");
	printf("\nDigite a distancia percorrida: ");
	scanf("%f",&distancia);
	printf("\nDigite a quantidade de combustivel consumido: ");
	scanf("%f",&quantidade);
	printf("\nDigite o preco por litro do combustivel: ");
	scanf("%f",&preco);
//processamento	
	custo = preco * quantidade / distancia;
//saída de dados
	printf("\nO custo por km rodado e de %0.2f",custo);	
  return 0;
}
