#include <stdio.h>
//modificadores do tipo inteiro - short, long, signed e unsigned
//O tamanho que cada variável em C pode ocupar em memoria
//Se quiser saber quanto vale o valor do int, ou de qualquer outra variável, use a função 'sizeof(tipo)', e troque o tipo por um tipo de variavel
/*
int main()
{
    printf("O tamanho do inteiro em meu computador; %d bytes",sizeof(int));
}
*/

//Tendo um maior controle sobre o tamanho dos inteiros - short e long
//dois modificadores do tipo inteiro: short e long, eles alteram o tamanho de bytes do inteiro.
//A diferença entre os inteiros e modificadores está na faixa de valores armazenadas.
//short segnifica curto e long segnifica longo.
//colocando uma dessas palavras antes da 'int', você definirá um tamanho e uma faixa de valores para suas variáveis.
//ex; se criar a variável inteira 'numero' como short, deverá fazer:
//short int numero;
//
//De modo análogo para uma variavel com o modificador 'long';
//long int numero;

/*
//Para saber o tamanho de bytes de seus sistema, use novamente a função sizeof;
int main()
{
    printf("int : %d bytes\n",sizeof(int));
    printf("short int: %d bytes\n",sizeof(short));
    printf("long int: %d bytes\n",sizeof(long));
}
*/

//Controlando a faixa de valores dos inteiros através do sinal: signed e unsigned
//Para declarar que um número seja apenas positivo(incluindo o 0), usamos o modificador unsigned:
// unsigned int teste;
//
//Analogamente para especificar que o inteiro possui valores positivos e negativos;
// signed int teste;

//exercício, mostrar os tamanhos das seguintes variáveis em seu computador.
/*int, short int, long int, signed int, unsigned int, short signed int, short unsigned int, long signed int, long unsigned int*/
int main()
{
    printf("int : %d bytes\n",sizeof(int));
    printf("short int : %d bytes\n",sizeof(short int));
    printf("long int : %d bytes\n",sizeof(long int));
    printf("signed int : %d bytes\n",sizeof(signed int));
    printf("unsigned int : %d bytes\n",sizeof(unsigned int));
    printf("short signed int : %d bytes\n",sizeof(short signed int));
    printf("short unsigned int : %d bytes\n",sizeof(short unsigned int));
    printf("long signed int : %d bytes\n",sizeof(long signed int));
    printf("long unsigned int : %d bytes\n",sizeof(long unsigned int));
}
