#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	//char --> armazena 1 caracter
	//char pode ser inicializado na declaração com ' '
	//char pode ser comparado diretamente em expressão com ==, !=, ...
	//char pode receber valor com comando de atribuição no programa
	char n = 'a';
	
	if (n == 'a')
		printf("\nOK\n");
	
	n = 'b';
	
	//string --> composição de vários char
	//           armazena mais de um caracter
	//           o último caracter sempre é '\0'
	//string pode ser inicializada na declaração com " " ou
	//       com {' ',' ',...}
	//string não pode ser comparada diretamente com ==, !=, ...
	//       necessita que sejam utilizadas funções de <string.h>
	//string não pode receber valor com comando de atribuição
	//       necessita que sejam utilizadas funções de <string.h>
	//ENTRE ASPAS " " --> string
	//ENTRE APÓSTROFO	' ' --> char
	//string é um vetor de char
	
  char nome[50] = "João";
  char nome1[50] = {'A','n','t','o','n','i','o','\0'};
  
  if(nome == "João")   //ERRO
  	printf("\nOK\n");
	
	if(strcmp(nome,"João") == 0) //CORRETO
		printf("\nOK\n");
			
//a função strcmp(char,char) compara o conteúdo do primeiro char com o
//segundo char. Se forem iguais o resultado é 0 (zero)	
	
//	nome = "Carlos"; //ERRO
	
	strcpy(nome,"Carlos"); //CORRETO
	
//a função strcpy(char,char) copia o conteúdo do segundo char para 
//a variável que está no primeiro char	

//------------------------------------------------	
	char sexo; 
	
	printf("\nDigite F para feminino ou M para masculino: ");
	fflush(stdin);
	scanf("%c",&sexo);
	
	if ((sexo = 'F') || (sexo = 'f')) ...
		
//ou

  switch(sexo){
		case 'F': case 'f':
			 .....
			 break;
		
	}		
		
//------------------------------------------------			
	char sexo[20];
	
	printf("\nDigite Feminino ou Masculino: ");
	fflush(stdin);
	gets(sexo);
	
	if (strcmp(strupr(sexo),"FEMININO") == 0) ...
	
//não é possível com switch		
		
//------------------------------------------------	
  int sexo;
	
	printf("\nDigite 1 para FEMININO ou 2 para MASCULINO: ");
	scanf("%d",&sexo);
	
	if(sexo == 1) ...	
	
//ou

  switch(sexo){
		case 1:
			 ....
			 break;
		 
	}	
	
//------------------------------------------------		
	
	return 0;
}