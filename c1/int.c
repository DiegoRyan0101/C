#include <stdio.h>
//Como declara variáveis inteiras
//Variáveis são os nomes que vamos dar a determinado bloco de memória.
//Sempre que quisermos usar um dado(um numero, um caractere, um texto,etc) na linguagem C, você precisará declarar uma variável.
//C age no hardware da sua máquina.
//para declarar uma variável você da um nome e ponto e virgula no final
//se esse valor for inteiro, você precisará declarar uma variavel(poderia usar o nome 'pontos', por ex), e o c irá colocar um espaço de 2 ou 4 bytes de memória.
//aquele espaço em memória serve somente para sua variável, é o endereço dela.
//Para declarar uma variável inteira fazemos:
//ex: int nome_de_sua_variavel;
//Vale realçar que os tipos (no caso, usamos o tipo int), são sempre em letras minúsculas e vÊm antes do nome da variável.
//Para declarar variáveis inteiras colocamos o int antes do nome da variável
/*
//Como imprimir um número inteiro na tela
//como imprimir o valor de uma variável na função printf.
//Dentro do printf, entre as aspas duplas, os números são representados por: %d, e após o fechamento das aspas, colocamos uma vírgula e o real valor da variável que é representada por %d
//Eu tenho 22 anos, mas sem digitar o 22
int main()
{
    printf("Eu tenho %d anos", 22);
}
*/

/*
//Podemos colocar vários números inteiros representados por %d dentro das aspas, e seus valores serão os que vem após a vírgula, na mesma ordem.
//ex; um programa imprima: eu nasci em 2003, no dia 25 do mes 05
int main()
{
    printf("Eu nasci no ano %d, no dia %d do mes %d",2003,25,05);
}
*/

/*
//Agora que já sabemos declarar um número e imprimir ele na tela, vamos fazer os dois.
//Vamos criar uma variável inteira chamada hacking e imprimir seu valor no printf
int main()
{
    int hacking;
    printf("O valor da variavel 'hacking' eh %d", hacking);
}
*/


//Como inicializar variáveis inteiras
//Variáveis só servem se pudermos controlar seu valor, e para isso temos que inicializalas, ou seja, colocar um valor dentro dessa variável.return
//Para isso, usamos o símbolo de igualdade '='
//A inicialização pode ocorrer de duas formas
//1-Junto com a declaraçao da variavel
// int idade = 18;
//
//2-Depois da declaração, em qualquer lugar do programa(após a variavel ter sido declarada)
// int idade;
// ...
// idade = 18;
//
//ex, um programa que mostre na tela o salário que você desejar receber:
/*
int main()
{
    int salario = 5;
    printf("Eu pretendo ganhar %d mil reais como programador C",salario);
}
//Note que você pode alterar o valor da variavel 'salario', e esse valor sempre será impresso no printf.
*/


//por hora vamos ver, como é possivel usar alguns cálculos com e nas variáveis inteiras, dentro ou não do printf.
//ler o seguinte programa e tentar entender cada trecho do seguinte código. que está comentado
//ele mostra que é possível declarar variáveis inteiras em varias partes do código, que podemos fazer operações matemáticas com as variáveis, dentre outras coisas.
int main()
{
    int soma = 1+1;
    printf("1 + 1 = %d \n", soma);

    int numero1 = 10;
    int numero2 = 20;

    soma = numero1 + numero2; //Podemos fazer o valor de uma variável somar com outro valor de outra variável
    printf("%d + %d = %d \n",numero1, numero2, soma);
}
