/*
Questão 05: Os números binários são utilizados pelos computadores para processar dados. É um sistema de
numeração que, em vez de utilizar 10 algarismos, utiliza apenas 2 (0 e 1).
Veja como converter valores decimais em binários:

Um modo simples de fazer essa conversão é dividir o número decimal que você quer converter em binário
por dois. Faça a divisão "na mão", e anote o resto (será 0 ou 1). Pegue o quociente dessa divisão e divida-o,
também, por dois. Anote outra vez o resto. Faça assim até que o quociente de sua divisão seja 1 (isto é, a
divisão de 2 por 2).

O seu número em binário é o quociente da última divisão mais todos os restos das divisões, do quociente
menor para o maior.

Por exemplo, o número 39:

39 ÷ 2 = 19 (resto 1)
19 ÷ 2 = 9 (resto 1)
9 ÷ 2 = 4 (resto 1)
4 ÷ 2 = 2 (resto 0)
2 ÷ 2 = 1 (resto 0)
2 ÷ 1 = 0 (resto 1)

Logo o número decimal 39, convertido para binário é 100111

Construa um programa em linguagem C que receba um número inteiro (decimal) e mostre o seu
correspondente em binário.


*/
#include <stdio.h>

int main()
{
	int binario[50], i, num, aux;

	printf("\nDigite um numero inteiro base 10: ");
	scanf("%d",&num);

	aux = num;
	i = 0;
	while(aux >= 1)
		{
			binario[i] = aux % 2;
			aux = aux / 2;
			i = i + 1;
		}

	printf("\nO numero %d em binario e : ",num);
	i = i - 1;
	while(i >= 0)
		{
			printf("%d",binario[i]);
			i = i - 1;
		}
	return 0;
}
