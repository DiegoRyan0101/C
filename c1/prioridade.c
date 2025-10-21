#include <stdio.h>
/*
Prioridade entre expressões matemáticasd em C
*/

int main()
{
    float a1, a2, b=3, c=5, d=4, e=6, f=2;
    a1 = b+c-d/e*f;
    a2 = b+((c-d)/e)*f;
    printf("Resultado a1: %.2f \n", a1);
    printf("Resultado a2: %.2f \n", a2);
    return 0;
}
