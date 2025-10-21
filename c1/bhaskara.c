#include <stdio.h>
#include <math.h>
/*
Bhaskara
*/

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Informe os valores de a, b, e c:");
    scanf("%f %f %f", &a, &b, &c);
    delta = pow(b,2) - 4*a*c;
    x1 = (-b+sqrt(delta))/2*a;
    x2 = (-b-sqrt(delta))/2*a;
    printf("Valor de x1: %.2f \n", x1);
    printf("Valor de x2: %.2f \n", x2);
    return 0;
}
