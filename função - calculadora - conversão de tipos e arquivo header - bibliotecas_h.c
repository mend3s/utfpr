/*
Escrever um programa para uma calculadora que realize as seguintes operações:

1 - adição
2 - subtração
3 - multiplicação
4 - divisão
5 - potência (x elevado a y)
6 - raiz (x raiz de y)

Cada uma das operações deve ser realizada através de uma função.

*/
#include "bibliotecas.h"
#include <stdlib.h>
int main(int argc, char *argv[]){ 			
  switch(*argv[2]){
		case '+':
		  printf("\nA adicao e %2.2f",adicao(atof(argv[1]),atof(argv[3])));
		  break;
  	case '-':	
	  	printf("\nA subtracao e %2.2f",subtracao(atof(argv[1]),atof(argv[3])));
		  break;
		case 'x':		  	
		  printf("\nA multiplicacao e %2.2f",multiplicacao(atof(argv[1]),atof(argv[3])));
		  break;
  	case '/':			
	  	printf("\nA divisao e %2.2f",divisao(atof(argv[1]),atof(argv[3])));
		  break;
		case 'p':		  	
		  printf("\nA potencia e %2.2f",potencia(atof(argv[1]),atof(argv[3])));
  	  break;
	  case 'r': 		
		 	printf("\nA raiz e %2.2f",raiz(atof(argv[1]),atof(argv[3])));
		  break;
	  }
  return 0;	
}