#include <stdio.h>
//Principais Tipos de Dados em C
/*
Tipo | tamanho(bytes) | Faixa de valores(aproximada)  |Exemplo de uso
=============================================================================
char   | 1 byte         | -128 a 127(signed char)       | char letra = 'A';
       |                | 0 a 255(unsigned char)        | #aqui estamos declarando uma variável, do tipo char, com o nome letra, que vai receber um valor, que é o A, que é um caractere, podemos passar varios caracteres.
=============================================================================
int    | 4 bytes        |-2.147.483.648 a 2.147.483.647 | int idade = 25;  #aqui estamos declarando uma variável do tipo inteiro(int), com o nome idade, que vai receber um valor 25.
=============================================================================
float  | 4 bytes        |~6 casas decimais de precisão  | float pi = 3.1415; #tipo float número quebrado, ou flutuante. declaramos uma variável do tipo float, que vai receber um nome pi, que recebe um valor.
=============================================================================
double | 8 bytes        |~15 casas decimais de precisão | double numero = 2.718281828; #O tipo double(precisão), declaramos uma variável do tipo double, com o nome numero, que vai receber um valor
=============================================================================
_Bool  | 1 byte         |0(falso) ou 1(verdadeiro)      | _Bool ligado = 1; #underline Bool, _Bool que é o tipo booleano,True and False. zero ou um,  0 ou 1. 0 = False, 1 = True, aqui o tipo booleano recebe o nome de ligado com o valor de 1.
=============================================================================
quando vamos declarar uma variável, devemos dizer que tipo de dado ela será.
o caractere de igualdade, na programação é um meio de atribuição, atribuir algo a algo. igualdade = atribuição
*/
/*
sempre que for criar um arquivo .C
já coloca isto aqui; este código abaixo é o corpo do código em C
======================================

#include <stdio.h>

int main()
{
    return 0;
}
*/

//Como declarar uma variável.
int main()
{
    int numero = 10; //Criamos uma variável do tipo int, com o nome numero, e com atribuição com o valor 10, e fechamos o código com ponto e vírgula.
    float numeroQuebrado = 50.49; //criamos uma variável do tipo float, com o nome numeroQuebrado com atribuição com o valor 50.49, e fechamos com ponto e vírgula. Numero float ou flutuante, em programação usamos o ponto ao inves da virgula.
    //variável com nomes juntos diferentes sempre juntas nunca separada, e com uma letra em Maiúscula.
    char letra = 'A'; //quando colocamos uma aspa só aspa simples para representar uma forma diferente de receber dado.
    //valor do tipo char , nome da variável chamado de letra com atribuição de entre aspas letra A
    //Como fazer para exibir estes valores.
    //usaremos o porcentagem % ,o porcentagem cria um espaço para poder colocar um valor ali.
    // para representar o valor de um int(inteiro), usaremos o %d ,para chamar o valor do inteiro. %d(vem de %decimal), ou %i (%i é a mesma coisa ele representa inteiro)
    //colocamos uma vírgula depois das aspas, e o nome da variável, assim ela será chamada. lembrando adicona o %d para int, virgúla, e o nome da variável.
    printf("Numero: %d \n", numero);//%d vou receber um inteiro e a variável que vai me passar o valor é a variável numero.
    //usamos o barra n para uma quebra de linha. \n
    //dentro do ponto flutuante eu posso determinar quantas casas apareça
    //para colocar com duas casas decimais. coloca. %.2f (porcentagem, ponto, dois, f)
    printf("Flutuante: %.2f \n", numeroQuebrado); // se para o int é %d, o float não é %d e sim usamos %f para representar o numero quebrado ou flutuante, %f (para numero flutuante)
    printf("Letra: %c \n", letra);//Para representar o valor do tipo char e exibir para usuário, usamos o %c (que vai pegar o valor do char da variável letra.)
    //O char tem duas questões interessantes.
    //1- esta forma do tipo char: char letra = 'a'; É PARA UM CARACTERE SÓ
    //2- mas se eu tiver varios tipo de caractere: char nome[5] = ""; dentro de colchetes colocar a quantidade de caracteres que vai ter na string.
    char nome[6]= "Diego";
    printf("Nome: %s \n", nome);//quando colocamos para exibir o dado com mais de um dado, usamos o %s o s é de string.
    return 0;
}
