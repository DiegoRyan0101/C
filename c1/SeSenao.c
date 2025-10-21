#include <stdio.h>
/*
// if e else e operadores lógicos e condicionais.
int main()
{
    //como construir uma lógica se senão, if(se) , else(senão). ex; abaixo o corpo de uma condição if e else.
    if () { //tudo que estiver dentro dos parenteses, se(if) for verdaderia eu faço alguma coisa, senão(else) for verdadeira eu faço outra coisa. a condição if e else sempre será verdadeiro ou não.

    }else{

    }

    return 0;
}
*/
int main()
{

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("MAIOR");

    }else{
        printf("MENOR");
    }

// =  -> atribuição
// == -> igualdade
// >= -> maior ou igual
// <= -> menor ou igual
// >  -> maior
// <  -> menor
// != -> diferente
// && -> END = E
// || -> OR = OU | duas barras em pé se chama paipes
//podemos usar estes operadores dentro de um if

    return 0;
}
