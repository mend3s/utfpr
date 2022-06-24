/*
31. Tendo como dados de entrada dois pontos quaisquer 
de um plano cartesiano P(X1,Y1)e Q(X2,Y2)
calcule e mostre a distância entre eles. 
A distância é dada pela fórmula:
raiz((X2 - X1)^2 + (Y2 - Y1)^2)

entradas de dados:
	ponto P
		x1, y1
	ponto Q
		x2, y2

saídas de dados:
	distância entre os pontos P e Q
	
processamento:
	obter x1
	obter y1
	obter x2
	obter y2
	calcular a distância
	d = raiz((X2 - X1)^2 + (Y2 - Y1)^2)
	mostrar o valor calculado
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float d, x1, y1, x2, y2;
	
	printf("\nCalcular a distancia entre dois pontos num plano cartesiano");

	printf("\nDigite os valores de x e de y para o primeiro ponto, separados por / : ");
	scanf("%f/%f",&x1,&y1);

	printf("\nDigite os valores de x e de y para o segundo ponto, separados por / : ");
	scanf("%f/%f",&x2,&y2);
/*
	printf("\nDigite o valor de x para o primeiro ponto: ");
	scanf("%f",&x1);
	printf("\nDigite o valor de y para o primeiro ponto: ");
	scanf("%f",&y1);
	printf("\nDigite o valor de x para o segundo ponto: ");
	scanf("%f",&x2);
	printf("\nDigite o valor de y para o segundo ponto: ");
	scanf("%f",&y2);	
*/	
	d = pow(pow(x2-x1,2.0)+pow(y2-y1,2.0),1.0/2.0);
	
	printf("\nA distancia entre os dois pontos e %f",d);
	
	return 0;
}
