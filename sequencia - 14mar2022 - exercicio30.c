/*
30. Calcular e apresentar a quantidade de galões cheios de 5 
litros de combustível necessária em uma viagem utilizando-se um 
automóvel que faz 12Km/l. O usuário fornecerá o tempo gasto e a 
velocidade média na viagem.

entradas de dados:
	tempo gasto, velocidade média

saída de dados:
	quantidade de galões de 5 litros (cheios)
	
processamento:
	obter o tempo gasto (tempo)
	obter a velocidade média (vm)
	calcular a quantidade de galões:
		quantidade = vm * tempo / 12 / 5
	arredondar a quantidade para o primeiro inteiro acima
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float tempo, vm, quantidade;
	
	printf("Informe o tempo da viagem em horas: ");
	scanf("%f",&tempo);
	printf("Informe a velocidade media em km/h: ");
	scanf("%f",&vm);
	
	quantidade = vm * tempo / 12.0 / 5.0;
/*
	- divisao real
		quando pelo menos um dos operandos é real

	- quociente da divisão inteira
		quanto os dois operandos são inteiros
*/	
	quantidade = ceil(quantidade);	
/*
	ceil - arredonda para cima
	floor - arredonda para baixo
	round - arredonda com critério estatístico
*/	
	printf("\nA quantidade de galoes de 5 litros cheios e %0.0f",quantidade);
	
	return 0;
}
