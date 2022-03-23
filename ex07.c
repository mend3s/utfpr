/*
07) Obter um valor qualquer e perguntar ao usuario se este valor e em dolares ou em reais. Caso sejam 
dolares, convertê-los para reais. Se forem reais, converte-los para dolares


Entrada de dados:
    -Valor 
    - Moeda

Saida de dados:
    - Valor acompanhado da moeda

Processamento de Dados:
    - Obter o Valor
    - Obter a moeda
    - Fazer a verificacao
    - Exibir moeda mais valor

*/

#include <stdio.h>
#include <math.h>

int main (){

    float dol, real, moeda, val;
    
    printf("Insira abaixo o valor a ser convertido: ");
    scanf("%f", &val);

    printf("\nFavor escolher uma opcao de moeda para converter: ");
    printf("\n1- Dolares para Real");
    printf("\n2- Real para Dolares\n");
    scanf("%f", &moeda);

    if (moeda == 1  ) {
        real = val * 5;
    printf("\nO valor em dolares convertido para reais e: %0.2f", real);
}
    else 
        dol = val / 5;
        printf ("\nO valor em reais para dolares e: %0.2f", dol);
    

    
	return 0; 

}
