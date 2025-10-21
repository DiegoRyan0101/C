#include <stdio.h>
#include <math.h>

//equação algébrica
//Algoritmo para cálculo da fórmula x = a^~~2 + b - c
// x = a² + b - c
//x é igual ao quadrado de a, somado ao vlaor de b, e subtraido do valor de c

int main()
{
    float a, b, c, x;
    printf("Digite os valores de a, b, e c: \n");
    scanf("%f %f %f", &a, &b, &c);
    x = pow(a, 2) + b - c;
    printf("%f^2 + %f - %f' = %f \n", a, b, c, x);
    return 0;
}
