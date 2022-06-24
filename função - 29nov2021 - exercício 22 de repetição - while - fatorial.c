/*
22) Escreva um programa que calcule e escreva a
		soma dos 50 primeiros termos da série:

        1!     2!     3!     4!     5!
soma = ---- - ---- + ---- - ---- + ---- - ...
        1!     3!     7!     15!    31!

*/
#include <stdio.h>

//protótipo da função - sempre antes da função main()
float fatorial(float);

int main()
{
	float x, y, soma;
	int sinal;
	soma = 0;
	x = 1;
	y = 1;
	sinal = 1;
	while(x <= 10)
		{
			if(sinal == 1)
				{
					soma = soma + fatorial(x) / fatorial(y);
					sinal = 2;
				}
			else
				{
					soma = soma - fatorial(x) / fatorial(y);
					sinal = 1;
				}
			x = x + 1;
			y = y * 2 + 1;
		}
	printf("\nA soma e %f",soma);
	return 0;
}

//corpo da função - sempre depois da função main()
float fatorial(float n)
{
	float f, aux;
	f = n;
	aux = n - 1;
	while(aux >= 1)
		{
			f = f * aux;
			aux = aux - 1;
		}
	return f;
}
/*
FUNÇÃO ou subprograma
---------------------

Permite que o código seja dividido em partes que podem ser
executadas de forma independente.

Possui as vantagens de melhorar a legibilidade do código,
diminuir a quantidade de erros ao permitir o reaproveitamento
de código já escrito, além da divisão da realização de tarefas
para programadores distintos.

Sintaxe:
--------

<tipo da função> <nome da função> (<lista de parâmetros>)
{
	<comando 1 >
	<comando 2 >
	...
	<comando n >
	<retorno da função>
}

<tipo da função> - determina qual o tipo de dados
									 do valor de resposta da função, ou seja
									 o valor que a função "calcula" será de um
									 determinado tipo de dados.
									 Se a função não possui retorno, o tipo
									 da mesma é void
									 
<nome da função> - especifica o nome pelo qual a função
									 será chamada
									 
(<lista de parâmetros>) - são as variáveis/valores que a função
													recebe no momento da sua chamada.
													É importante que, no momento da chamda
													da função, os parâmetros estejam
													na ordem correta. 
													Os parâmetros não são obrigatórios.
													Os parâmetros podem ser passados por:
													- valor ------> envia uma cópia do valor na
																					chamada, para o parâmetro
																					na função
													- referência -> envia o endereço de memória
																					na chamda, para o parâmetro
																					na função

{    } - é o corpo da função. Abriga os comandos da mesma.

<comando 1> ...	- são os comandos da função

<retorno da função> - encerra/finaliza a função, devolvendo
											uma resposta ao ponto de chamada da
											função. Esta resposta deve ser sempre
											do mesmo tipo da função
											Devolve apenas um único valor para o ponto
											de chamada da função
*/

