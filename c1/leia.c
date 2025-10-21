#include <stdio.h>
//troca de valores

int main()
{
    //entrada
    int a, b, troca;
    printf("Primeira Variável A: \n");
    scanf("%d", &a);
    printf("Segundad Vairável B: \n");
    scanf("%d", &b);

    //trocando valores
    troca=a;

    a=b;

    b=troca;

    //saída
    printf("O valor de A é: %d \n", +a);
    printf("O valor de B é: %d \n", +b);
    return 0;
}
