#include <stdio.h>
#define L 2
#define C 2
void recebe(int original[][C]);
void copiar(int copiado[][C], int original[L][C]);
void dobrar(int dobrado[][C], int original[L][C]);
void exibir(int matriz[][C]);

int main(){
    int original[L][C], copia[L][C], dobrado[L][C];
    recebe(original);
    copiar(copia, original);
    dobrar(dobrado, original);
    printf("Vetor original: \n");
    exibir(original);
    printf("\nVetor copiado : \n");
    exibir(copia);
    printf("\nVetor dobrado : \n");
    exibir(dobrado);
    return 0;
}
void recebe(int original[L][C]){
    int linha, coluna;
    for(linha = 0 ; linha < L ; linha++)
        for(coluna = 0 ; coluna < C ; coluna++){
            printf("Digite o elemento [%d][%d]: ", linha+1, coluna+1);
            scanf("%d", &original[linha][coluna]);
        }
}
void copiar(int copiado[L][C], int original[L][C]){
    int linha, coluna;
    for(linha = 0 ; linha < L ; linha++)
        for(coluna = 0 ; coluna < C ; coluna++)
            copiado[linha][coluna] = original[linha][coluna];
}
void dobrar(int dobrado[L][C], int original[L][C]){
    int linha, coluna;
    for(linha = 0 ; linha < L ; linha++)
        for(coluna = 0 ; coluna < C ; coluna++)
            dobrado[linha][coluna] = 2 * original[linha][coluna];
}
void exibir(int matriz[L][C]){
    int linha, coluna;
    for(linha = 0 ; linha < L ; linha++){
        for(coluna = 0 ; coluna < C ; coluna++)
            printf("%3d ", matriz[linha][coluna]);
        printf("\n");
    }
}

