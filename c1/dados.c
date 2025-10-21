#include <stdio.h>
/*conhecendo os tipos de dados em c*/

int main()
{
    int idade = 10;
    printf("Número inteiro: %d \n", idade);
    float preco = 7.45;
    printf("Número de ponto flutuante: %f \n", preco);
    printf("Número de ponto flutuante: %.2f \n", preco);
    double saldo = 11040.14;
    printf("Número dupla precisão: %1f \n", saldo);
    char letra = 'g';
    printf("Caractere: %c \n", letra);
    char frase[24] = "frase com 24 caracteres";
    printf("string: %s \n",frase);
    _Bool estaChovendo = 0;
    return 0;
}
