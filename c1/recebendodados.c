#include <stdio.h>


//Operadores matemáticos
int main()
{
    float num1, num2;
    printf("digite 2 números(enter após cada número): \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("Soma: %.2f + %.2f = %.2f \n", num1, num2, num1 + num2);
    printf("Subtração: %.2f - %.2f = %.2f \n", num1, num2, num1 - num2);
    printf("Multiplicação: %.2f * %.2f = %.2f \n", num1, num2, num1 * num2);
    printf("Divisão: %.2f / %.2f = %.2f \n", num1, num2, num1 / num2);
    return 0;

}
