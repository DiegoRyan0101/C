#include <stdio.h>

/*
    ###############
    # switch case #
    ###############
switch case mais performace. pode se usar inumeras linhas sem repetir o if else, ai usamos o switch case
*/

int main()
{
    /*
    //ex; primeiro com if, else,
    int opcao = 1;

    printf("Jogo:");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("Novo jogo \n");
    } else if(opcao == 2){
        printf("Carregar jogo\n");
    } else if(opcao == 3){
        printf("Sair\n");
    }
    *///USAMOS SWITCH CASE QUANDO TEMOS MAIS DE UMA OPÇÃO

    //SINTAXE DO SWITCH CASE
    int opcao = 1;

    printf("Opção:");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Fase número 1");
        break; //break para dar fim e não exibir os outros conteúdo sem s//erem chamados. break para dar fim, break=não continuar
        case 2:
            printf("Fase número 2");
        break;//deixamos ele no final de toda case, só não colocamos depois do default
        case 3:
            printf("Fase número 3");
        break;
        case 4:
            printf("Fase número 4");
        default://default é usado para caso o usuário não digite algo que não estejá no código, abrimos um printf e digitamos que função inválida
            printf("Opção inválida!");
    }


    return 0;
}
