#include <stdio.h>

/*
exemplo de switch case
*/

int main()
{
    int dia;

    printf("Digite um número de 1 a 7:");
    scanf("%d", &dia);


    //Exemplo de estrutura 1 | switch case
    switch (dia){
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terça-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sábado\n"); break;
        default: printf("Número inválido!\n");
    }


    /*
    //Exemplo de estrutura 2 | switch case
    switch (dia){
        case 1:
            printf("Domingo\n");
        break;
        case 2:
            printf("Segunda-feira\n");
        break;
        case 3:
            printf("Terça-feira\n");
        break;
        case 4:
            printf("Quarta-feira\n");
        break;
        case 5:
            printf("Quinta-feira\n");
        break;
        case 6:
            printf("Sexta-feira\n");
        break;
        case 7:
            printf("Sábado\n");
        break;
        default:
            printf("Número inválido!\n");
    }
    *///não faz tanta diferença, os dois são iguais.
    //é recomendado usar o switch case, quando não temos uma comparação no switch (aqui) não pode ter uma condição ex; switch (aqui > o)
    //quando temos faixa, opções, menor que tanto e maior que tanto, cria espaços intervalo de valores, ai é recomendado usar o switch case
}
