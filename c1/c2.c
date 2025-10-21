#include <stdio.h>  // Declarações globais:
#include <stdlib.h> //bibliotecas usadas pelo programa

int main()//função principal
{//Início do programa
    printf("hello world \n");//escreve uma mensagem na tela de saída
    system("pause");//faz uma pausa antes de terminar o progrma
    return 0; //retorna o código de erro ZERO para o sistema
              //Operacional informando que está tudo OK.
}//fim do programa

/*
comentário globla
*/
//os comentários não alteram o código, eles são ignorados pelo compilador e servem, portanto, apenas para ajudar o programador a enteder seu código.
//comentário de uma linha

/*
-#include <nome_da_variável> é utilizada para declarar as bibliotecas que serão utilizadas.
-todo programa em C deve conter a função main(). essa função é responsavel pelo início da execução do programa, e é dentro dela que colocamos os comandos que queremos que o programa execute.
-as chaves definem o início({) e o fim (}) de um bloco de comandos/instruções. acima, as chaves definem o início e o fim do programa.
-A função main() foi definida como uma função int(ou seja, inteira) e, por isso, precisa devolver um valor inteiro. temos então a necessidade do comando return 0; para informar que o programa chegou ao seu final e que está tudo OK.
-A função printf() está definida na biblioteca stdio.h Ela serve para imprimir uma mensagem de texto na tela do computador, o texto a ser escrito deve estar entre aspas duplas, e, dentro dele, podemos também colocar caracteres especiais, como o \n ,que indica que é para mudar de linha antes de continuar a escrever na tela.
-O comando system("pause"); serve para interromper a execução do programa(fazer uma pausa) para que se possa analisar a tela de saída, após o término da execução do programa. ela está definida na biblioteca stdlib.h
-A declaração de um comando quase sempre termina com ponto e vírgula(;)
-Os parênteses definem o início(()  e o fim ()) da lista de argumentos de uma função. Um argumento é a informação que será passada para a função agir. no exemplo podemos ver que os comandos main, printf e system são funções.

-identação do código; torna a leitura do código-fonte muito mais fácil e facilita a sua modificação.
-A identação é o espaçamento (ou tabulação) colocado antes de começar a escrever o código na linha. Ela tem o objetivo indicar a hierarquia dos elementos. No nosso exemplo, os comandos printf(), system() e return possuem a mesma hierarquia(portanto, o mesmo espaçamento) e estão todos contidos dentro do comando main(daí o porquê do espaçamento)
-O ideal é sempre criar um novo nível de indentação para um novo bloco de comandos.
-a identação
*/

/*
Usando uma biblioteca: o comando #include
o comando #include é utilizado para declarar as bibliotecas que serãm utilizadas pelo programa.
-Uma biblioteca é um arquivo contendo um conjunto de funções(pedaços de código), variáveis, macros etc., já implementados, e que podem ser utilizados pelo programados em seu programa.
========
O comando #include permite duas sintaxes:

-#include <nome_da_biblioteca>: o pré-processador procurará pela biblioteca nos caminhos de procurar pré-especificados do compilador.
-Usamos essa sintaxe quando estamos incluindo uma biblioteca que é própria do sistema, como as biblotecas stdio.h e stdlib.h

-#include  "nome_da_biblioteca": o pré-processador procurará pela biblioteca no mesmo diretório onde se encontra o nosso programa.
Podemos ainda optar por informar o nome do arquivo com o caminho completo, ou seja, em qual diretório ele se encontra e como chegar até lá.
=========
-De modo geral, os arquivos de bibliotecas na linguagem C são terminados com a extensão .h
A seguir, temos dois exemplos do uso do comando #include:
#include <stdio.h>
#include "/media/programas/soma.h"
*/

/*
    Criando suas próprias bibliotecas
Uma biblioteca é como o seu arquivo de código-fonte, com a diferença de que ele não possui a função main(). Isso ocorre porque o seu programa não vai começar na biblioteca.
criaremos dois arquivos.
.Cabeçalho(ou header) da biblioteca: esse arquivo contém as declarações e definições do que está contido dentro da biblioteca. Aqui são definidas quais funções(apenas o seu protótipo), tipos e variáveis farão parte da biblioteca. Sua extensão é .h
.Código-fonte da biblioteca: arquivo que contém a implementação das funções definidas no cabeçalho. Sua extensão é .c

vamos chamar nossa biblioteca de aritmetica. assim teremos que criar dois arquivos: aritmetica.h e aritmetica.c
vamos começar pelo arquivo de cabeçalho aritmetica.h Ele deve conter as definições do que conta na nossa biblioteca
Nesse caso, ele vai incluir apenas o protótipo de nossas funções

Em seguida, devemos criar o arquivo com as implementações das nossas funções: aritmetica.c
Nesse arquivo serão codificadas nossas  funções e também será incluída qualquer biblioteca adicional de que nossas funções precisem para funcionar.
ex, se uma dessoas funções utilizasse a função printf(), seria necessário incluir a biblioteca stdio.h no nosso arquivo.

independentemente de precisarmos ou não incluir outras bibliotecas, devemos sempre incluir nossa própria biblioteca (aritmetica.h) no código fonte dela (aritmetica.c). para isso, usamos #include "aritmetica.h"
*/
