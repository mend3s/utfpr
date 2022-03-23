/*
Entrada de dados:
	Ponto A (X1 & Y1)
	Ponto B (X2 & Y2)

Saida de dados:
		Distancia entre ponto A e B

Processamento de dados:

	Obter X1/Y1
	Obter X2/Y2
	Calcular a distancia entre os pontos
	Exibir resultado

*/

#include <stdio.h>
#include <math.h>

int main (){

float x1,x2, y1,y2, dis;

    printf("Para calcularmos a distacia dos pontos no plano cartesiano insira abaixo o X1 & Y1 do ponto A, separados por barra: ");
    scanf("%f/%f", &x1,&y1);

    printf("\nAgora insira o X2 & Y2 referentes ao ponto B: ");
    scanf("%f/%f", &x2,&y2);
   
    dis= pow(pow(x2-x1,2.0)+pow(y2-y1,2.0),1.0/2.0); 

    printf ("\nA distancia entre Ponto A e B no plano cartesiano e: %0.2f", dis);

return 0;

}



