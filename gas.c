#include <stdio.h>

    Int main () 
    
    {
    
    float  q, v, c, d;
    
    printf("informe a quantidade de combustivel consumido: ");
    
    scanf("%f" , &q );
    
    printf("Informe o valor por litro do combustível: ");
    
    scanf("%f", &v);
    
    printf("Informe a distância percorrida: ");
    
    scanf("%f", &d);
    
    c = q * v / d;
    
    printf(“O custo por km rodado e de R$%o.2f”, c);
    
    return 0;
    
    }