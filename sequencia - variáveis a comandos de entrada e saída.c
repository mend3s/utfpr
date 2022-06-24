/*
Lógica de Programação
---------------------

- transformar uma atividade mecânica/manual em automática (informatizar)
- conhecer cada um dos passos para a realização da atividade
- passos são as ações atômicas (a menor ação possível)
- os passos são executados sempre em uma sequencia lógica, um após o outro
- chamamos de algoritmo esta sequencia lógica de passos
- um algoritmo permite entender o problema e sua resolução, e evita redundância e problemas
  de interpretação
- um algoritmo possui entradas de dados, processamento, saídas de dados
==============================================================
Exemplo:
--------
- Calcular o custo por quilometro rodado para um veículo que percorre uma determinada
  distância, consumindo uma certa quantidade de combustível, sendo que este combustível
	custa um certo valor por litro.
	
entradas de dados:
------------------
	distância percorrida, quantidade de combustível, preço por litro

saídas de dados:
----------------
	custo por quilometro rodado

processamento:
--------------
	custo = preço * quantidade / distância

	para obter o custo por km rodado devemos multiplicar o preço por litro do combustível
	pela quantidade de combustível consumida e dividir o resultado pela distância percorrida
	
teste de mesa:
--------------
distancia quantidade preco custo
		60				10				6		  6   *     10     /    60 = 1,00
		                        preco * quantidade / distancia	
==============================================================	
	
variável
--------
	é um espaço de memória, referenciado por um nome, que armazena um valor de
	um determinado tipo de dado, a cada instante da solução de um problema/algoritmo
	
tipo de dados
-------------
	é o conjunto de valores que uma variável pode armazenar
		numéricos (real ou inteiro)
		literais/caracter (texto)
		lógicos (verdadeiro/falso)	
		
declarar variáveis
------------------
	sintaxe:
	--------
		<tipo de dado> <nome da variável>;
		
	exemplo:
	--------
		float custo, preco, distancia, quantidade;
		
		nomes de variáveis não podem:
			- começar com números
			- ter caracteres especiais (exceto _ )			
	
expressões
----------
	uma expressão é um conjunto qu epode conter:
		- variáveis
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
	aritméticos
	-----------
		+ adição
		- subtração
		* multiplicação
		/ divisão
		^	potência
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
		
	lógicos
	-------
		&& e
		|| ou
		! não	
			
	exemplo:
	--------		
			
	Um aluno está aprovado em uma disciplina SE a média for maior ou igual a 6 E
	SE o total de faltas for menor que 25% das aulas dadas
	
	media >= 6.0 E tf <= (ad * 0.25)
	
comando de atribuição
---------------------
	em linguagem C é o sinal de =
	em Portugues Estruturado (Portugol) é uma seta para a esquerda	<-
	em Pascal é dois pontos igual :=
	
	um comando de atribuição (=) é lido como 'recebe'
	
	Exemplo:
	--------
	custo = preco * quantidade / distancia
	
	custo RECEBE preco multiplicado por quantidade dividida por distancia
	
	significa que a expressão que está à direita do comando de atribuição é resolvido
	e seu resultado é armazenado na variável que está à esquerda 
	
comandos de entrada e saída
---------------------------

	comando de entrada
	------------------
		permite que um valor seja obtido através do meio de entrada padrão (teclado). 
		De um meio externo para o programa.
		
		leia(variável) - lê um valor do teclado e armazena em uma variável
	
		scanf() - entrada de dados formatada
		
	comando de saída
	----------------
		permite que um valor/resposta seja mostrada através do meio de saída padrão (tela/monitor).
		Do programa para um meio externo.
		
		escreva(variável) - mostra o valor de uma variável para o meio externo
		escreva(valor constante)
		escreva(expressão)
		escreva(variável e/ou valor constante e/ou expressão)
		
		printf() - saída de dados formatada	
*/
#include <stdio.h>  //biblioteca para entradas e saídas de dados

int main()
{
//declaração de variáveis
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
//saída de dados
	printf("\nO custo por KM rodado foi de $%0.2f",custo);
	return 0;
}

