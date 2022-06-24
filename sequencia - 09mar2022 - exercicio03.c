/*
3. Calcular a média ponderada obtida 
	 por um aluno para 2 notas bimestrais.

entradas de dados
	nota1, nota2, peso1, peso2 
	
saídas de dados
	média final
	
processamento
	obter a primeira nota
	obter o peso da primeira nota
	obter a segunda nota
	obter o peso da segunda nota
	calcular a media final
		media = ((n1 * p1) + (n2 * p2)) / (p1 + p2)
	mostrar o valor calculado
*/
#include <stdio.h>
int main()
{
	float n1, n2, media; //float - real - %f
	int p1, p2;   //int - inteiro - %i ou %d
	
	printf("Este programa calcula a media ponderada para duas notas\n");
	printf("-------------------------------------------------------\n");
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite o peso da primeira nota: ");
	scanf("%d",&p1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	printf("Digite o peso da segunda nota: ");
	scanf("%d",&p2);
	media = ((n1 * p1) + (n2 * p2)) / (p1 + p2);
	printf("A media e %0.2f",media);
	
	return 0;
}






