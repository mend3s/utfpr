/* Calcula a soma de n inteiros   */
/* o ultimo argumento deve ser 0 */
#include <stdio.h>
#include <stdarg.h>

int soma(int,...);

int main() {

	printf("\nsoma(1,2,3,4,5,6,7,8,9,0) --> %d\n",soma(1,2,3,4,5,6,7,8,9,0));	
	printf("\nsoma(1,2,3,4,5,0) --> %d\n",soma(1,2,3,4,5,0));	
	printf("\nsoma(1,2,0) --> %d\n",soma(1,2,0));	
	
  return 0;
}

int soma(int n1, ...) {
  va_list pa; //pa é uma lista que contém todos os parâmetros que a função irá receber
  int som, n; 
  
  som = n1; //n1 é o primeiro argumento da lista de parâmetros que a função recebeu
            //portanto n1 é p último argumento conhecido, uma vez que é o único que 
            //foi recebibo em uma 'variável'
            
	va_start(pa, n1); //inicializa a lista pa com os argumentos recebidos, indicando
	                  //que o primeiro valor da mesma é determinado pelo valor de n1
	                  
  while( (n = va_arg(pa, int)) != 0) //n recebe o primeiro valor após o 
	   som = som + n;                  //último valor conhecido (inicialmente n1), e depois
	                                   //aponta para o próximo valor
  	                                 //os números lidos devem ser todos do tipo 
																		 //definido na chamada da função, neste caso inteiro
    
	va_end(pa); //finaliza a lista que foi criada com va_start
  
  return som;
} 

