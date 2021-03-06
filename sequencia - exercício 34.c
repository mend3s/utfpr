/*
34. Calcular a quantidade de latas de tinta necess?rias, 
e tamb?m o custo, para pintar um tanque cil?ndrico de combust?vel, 
em que s?o fornecidos a altura e o raio do mesmo, 
al?m do pre?o da lata de tinta.
Sabe-se que:
a)cada lata cont?m 5 litros de tinta;
b)cada litro de tinta pinta 3 metros quadrados;
-----------------------------------
entradas de dados:
	altura e raio do cilindro, pre?o da lata de tinta
sa?das de dados:
	custo e quantidade de latas de tinta
processamento:
  (cada lata pinta 15 metros quadrados)	
	calcular a ?rea do cilindro:
		 area = 2 * PI * raio * altura + 2 * PI * raio * raio
	calcular a quantidade de latas
		 quantidade = area / 15
  calcular o custo
     custo = quantidade * pre?o da lata
----------------------------------		 	 
real altura, raio, area, preco, custo, quantidade

escreva("Informe a altura do cilindro: ")
leia(altura)
escreva("Informe o raio do cilindro: ")
leia(raio)
escreva("Informe o pre?o da lata de tinta: ")
leia(preco)

area = 2 * PI * raio * altura + 2 * PI * raio * raio
quantidade = area / 15
custo = quantidade * pre?o da lata

escreva("Ser?o necess?rias ",quantidade," latas de tinta")
escreva("O custo ser? de ",custo)
----------------------------------
*/
#include <stdio.h>
#include <math.h>//valor constante de PI --> M_PI
                 //fun??o de pot?ncia --> pow(x,y) --> x elevado a y
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float altura, raio, area, preco, custo, quantidade;

  printf("Informe a altura do cilindro: ");
  scanf("%f",&altura);
  printf("Informe o raio do cilindro: ");
  scanf("%f",&raio);
  printf("Informe o pre?o da lata de tinta: ");
  scanf("%f",&preco);

  area = 2 * M_PI * raio * altura + 2 * M_PI * pow(raio,2.0);
  quantidade = area / 15;
  custo = quantidade * preco;

  printf("\nSer?o necess?rias %0.0f latas de tinta",ceil(quantidade));
  printf("\nO custo ser? de R$%0.2f",custo);
	
	return 0;
}