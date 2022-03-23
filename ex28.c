#include <stdio.h>
#include <math.h>

int main (){

float vm, lucro, ipi, icm, imposto, vv;

    printf("Insira o valor do veiculo vindo da montadora: ");
    scanf("%f", &vm);

    lucro = (vm * 0.15);
    printf("\nO valor de lucro sobre o preco de montadora e: %0.3f", lucro);

    ipi = (vm * 0.11);
    printf("\nO valor do IPI sobre o preco de montadora e: %0.3f", ipi);

    icm = (vm * 0.17);
    printf("\nO valor de ICM sobre o preco de montadora e: %0.3f", icm);

    vv = vm + lucro + ipi + icm;

    printf("\nO valor de Venda final do veiculo sera: %0.3f", vv);

return 0;

}

