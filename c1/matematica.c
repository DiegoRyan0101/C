 #include <stdio.h>
//Operadores Matemáticos
int main()
{
    int num1 = 10, num2 = 2; //declarando duas variáveis do tipo inteiro.
    //mas também pode escrever deste outro jeito se preferir
    //int num1;
    //int num2;
    //vair rodar igual o código a cima.

    // também pode ser feito de outra maneira a soma e resultado, veja o código abaixo
    //int resultado;
    //resultado = num1 + num2;
    //printf("Soma: %d + %d = %d", num1, num2, resultado); #forma direta.


    printf("adicao: %d + %d = %d \n", num1, num2, num1 + num2);
    printf("Subtracao: %d - %d = %d \n", num1, num2, num1 - num2);
    printf("Divisao: %d / %d = %d \n", num1, num2, num1 / num2);
    printf("Multiplicao: %d * %d = %d \n", num1, num2, num1 * num2);
    printf("Modulo: %d %% %d = %d \n", num1, num2, num1 % num2);

    return 0;
}
