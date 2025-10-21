#include <stdio.h>
/*
Consumo médio do automovel
*/

int main()
{
    //ENTRA DA
    float distancia, combustivel, consumo;
    printf("Digite a distância percorrida pelo carro Km:");
    scanf("%f", &distancia);
    printf("Digite o total de combustível gasto :");
    scanf("%f", &combustivel);

    //processamento
    consumo = distancia / combustivel;

    //saída
    printf("consumo km/litro:%.2f", consumo);
    return 0;
}
