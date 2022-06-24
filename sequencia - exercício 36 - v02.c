/*
36. Calcular a diferença em dias, meses e anos 
entre duas datas fornecidas no formato DD MM AAAA
(DD = dia; MM =mês; AAAA = ano com quatro dígitos)
--------------------------------------------------
entradas de dados:
	primeira data (mais nova - data maior)
		dia1, mes1, ano1
	segunda data (mais antiga - data menor)
	  dia2, mes2, ano2
saídas de dados:
	diferença em dias, meses e anos
		dia3, mes3, ano3
processamento
	converter cada uma das datas informadas em dias,
	subtraindo a menor da maior
		dia2 + mes2 * 30 + ano2 * 365 - 
		dia1 + mes1 * 30 + ano1 * 365
	esta subtração resulta em uma diferença em dias
	esta diferença em dias deve ser convertida para
	anos, meses e dias
		ano3 = diferença DIV 365
		mes3 = diferença MOD 365 DIV 30	
		dia3 = diferença MOD 365 MOD 30		
--------------------------------------------------
inteiro d1, m1, a1, d2, m2, a2, d3, m3, a3, dif

escreva("Calcula a diferença em dias, meses e anos")
escreva("entre duas datas no formato DD/MM/AAAA")
escreva("informe primeiro a data mais recente")
escreva("no formato DD/MM/AAAA")
leia(d1/m1/a1)
escreva("agora informe a data mais antiga")
escreva("no formato DD/MM/AAAA")
leia(d2/m2/a2)

dif = (d2 + m2 * 30 + a2 * 365) - (d1 + m1 * 30 + a1 * 365)

a3 = dif DIV 365
m3 = dif MOD 365 DIV 30	
d3 = dif MOD 365 MOD 30	

escreva("A diferença é de ",d3," dias ",m3," meses ",a3," anos ")
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int d1, m1, a1, d2, m2, a2, d3, m3, a3, dif;

  printf("\nCalcula a diferença em dias, meses e anos");
  printf("\nentre duas datas no formato DD/MM/AAAA");
  printf("\ninforme primeiro a data mais recente");
  printf("\nno formato DD/MM/AAAA (inclusive com as barras) ");
  scanf("%d/%d/%d",&d1,&m1,&a1);
  printf("\nAgora informe a data mais antiga");
  printf("\nno formato DD/MM/AAAA (inclusive com as barras) ");
  scanf("%d/%d/%d",&d2,&m2,&a2);

  dif = (d1 + m1 * 30 + a1 * 365) - (d2 + m2 * 30 + a2 * 365);

  a3 = dif / 365;
  m3 = dif % 365 / 30;	
  d3 = dif % 365 % 30;

  printf("\nA diferença é de %d dias %d meses %d anos\n",d3,m3,a3);	
	
	return 0;
}