/*
4. Escreva um programa que calcule:
a) a área de um triângulo
b) a área de um círculo
c) a área de um cubo
d) a área de um cilindro
Solicitar os dados necessários para calcular cada área,
mostrando o resultado na tela.

entradas de dados:
	triangulo
		base, altura
	circulo
		raio
	cubo
		aresta
	cilindro
		raio, altura			

saidas de dados:
	a) a área de um triângulo
	b) a área de um círculo
	c) a área de um cubo
	d) a área de um cilindro	

processamento:
	obter o valor da altura do triangulo
	obter o valor da base do triangulo
	calcular a area do triangulo
		areatriangulo = base * altura / 2
	mostrar o valor calculado
	
	obter o raio do circulo
	calcular a area do circulo
		areadocirculo = 3.14 * raio^2	
	mostrar o valor calculado
	
	obter o valor de uma aresta do cubo
	calcular a area do cubo
		areadocubo = aresta^2 * 6
	mostrar o valor calculado
	
	obter a altura do cilindro
	obter o raio do cilindro
	calcular a area do cilindro
		areadocilindro = 2 * 3.14 * raio^2 + altura * raio * 2
	mostar o valor calculado
*/
#include <biblioteca.h>
int main()
{
  triangulo();
  circulo();
  cubo();
  cilindro(); 
  return 0;
}