#include <stdio.h>
/*
Expressões matemáticas em C
Cálculo da área de um triângulo
*/

int main()
{
    float base, altura, area;
    printf("Informe o valor da base: ");
    scanf("%f", &base);
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("Área calculada: %.1f\n", area);
    return 0;
}
