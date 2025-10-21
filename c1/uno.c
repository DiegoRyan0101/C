#include <stdio.h>

//Operadores Matemáticos

int main()
{
    int menu;
    int a;
    int b;
    int resultado;

    printf("\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
    scanf("%d", &menu);

    switch (menu){
        case 1:
            printf("Soma:\n");
            scanf("%d", &a);
            scanf("%d", &b);
            resultado = a + b;
            printf("Soma: %d + %d = %d\n", a, b, resultado);
        break;
        case 2:
            printf("Subtração:\n");
            scanf("%d", &a);
            scanf("%d", &b);
            resultado = a - b;
            printf("Soma: %d + %d = %d\n", a, b, resultado);
        break;
        case 3:
            printf("Multiplicação:\n");
            scanf("%d", &a);
            scanf("%d", &b);
            resultado = a * b;
            printf("Soma: %d + %d = %d\n", a, b, resultado);
        break;
        case 4:
            printf("Divisão:\n");
            scanf("%d", &a);
            scanf("%d", &b);
            resultado = a + b;
            printf("Soma: %d + %d = %d\n", a, b, resultado);
        break;
    }

    return 0;
}
