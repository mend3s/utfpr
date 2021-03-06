/*
36. Calcular a diferen?a em dias, meses e anos entre duas 
datas fornecidas no formato DD MM AAAA 
(DD = dia; MM =m?s; AAAA = ano com quatro d?gitos)

entradas de dados:
	duas datas no formato DD MM AAAA
		data1 = dia1 mes1 ano1
		data2 = dia2 mes2 ano2
sa?das de dados:
	diferen?a em dias, meses e anos entre as duas datas lidas
		data3 = dia3 mes3 ano3
processamento
	obter as duas datas, lendo separadamente dia, mes e ano para cada uma
	converter cada data para unidade dia, subtraindo a segunda da primeira
		diferen?a = dia1 + mes1 * 30 + ano1 * 365 - dia2 + mes2 * 30 + ano2 * 365
	calcular a data resultante
		ano3 = diferen?a DIV 365
		mes3 = (diferen?a MOD 365) DIV 30
		dia3 = (diferen?a MOD 365) MOD 30			
    mostrar a data calculada

737778 - 719022
18756 dias
18756 DIV 365 = 51 anos
18756 MOD 365 = 141 dias DIV 30 = 4 meses
18756 MOD 365 = 141 dias MOD 30 = 21 dias
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int d1, m1, a1, d2, m2, a2, d3, m3, a3, dif;
/*	
	printf("Digite o dia da data mais recente: ");
	scanf("%d",&d1);
	printf("Digite o mes da data mais recente: ");
	scanf("%d",&m1);
	printf("Digite o ano da data mais recente: ");
	scanf("%d",&a1);
*/
	printf("\nDigite a data mais recente no formato DD/MM/AAAA - inclusive com as barras\n");
	scanf("%d/%d/%d",&d1,&m1,&a1);
	
	printf("\nDigite a data mais antiga no formato DD/MM/AAAA - inclusive com as barras\n");
	scanf("%d/%d/%d",&d2,&m2,&a2);
		
	dif = (d1 + m1 * 30 + a1 * 365) - (d2 + m2 * 30 + a2 * 365);
	
	a3 = dif / 365;        //anos
	m3 = (dif % 365) / 30; //meses
	d3 = (dif % 365) % 30; //dias
	
	printf("\nA diferen?a ? de %d dias, %d meses e %d anos",d3, m3, a3);
	
	return 0;
}

