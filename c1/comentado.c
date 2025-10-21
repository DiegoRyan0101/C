#include <stdio.h>
int main(void)
{
    printf("Hello\n world -C\\n\n\hn");
    return 0;
}


//Oque é e para que serve| #include <stdio.h>
//O kernel - miolo do sistema - do linux e do windows (e da maioria dos sistemas operacionais) é feito, em sua maioria, com a linguagem C.
//Quando for programar você vai dizer ao C oque vai fazer e que funçoes da linguagem C voce vai precisar em sua aplicação. E isso é feito em partes, atráves da importação de bibliotecas
//não existe um número especifico de bibliotecas em C, e tambem podemos criar as nossas bibliotecas.
//
//e o c não vai carregar todas elas automaticamente. Por isso precisamos dizer ao compilador o que vamos usar.
//Para fazer isso, usamos o '#include', que é chamado de diretiva e em seguida escrevemos o nome da biblioteca.
//No caso, vamos usar a biblioteca 'stdio.h'. dentro desta biblioteca existe um código em C.
//O std de 'stdio' é de standard(padrão) e o io é de input/Output(entrada e saída).
//no nosso caso, vamos usar a função printf como saída de dados.


//Oque é e para que serve int main(void){}
//main() é a função principal. sempre que compilamos um codigo em C, seu início se dará atráves dessa função.
//tudo começa a partir dela.
//O codigo da função é tudo aquilo que fica entre as chaves: {}
//Seu código C, sempre precisa possuir a função main.

//O que é e para que serve: printf()
//print segnifica imprimir
//a funçao printf() faz é imprimir uma mensagem na tela.
//e dentro da função printf("tudo que estiver dentro das aspas simples ou duplas dentro dos parênteses, é considerado um string, string é tudo que estiver dentro de aspas.")
//a função printf é feita para receber e exibir uma string.
//note que só podemos usar a função printf, porque importamos a biblioteca stdio.h


// \n : new line, adiconando uma linha em branco
// já o caractere '\n' é uma nova linha, pula uma linha.

//sempre que terminar um código em C dentro das chaves, se termina o código com ponto e virgula;

