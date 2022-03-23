/*

Calcular a velocidade média para um veículo que percorre uma distância X em um tempo Y

Entrada de Dados:

 - Distancia percorrida 
 - Tempo de viagem 

Saida de Dados:

  - Velocidade media percorrida entre ponto a e ponto b


  Processamento de dados:

        Obter distancia percorrida 
        Obter o tempo do trajeto percorrido
        Calcular a velocidade media
        Exbir a velocidade media

*/

#include <stdio.h>
#include <math.h>

int main () {

 float dis, temp, vm;


  printf (/n"Favor informar a distancia percorrida: ");
  scanf("%f", &dis);
  printf(/n"Favor informar o tempo gasto de viagem: ")  
  scanf("%f", &temp);

  vm = dis / temp

  printf("A sua velocidade media foi: %0.2f ", vm );


  return 0; 
}