/*
32. Ler um número inteiro representando a quantidade 
de alunos de uma turma e informe a quantidade de grupos 
de 4 alunos que podem ser formados, e quantos alunos 
ficam de fora, sem formar um grupo completo

entradas de dados:
	quantidade de alunos
	
saídas de dados:
	quantidade de grupos com 4 alunos
	quantidade de alunos fora de grupo
	
processamento:
	obter a quantidade de alunos na turma (qa)
	calcular a quantidade de grupos
		grupos = qa DIV 4 - quociente da divisão inteira
		sem = qa MOD 4		- resto da divisão inteira
  mostrar os valores calculados
  
*/
#include <stdio.h>
int main()
{
	int qa, grupos, sem;
	
	printf("Informe a quantidade de alunos na turma: ");
	scanf("%d",&qa);
/*
	- divisao real
		quando pelo menos um dos operandos é real

	- quociente da divisão inteira
		quanto os dois operandos são inteiros
*/	
	grupos = qa / 4; //a barra / é o operador DIV
									 // que é o quociente da divisão inteira
	sem = qa % 4; //o percentual % é o operador MOD
								// que é o resto da divisão inteira
								
	printf("\nSerao %d grupos com 4 alunos",grupos);
  printf("\nSerao %d alunos sem grupos",sem);							
	
	return 0;
}