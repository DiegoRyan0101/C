#include <stdio.h>
//o Tipo char - escrevendo na linguagem C

//Como declarar o tipo char em C
//Para armazenar caracteres vamos usar um tipo especial de dados, o char(de character - caracter, em inglês)
//O tipo char serve para armazenar UM, e somente UM, caractere.
//Para declarar, usamos a seguinte sintaxe; char nomeDaVariavel;
//ao fazer isso, estamos alocando 1 byte de memória para guardar nosso caractere.
//Se quiser armazenar mais caracteres, temos que usar as strins, que são um conjunto de caracteres, usados apra escrever textos maiores.

//Como inicializar variáveis char em C
//Sempre colocar o caractere entre aspas simples.
//ex; para guardar a letra C
// char letra='c';
//A sintaxe linguagem de programação é case sensitive. Minúsculas são diferentes de minusculas.
 //char letraMinuscula ='c';
 //char letraMaiucusla = 'C';

//Como imprimir caracteres e textos na tela
//usando a função printf. imprimiremos na tela letras e caracteres.
//Usamos %d para mostrar inteiros
//%f para float e double
//usaremos o %c para representar caracteres.

//exibe hacker
/*
int main()
{
    char letra0='h', letra1='a', letra2='c', letra3='k', letra4='e', letra5='r';
    printf("%c%c%c%c%c%c",letra0,letra1,letra2,letra3,letra4,letra5);
}
*/
//espaço em caractere; char letra=''
//quebra de linha; char letra='\n'

//tabela ASCII em C
/*int main()
{
    char ascii = 67;
    printf("%c%",ascii);
}
*/

//escrevendo o nome em ascii
int main()
{
    char letra0=100, letra1=105, letra2=101, letra3=103, letra4=111;
    printf("%c%c%c%c%c",letra0,letra1,letra2,letra3,letra4);
}
