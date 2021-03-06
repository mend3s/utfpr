/*
L?gica de Programa??o
---------------------

- transformar uma atividade mec?nica/manual em autom?tica (informatizar)
- conhecer cada um dos passos para a realiza??o da atividade
- passos s?o as a??es at?micas (a menor a??o poss?vel)
- os passos s?o executados sempre em uma sequencia l?gica, um ap?s o outro
- chamamos de algoritmo esta sequencia l?gica de passos
- um algoritmo permite entender o problema e sua resolu??o, e evita redund?ncia e problemas
  de interpreta??o
- um algoritmo possui entradas de dados, processamento, sa?das de dados
==============================================================
Exemplo:
--------
- Calcular o custo por quilometro rodado para um ve?culo que percorre uma determinada
  dist?ncia, consumindo uma certa quantidade de combust?vel, sendo que este combust?vel
	custa um certo valor por litro.
	
entradas de dados:
------------------
	dist?ncia percorrida, quantidade de combust?vel, pre?o por litro

sa?das de dados:
----------------
	custo por quilometro rodado

processamento:
--------------
	custo = pre?o * quantidade / dist?ncia

	para obter o custo por km rodado devemos multiplicar o pre?o por litro do combust?vel
	pela quantidade de combust?vel consumida e dividir o resultado pela dist?ncia percorrida
	
teste de mesa:
--------------
distancia quantidade preco custo
		60				10				6		  6   *     10     /    60 = 1,00
		                        preco * quantidade / distancia	
==============================================================	
	
vari?vel
--------
	? um espa?o de mem?ria, referenciado por um nome, que armazena um valor de
	um determinado tipo de dado, a cada instante da solu??o de um problema/algoritmo
	
tipo de dados
-------------
	? o conjunto de valores que uma vari?vel pode armazenar
		num?ricos (real ou inteiro)
		literais/caracter (texto)
		l?gicos (verdadeiro/falso)	
		
declarar vari?veis
------------------
	sintaxe:
	--------
		<tipo de dado> <nome da vari?vel>;
		
	exemplo:
	--------
		float custo, preco, distancia, quantidade;
		
		nomes de vari?veis n?o podem:
			- come?ar com n?meros
			- ter caracteres especiais (exceto _ )			
	
express?es
----------
	uma express?o ? um conjunto qu epode conter:
		- vari?veis
		- constantes
		- operadores
		
	exemplo:
	--------
		custo = preco * quantidade / distancia
		e = m * c^2
		(-b - raiz(b^2 - 4*a*c))/(2*a)		
	  (-b + raiz(b^2 - 4*a*c))/(2*a)
	
operadores
----------
	aritm?ticos
	-----------
		+ adi??o
		- subtra??o
		* multiplica??o
		/ divis?o
		^	pot?ncia
		- negativo
		+ positivo
		
	relacionais
	-----------
		== igual
		!= diferente
		< menor que
		> maior que
		<= menor ou igual
		>= maior ou igual
		
	l?gicos
	-------
		&& e
		|| ou
		! n?o	
			
	exemplo:
	--------		
			
	Um aluno est? aprovado em uma disciplina SE a m?dia for maior ou igual a 6 E
	SE o total de faltas for menor que 25% das aulas dadas
	
	media >= 6.0 E tf <= (ad * 0.25)
	
comando de atribui??o
---------------------
	em linguagem C ? o sinal de =
	em Portugues Estruturado (Portugol) ? uma seta para a esquerda	<-
	em Pascal ? dois pontos igual :=
	
	um comando de atribui??o (=) ? lido como 'recebe'
	
	Exemplo:
	--------
	custo = preco * quantidade / distancia
	
	custo RECEBE preco multiplicado por quantidade dividida por distancia
	
	significa que a express?o que est? ? direita do comando de atribui??o ? resolvido
	e seu resultado ? armazenado na vari?vel que est? ? esquerda 
	
comandos de entrada e sa?da
---------------------------

	comando de entrada
	------------------
		permite que um valor seja obtido atrav?s do meio de entrada padr?o (teclado). 
		De um meio externo para o programa.
		
		leia(vari?vel) - l? um valor do teclado e armazena em uma vari?vel
	
		scanf() - entrada de dados formatada
		
	comando de sa?da
	----------------
		permite que um valor/resposta seja mostrada atrav?s do meio de sa?da padr?o (tela/monitor).
		Do programa para um meio externo.
		
		escreva(vari?vel) - mostra o valor de uma vari?vel para o meio externo
		escreva(valor constante)
		escreva(express?o)
		escreva(vari?vel e/ou valor constante e/ou express?o)
		
		printf() - sa?da de dados formatada	
*/
#include <stdio.h>  //biblioteca para entradas e sa?das de dados

int main()
{
//declara??o de vari?veis
	float custo, preco, distancia, quantidade;	
//entradas de dados
	printf("\nEste programa calcula o custo por KM rodado");
	printf("\nInforme a distancia percorrida: ");
	scanf("%f",&distancia);
	printf("\nInforme a quantidade de combustivel consumido: ");
	scanf("%f",&quantidade);
	printf("\nInforme preco por litro do combustivel: ");
	scanf("%f",&preco);
//processamento
	custo = preco * quantidade / distancia;
//sa?da de dados
	printf("\nO custo por KM rodado foi de $%0.2f",custo);
	return 0;
}

