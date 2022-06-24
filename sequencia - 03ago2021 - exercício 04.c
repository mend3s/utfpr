/*
4. Escreva um programa que calcule:
a) a área de um triângulo
b) a área de um círculo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular cada área, 
mostrando o resultado na tela

entradas de dados:
------------------
	triângulo
		base, altura
	círculo
		raio
	cubo
		aresta
	cilindro
		raio, altura

saídas de dados:
----------------
	área
		triângulo
		círculo
		cubo
		cilindro					

processamento:
--------------
	obter a altura do triângulo
	obter a base do triângulo
	calcular a área do triângulo
		área = base * altura / 2
	mostrar o valor calculado
		área (triângulo)
-----------------------------------		
	obter o raio do círculo
	calcular a área do círculo
		área = 3.14 * raio^2
	mostrar o valor calculado
		área (círculo)
-----------------------------------				
	obter a aresta do cubo
	calcular a área do cubo
		área = aresta^2 * 6
	mostrar o valor calculado
		área (cubo)		
-----------------------------------						
	obter a altura do cilindro
	obter o raio do cilindro
	calcular a área do cilindro
		área = 2 * 3.14 * raio^2 + 2 * 3.14 * raio * altura
	mostrar o valor calculado
		área (cilindro)
-----------------------------------				
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float area, raio, base, altura, aresta;
	
	printf("\n----------------------------------------------");
	printf("\n       Calcular a area de um triangulo");
	printf("\n----------------------------------------------");
	printf("\nDigite a base e a altura, separados por ENTER\n");
	scanf("%f%f",&base,&altura);
	area = base * altura / 2;
	printf("\nA area do triangulo e %f",area);
	
	printf("\n----------------------------------------------");
    printf("\n        Calcular a area de um circulo");
 	printf("\n----------------------------------------------");
	printf("\nDigite o raio do circulo\n");
	scanf("%f",&raio);
	area = M_PI * pow(raio,2.0);
	printf("\nA area do circulo e %f",area);
	
	printf("\n----------------------------------------------");
    printf("\n         Calcular a area de um cubo");
	printf("\n----------------------------------------------");
	printf("\nDigite a aresta do cubo\n");
	scanf("%f",&aresta);
	area = pow(aresta,2.0) * 6.0;
	printf("\nA area do cubo e %f",area);
	
	printf("\n----------------------------------------------");
	printf("\n        Calcular a area de um cilindro");
	printf("\n----------------------------------------------");
	printf("\nDigite a altura e o raio, separados por ENTER\n");
	scanf("%f%f",&altura,&raio);
	area = 2 * M_PI * pow(raio,2.0) + 2 * M_PI * raio * altura;
	printf("\nA area do cilindro e %f",area);	
	
	return 0;
}

