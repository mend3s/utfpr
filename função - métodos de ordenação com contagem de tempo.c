#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <windows.h>
#include <stdint.h>
uint32_t stampstart();
uint32_t stampstop(uint32_t start);
struct tmp
{
    uint32_t ini, fim;
};
typedef struct tmp TMP;
//******************************
//INSERÇÃO
//******************************
void insertionSort(int v[], int n){
  int i, j, x;
  for(i = 1; i < n; i++){
    x = v[i];
    j = i - 1;
    while(j >= 0 && v[j] > x){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = x;
  }
}
//******************************
//SELEÇÃO
//******************************
void selectionSort(int v[], int n){
  int i, j, aux, min;
  for(i = 0; i < n-1; i++){
    min = i;
    for(j = i+1; j < n; j++){
      if(v[j] < v[min]){
        min = j;
      }
    }
    aux = v[i];
    v[i] = v[min];
    v[min] = aux;
   }
}
//******************************
//BOLHA
//******************************
void bubbleSort(int v[], int n){
  int i, j, aux;
  for(i = n-1; i > 0; i--){
    for(j = 0; j < i; j++){
      if(v[j] > v[j+1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
  }
}
//******************************
//QUICK
//******************************
void quickSort(int *vetor, int inicio, int fim){
   int i, j, meio, aux;
   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];
   do{
      while(vetor[i] < meio)
         i++;
      while(vetor[j] > meio)
         j--;
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(i <= j);
   if(inicio < j)
      quickSort(vetor, inicio, j);
   if(i < fim)
      quickSort(vetor, i, fim);
}
//******************************
//SHELL
//******************************
void shellSort(int *vetor, int tamanho){
   int i = (tamanho - 1) / 2;
   int chave, k, aux;
   while(i != 0){
      do{
         chave = 1;
         for(k = 0; k < tamanho - i; ++k){
            if(vetor[k] > vetor[k + i]){
               aux = vetor[k];
               vetor[k] = vetor[k + i];
               vetor[k + i] = aux;
               chave = 0;
            }
         }
      }while(chave == 0);
      i = i / 2;
   }
}
//******************************
//PREENCHE VETOR
//******************************
void preencheVetor(int *vetor, int tamanho){
  srand(time(NULL));
  int x, i, j, n;
  for(i = 0; i < tamanho; i++)
    vetor[i] = 0;
  i = 0;
  while (i < tamanho){
    x = rand()/100;
    n = 0;
    for(j = 0; j < i; j++)
      if (vetor[j] == x)
        n = 1;
    if (n == 0) {
      vetor[i] = x;
      i++;
    }
  }
}
//******************************
//PREENCHE VETOR SEM srand
//******************************
void preencheVetor_(int *vetor, int tamanho){
  int i;
  for(i = 0; i < tamanho; i++)
    vetor[i] = rand()/100;
}
/*
void preencheVetor_(int *vetor, int tamanho){
  int x, i, j, n;
  for(i = 0; i < tamanho; i++)
    vetor[i] = 0;
  i = 0;
  while (i < tamanho){
    x = rand()/100;
    n = 0;
    for(j = 0; j < i; j++)
      if (vetor[j] == x)
        n = 1;
    if (n == 0) {
      vetor[i] = x;
      i++;
    }
  }
}
*/
//******************************
//IMPRIME VETOR
//******************************
void imprimeVetor(int *vetor, int tamanho){
  int i;
  for(i = 0; i < tamanho; i++)
    printf("%6d", vetor[i]);
}
//******************************
//HORA DO SISTEMA INICIAL
//******************************
uint32_t
stampstart(){
	struct timeval  tv;
	struct timezone tz;
	struct tm      *tm;
	uint32_t        start;
	gettimeofday(&tv, &tz);
	tm = localtime(&tv.tv_sec);
	printf("\nTIMESTAMP-START\t  %d:%02d:%02d:%d (~%d ms)\n", tm->tm_hour,
	       tm->tm_min, tm->tm_sec, tv.tv_usec,
	       tm->tm_hour * 3600 * 1000 + tm->tm_min * 60 * 1000 +
	       tm->tm_sec * 1000 + tv.tv_usec / 1000);
	start = tm->tm_hour * 3600 * 1000 + tm->tm_min * 60 * 1000 +
		tm->tm_sec * 1000 + tv.tv_usec / 1000;
	return (start);
}
//******************************
//HORA DO SISTEMA FINAL
//******************************
uint32_t
stampstop(uint32_t start){
	struct timeval  tv;
	struct timezone tz;
	struct tm      *tm;
	uint32_t         stop;
	gettimeofday(&tv, &tz);
	tm = localtime(&tv.tv_sec);
	stop = tm->tm_hour * 3600 * 1000 + tm->tm_min * 60 * 1000 +
		tm->tm_sec * 1000 + tv.tv_usec / 1000;
	printf("\nTIMESTAMP-END\t  %d:%02d:%02d:%d (~%d ms) \n", tm->tm_hour,
	       tm->tm_min, tm->tm_sec, tv.tv_usec,
	       tm->tm_hour * 3600 * 1000 + tm->tm_min * 60 * 1000 +
	       tm->tm_sec * 1000 + tv.tv_usec / 1000);
	printf("ELAPSED\t  %d ms\n", stop - start);
	return (stop);
}
//******************************
// CHAMA TODOS OS MÉTODOS EM SEQUENCIA
//******************************
void todosOsMetodos(TMP compara[], int *vetor, int tamanho){

    preencheVetor_(vetor, tamanho);
    printf("\nBubble Sort\n");
    compara[0].ini = stampstart();
    bubbleSort(vetor, tamanho);
    compara[0].fim  = stampstop(compara[0].ini);

    preencheVetor_(vetor, tamanho);
    printf("\nInsertion Sort\n");
    compara[1].ini = stampstart();
    insertionSort(vetor, tamanho);
    compara[1].fim = stampstop(compara[1].ini);

    preencheVetor_(vetor, tamanho);
    printf("\nSelection Sort\n");
    compara[2].ini = stampstart();
    selectionSort(vetor, tamanho);
    compara[2].fim = stampstop(compara[2].ini);

    preencheVetor_(vetor, tamanho);
    printf("\nQuick Sort\n");
    compara[3].ini = stampstart();
    quickSort(vetor, 0, tamanho - 1);
    compara[3].fim = stampstop(compara[3].ini);

    preencheVetor_(vetor, tamanho);
    printf("\nShell Sort\n");
    compara[4].ini = stampstart();
    shellSort(vetor, tamanho);
    compara[4].fim = stampstop(compara[4].ini);
}
//******************************
//MAIN
//******************************
int main(){
  TMP compara[5];
  uint32_t  start, stop;
  int *vetor;
  int tamanho, op;
  double ini, fim;
  printf("Qual a quantidade de elementos do vetor: ");
  scanf("%d", &tamanho);
  if ((malloc( tamanho * sizeof (int)) == NULL)){
    printf("sem espaço de memória");
    exit(1);
  }
  vetor = malloc( tamanho * sizeof (int));
  do{
     printf("\n\nSelecione qual o metodo de ordenação sera utilizado: ");
     printf("\n1 - Bubble Sort\n2 - Insertion Sort\n3 - Selection Sort\n4 - Quick Sort\n5 - Shell Sort\n6 - Todos os metodos\n7 - Sair\n");
     scanf("%d", &op);
     switch (op){
       case 1:
         preencheVetor(vetor, tamanho);
         imprimeVetor(vetor, tamanho);
         compara[0].ini = stampstart();
         bubbleSort(vetor, tamanho);
         compara[0].fim  = stampstop(compara[0].ini);
         imprimeVetor(vetor, tamanho);
         break;
       case 2:
         preencheVetor(vetor, tamanho);
         imprimeVetor(vetor, tamanho);
         compara[1].ini = stampstart();
         insertionSort(vetor, tamanho);
         compara[1].fim = stampstop(compara[1].ini);
         imprimeVetor(vetor, tamanho);
         break;
       case 3:
         preencheVetor(vetor, tamanho);
         imprimeVetor(vetor, tamanho);
         compara[2].ini = stampstart();
         selectionSort(vetor, tamanho);
         compara[2].fim = stampstop(compara[2].ini);
         imprimeVetor(vetor, tamanho);
         break;
       case 4:
         preencheVetor(vetor, tamanho);
         imprimeVetor(vetor, tamanho);
         compara[3].ini = stampstart();
         quickSort(vetor, 0, tamanho - 1);
         compara[3].fim = stampstop(compara[3].ini);
         imprimeVetor(vetor, tamanho);
         break;
       case 5:
         preencheVetor(vetor, tamanho);
         imprimeVetor(vetor, tamanho);
         compara[4].ini = stampstart();
         shellSort(vetor, tamanho);
         compara[4].fim = stampstop(compara[4].ini);
         imprimeVetor(vetor, tamanho);
         break;
       case 6:
         todosOsMetodos(compara, vetor, tamanho);
         printf("\nBubble Sort ------> ~%10d ms", compara[0].fim - compara[0].ini);
         printf("\nInsertion Sort ---> ~%10d ms", compara[1].fim - compara[1].ini);
         printf("\nSelection Sort ---> ~%10d ms", compara[2].fim - compara[2].ini);
         printf("\nQuick Sort -------> ~%10d ms", compara[3].fim - compara[3].ini);
         printf("\nShell Sort -------> ~%10d ms", compara[4].fim - compara[4].ini);
         break;
     }
   }while (op!= 7);
  return 0;
}
