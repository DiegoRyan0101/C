#include <stdio.h>

/*
        switch case COM if else
switch case dentro de um if else

            calculadora
*/

int main()
{
    /*
    //calculadora com switch case
    char operador;
    float a, b;
    // a outra forma que não é direta é criar uma variável aqui que recebe os valores e depois coloca está variável no lugar do (a b)
    printf("Digite a operação (+, -, *, /):");
    scanf("%c", &operador);

    printf("Digite os dois valores:\n");
    scanf("%f %f", &a, &b); // %f %f assim pode se receber dois valores de uma vez
    //podemos fazer o scanf para pegar dois valores separados, ou fazer como está escrito acima
    switch (operador){
        case '+': printf("%.2f %c %.2f = %.2f", a, operador, b, (a + b)); break;  //calculo direto
        case '-': printf("%.2f %c %.2f = %.2f", a, operador, b, (a - b)); break;  //calculo direto
        case '*': printf("%.2f %c %.2f = %.2f", a, operador, b, (a * b)); break;  //calculo direto
        case '/': printf("%.2f %c %.2f = %.2f", a, operador, b, (a / b)); break;  //calculo direto
    }
    */

    //colocando um if else dentro do switch case
    char operador;
    float a, b;
    // a outra forma que não é direta é criar uma variável aqui que recebe os valores e depois coloca está variável no lugar do (a b)
    printf("Digite a operação (+, -, *, /):");
    scanf("%c", &operador);

    printf("Digite os dois valores:\n");
    scanf("%f %f", &a, &b); // %f %f assim pode se receber dois valores de uma vez
    //podemos fazer o scanf para pegar dois valores separados, ou fazer como está escrito acima
    switch (operador){
        case '+': printf("%.2f %c %.2f = %.2f", a, operador, b, (a + b)); break;  //calculo direto
        case '-': printf("%.2f %c %.2f = %.2f", a, operador, b, (a - b)); break;  //calculo direto
        case '*': printf("%.2f %c %.2f = %.2f", a, operador, b, (a * b)); break;  //calculo direto
        case '/':
            if (a != 0 && b != 0){
                printf("%.2f %c %.2f = %.2f", a, operador, b, (a / b));
            } else {
                printf("Não é possivel fazer uma divisão por zero.");
            }
            break;  //calculo direto
        default:
        printf("Operador inválido!");
    }
    return 0;
}
