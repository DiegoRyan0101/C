#include <stdio.h>

int main()
{
    //como receber valor do usuário.
    int numero; // precisamos declarar uma variável por primeiro, pois o valor do scanf %d & ,será armazenado na variável escrita aqui. no inicio. e para exibir é só fazer um printf com %d e o nome da variável que foi armazenada o dado.

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // o & comercial aqui segnifica que estou gravando uma informação na variável numero. e usamos o scanf para se comunicar com o usuário.

    printf("O numero foi o: %d", numero); // aqui não precisa do & comercial, pois eu estou apenas mostrando a informação

    return 0;
}
