/*
34. Calcular a quantidade de latas de tinta necessárias, 
e também o custo, para pintar um tanque cilíndrico de combustível, 
em que são fornecidos a altura e o raio do mesmo, 
além do preço da lata de tinta.
Sabe-se que:
a)cada lata contém 5 litros de tinta;
b)cada litro de tinta pinta 3 metros quadrados;
-----------------------------------
entradas de dados:
	altura e raio do cilindro, preço da lata de tinta
saídas de dados:
	custo e quantidade de latas de tinta
processamento:
  (cada lata pinta 15 metros quadrados)	
	calcular a área do cilindro:
		 area = 2 * PI * raio * altura + 2 * PI * raio * raio
	calcular a quantidade de latas
		 quantidade = area / 15
  calcular o custo
     custo = quantidade * preço da lata
----------------------------------		 	 
real altura, raio, area, preco, custo, quantidade

escreva("Informe a altura do cilindro: ")
leia(altura)
escreva("Informe o raio do cilindro: ")
leia(raio)
escreva("Informe o preço da lata de tinta: ")
leia(preco)

area = 2 * PI * raio * altura + 2 * PI * raio * raio
quantidade = area / 15
custo = quantidade * preço da lata

escreva("Serão necessárias ",quantidade," latas de tinta")
escreva("O custo será de ",custo)
----------------------------------
*/
#include <stdio.h>
#include <math.h>//valor constante de PI --> M_PI
                 //função de potência --> pow(x,y) --> x elevado a y
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float altura, raio, area, preco, custo, quantidade;

  printf("Informe a altura do cilindro: ");
  scanf("%f",&altura);
  printf("Informe o raio do cilindro: ");
  scanf("%f",&raio);
  printf("Informe o preço da lata de tinta: ");
  scanf("%f",&preco);

  area = 2 * M_PI * raio * altura + 2 * M_PI * pow(raio,2.0);
  quantidade = area / 15;
  custo = quantidade * preco;

  printf("\nSerão necessárias %0.0f latas de tinta",ceil(quantidade));
  printf("\nO custo será de R$%0.2f",custo);
	
	return 0;
}