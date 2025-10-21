#include <stdio.h>
/*
Conversão cambial
*/

int main()
{
    //entrada
    float dolar = 4.87;
    float real;
    float conversao;

    //processamento
    printf("\n===Conversão cambial===\n");
    printf("\nValor em Real R$:" );
    scanf("%f", &real);

    //saída
    conversao = real / dolar;
    printf("Real convertido em dólar U$: %.2f", conversao);
    return 0;
}
