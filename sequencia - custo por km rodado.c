/*
Calcular o custo por km rodado, para um ve?culo que percorre
uma determinada dist?ncia, consumindo uma certa quantidade
de combust?vel, que possui um pre?o por litro.

entradas de dados (s?o os dados que o problema fornece):
-----------------
	distancia, quantidade, preco
	
sa?das de dados (s?o as respostas que o problem pede):
---------------		
	custo por km rodado
	
processamento (como transformar entradas em sa?das):
-------------
	custo = preco * quantidade / distancia	

organiza??o do algoritmo
------------------------
	obter o valor da dist?ncia
	obter o valor da quantidade
	obter o valor do pre?o
	calcular o custo
		custo = preco * quantidade / distancia	
	mostrar o valor calculado (custo)
*/
#include <stdio.h>
int main() 
{
//declara??o de vari?veis
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
//sa?da de dados
	printf("\nO custo por km rodado e de %0.2f",custo);	
  return 0;
}
