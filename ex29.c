/*
Entrada de dados:
	Temperatura em Celcius 

Saida de dados: 
	Temperatura em Fahrenheit

Processamento de dados:
	obter a temperatura em celcius
	calcular usando a formula de conversão
	exibir temperatura em fahrenheit

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){

int c,f;

printf("Insira a temperatura em graus centigrados(Celsius):");
scanf("%i", &c);

f = (9 * c + 160)/5;

printf("\nA temperatura convertida em Fahrenheit e: %i",f);

return 0;

}
