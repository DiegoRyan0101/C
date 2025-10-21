#include <stdio.h>
//funçao printf() e alguns caracteres especiais

//Caractere Especiais
/*int main(void)
{
    printf("Aspas duplas \" \n");
    printf("Barra: \\");
    return 0;
}*/
//Como exibir esses caracteres especiais na forma de texto
//Usando o caractere de \
//Quando queremos que o carectere de aspas duplas apareça no console, colocamos o \ antes: \"
//O c vai interpretar que, com esse símbolo \ antes, o caractere " deve ser exibido na tela.
//
//Como exibir o  caractere \ : coloque uma barra antes dele também.
//vai ficar: \\

//Sinais sonoros e outros caracteres especiais
/*int main(void)
{
    printf("Carriage return: \r");
    getchar();
    return 0;
}*/
//Carriage return: \r : esse caractere especial faz com que o cursor se mova para o início da linha:
//O comando getchar() faz com que o programa espere que o usuário digite alguma tecla.


//tabulação horizontal(TAB): \t
/*int main(void)
{
    printf("Antes do \\t \t depois do \\t");
    return 0;
}
*/


//Sons: \7 e \a
int main(void)
{
    printf("\7 \a");
    return 0;
}
