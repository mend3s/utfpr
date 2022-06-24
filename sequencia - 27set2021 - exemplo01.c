/*
Determinar a distância percorrida por um veículo
durante um determinado tempo com uma velocidade média
específica.

Entradas de dados:
	tempo, velocidade média
	
Saídas de dados:
	distância percorrida
	
Processamento:
	- obter o tempo gasto
	- obter a velocidade média
	- calcular a distância percorrida
		distância = velocidade média / tempo gasto
	- mostrar o resultado obtido
		escrever a distância percorrida			
*/
#include <stdio.h>
int main()
{
	float tempo, velocidade, distancia;	
	
	printf("\nPrograma para calcular distancia percorrida");
	printf("\nDigite o tempo gasto em horas: ");
	scanf("%f",&tempo);
	printf("\nDigite a velocidade media da viagem: ");
	scanf("%f",&velocidade);
	
  distancia = velocidade / tempo;

	printf("\nA distancia percorrida foi de %0.2f Km/H",distancia);
	
	return 0;
}





